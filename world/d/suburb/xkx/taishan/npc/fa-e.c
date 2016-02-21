// meng-zhu.c 罚恶使者

#ifndef NPCDATA
#define NPCDATA "/data/npc/"
#endif
#define SHIZHE NPCDATA + "fa-e"

inherit NPC;
inherit F_UNIQUE;
inherit F_SAVE;

string query_save_file()
{
	return SHIZHE;
}

void create()
{
	seteuid(getuid());

	if (!restore()) {
	set_name("西方月", ({ "fae shizhe", "fae", "shizhe" }) );
	set("title", "罚恶使者" );
	set("gender", "男性" );
	set("age", 35);
      set("long","一位神色严峻的中年武人，他就是嫉恶如仇，侠名远播的武林罚恶使者。\n");
	set("attitude", "heroism");
	set("generation", 0);
	set("winner", "none");

	set("str", 25);
	set("con", 25);
	set("int", 25);
	set("dex", 25);

	set("max_kee", 500);
	set("eff_kee", 500);
	set("kee", 500);
	set("max_gin", 300);
	set("gin", 300);
	set("force", 500);
	set("max_force", 500);
	set("jiali", 30);
	set("shen_type", 0);

	set("no_clean_up",1);
	set("combat_exp", 400000);

	set_skill("force",  90); 
	set_skill("unarmed",90);
	set_skill("sword",  90);
	set_skill("dodge",  90);
	set_skill("parry",  90);

	set("weapon", "/d/suburb/xkx/shaolin/obj/changjian");
	set("armor", "/d/suburb/xkx/city/obj/cloth");

	setup();

	carry_object("/d/suburb/xkx/shaolin/obj/changjian")->wield();
	carry_object("/d/suburb/xkx/city/obj/cloth")->wear();        
	}
	else {
		set("id", "fae");
		set_name(query("name"), ({ query("id") }));
		setup();
		if( this_object()->query("weapon") ) carry_object(this_object()->query("weapon"))->wield();
		if( this_object()->query("armor") )  carry_object(this_object()->query("armor"))->wear();        
	}
}

void init()
{
	object me = this_object();

	add_action("do_recopy",  "recopy");
	add_action("do_recover", "recover");
	add_action("do_kill", "kill");

}

int do_kill()
{
	object ob;
	int i;

	command("say 你想谋害本使者，当真是自找死路！ 座下红衣武士何在！");
	message_vision("四周的红衣武士群起对$N发动攻击！\n", this_player());

	for(i=0; i<4; i++) {
		if( objectp( ob = present("wei shi " + (i+1), environment(this_object())) ) )
				 ob->kill_ob(this_player());	
		else	this_object()->kill_ob(this_player());		
	}

	return 1;
}

int accept_fight(object ob)
{
	object me, mengzhu, shangshan;
	string name1, name2;
 
	me  = this_object();
		
	if(!( mengzhu = find_living("mengzhu")) )
	mengzhu = load_object("/d/obj/clone/npc/meng-zhu");
	name1 = mengzhu->query("winner");

	if( this_player()->query("id") == name1 )
		return notify_fail("你已经是武林盟主，还要抢当罚恶使者？！\n");

	if(!( shangshan = find_living("shangshan")) )
	shangshan = load_object("/d/obj/clone/npc/shang-shan");
	name2 = shangshan->query("winner");

	if( this_player()->query("id") == name2 )
		return notify_fail("你已经是赏善使者，还要抢当罚恶使者？！\n");

	if ( me->query("winner") == ob->query("id") ) 
		return notify_fail("你跟你自己打什么架？！\n");

	if (wizardp(this_player()))
		return notify_fail("巫师不能抢使者之位！\n");

	if ( me->is_fighting() ) 
		return notify_fail("已经有人正在挑战罚恶使者！\n");

	me->set("eff_kee", me->query("max_kee"));
	me->set("kee",     me->query("max_kee"));
	me->set("gin",   me->query("max_gin"));
	me->set("force",  me->query("max_force"));

	remove_call_out("checking");
	call_out("checking", 1, me, ob);
	
	return 1;
}

int checking(object me, object ob)
{

	object obj;
	int my_max_qi, his_max_qi;

	my_max_qi  = me->query("max_kee");
	his_max_qi = ob->query("max_kee");

	if (me->is_fighting()) {
		if ( (me->query("kee")*100 / my_max_qi) <= 80 )
			command("exert recover");

		call_out("checking", 1, me, ob);
		return 1;
	}

	if ( !present(ob, environment()) ) return 1; 

	if (( (int)me->query("kee")*100 / my_max_qi) <= 30 ) {
		command("say 佩服佩服，看来我的担子可以交卸了，恭喜你成为武林罚恶使者！\n");
		command("chat 恭喜" + ob->query("name") + "被推举为现任武林罚恶使者！\n");
		remove_call_out("do_copy");
		call_out("do_copy", 1, me, ob);
		return 1;
	}

	if (( (int)ob->query("kee")*100 / his_max_qi) < 50 ) {
		command("say 看来" + RANK_D->query_respect(ob) + 
			"还得多加练习，方能在当今武林中有所作为 !\n");
		return 1;
	}

	return 1;  
}

int do_copy(object me, object ob)
{
	me->set("winner", ob->query("id"));
	me->add("generation", 1);	

	me->set("name",  ob->query("name") );
	me->set("title", "第" + chinese_number(me->query("generation")) + "代罚恶使者");
	me->set("short", me->query("title") + " " + me->query("name") + "(" + capitalize(ob->query("id")) + ")");
	me->delete("title");

	ob->delete_temp("apply/short");
	ob->set_temp("apply/short", ({me->short()}));
	
	me->set("title", "第" + chinese_number(me->query("generation")) + "代罚恶使者");
	me->set("short", me->query("title") + " " + me->query("name") + "(fae shizhe)");
	me->delete("title");

	remove_call_out("do_clone");
	call_out("do_clone", 0, me, ob);

	return 1;
}

int do_recopy(object me, object ob)
{
	me = this_object();
	ob = this_player();

	if ( me->query("winner") != ob->query("id") ) 
		return notify_fail("你不是现任罚恶使者！\n");;

	me->set("name",  ob->query("name") );
	me->set("title", "第" + chinese_number(me->query("generation")) + "代罚恶使者");
	me->set("short", me->query("title") + " " + me->query("name") + "(" + capitalize(ob->query("id")) + ")");
	me->delete("title");

	ob->delete_temp("apply/short");
	ob->set_temp("apply/short", ({me->short()}));

	me->set("title", "第" + chinese_number(me->query("generation")) + "代罚恶使者");
	me->set("short", me->query("title") + " " + me->query("name") + "(fae shizhe)");
	me->delete("title");

	remove_call_out("do_clone");
	call_out("do_clone", 0, me, ob);

	write("状态更新完毕。\n");
	return 1;
}

int do_clone(object me, object ob)
{
	object *inv;
	mapping hp_status, skill_status, map_status, prepare_status;
	string *sname, *mname, *pname;
	int i, temp; 

/* delete and copy skills */

	if ( mapp(skill_status = me->query_skills()) ) {
		skill_status = me->query_skills();
		sname  = keys(skill_status);

		temp = sizeof(skill_status);
		for(i=0; i<temp; i++) {
			me->delete_skill(sname[i]);
		}
	}

	if ( mapp(skill_status = ob->query_skills()) ) {
		skill_status = ob->query_skills();
		sname  = keys(skill_status);

		for(i=0; i<sizeof(skill_status); i++) {
			me->set_skill(sname[i], skill_status[sname[i]]);
		}
	}
	
/* delete and copy skill maps */

	if ( mapp(map_status = me->query_skill_map()) ) {
		mname  = keys(map_status);

		temp = sizeof(map_status);
		for(i=0; i<temp; i++) {
			me->map_skill(mname[i]);
		}
	}

	if ( mapp(map_status = ob->query_skill_map()) ) {
		mname  = keys(map_status);

		for(i=0; i<sizeof(map_status); i++) {
			me->map_skill(mname[i], map_status[mname[i]]);
		}
	}
	
/* delete and copy skill prepares */

	if ( mapp(prepare_status = me->query_skill_prepare()) ) {
		pname  = keys(prepare_status);

		temp = sizeof(prepare_status);
		for(i=0; i<temp; i++) {
			me->prepare_skill(pname[i]);
		}
	}

	if ( mapp(prepare_status = ob->query_skill_prepare()) ) {
		pname  = keys(prepare_status);

		for(i=0; i<sizeof(prepare_status); i++) {
			me->prepare_skill(pname[i], prepare_status[pname[i]]);
		}
	}

/* unwield and remove weapon & armor */

	inv = all_inventory(me);
	for(i=0; i<sizeof(inv); i++) {
		destruct(inv[i]);
	}
	set("weapon", 0);
	set("armor", 0);

/* wield and wear weapon & armor */

	inv = all_inventory(ob);
	for(i=0; i<sizeof(inv); i++) {
		if( inv[i]->query("weapon_prop/damage") > 100 
		||  inv[i]->query("armor_prop/armor") > 100 ) continue;

		if( inv[i]->query("weapon_prop") &&  inv[i]->query("equipped") ) {
			carry_object(base_name(inv[i]))->wield();
			me->set("weapon", base_name(inv[i]));
		}
		else if( inv[i]->query("armor_prop") &&  inv[i]->query("equipped") ) {
			carry_object(base_name(inv[i]))->wear();
			me->set("armor", base_name(inv[i]));
		}
	}

/* copy entire dbase values */

	hp_status = ob->query_entire_dbase();

		me->set("str", hp_status["str"]);
		me->set("int", hp_status["int"]);
		me->set("con", hp_status["con"]);
		me->set("dex", hp_status["dex"]);
		me->set("age", hp_status["age"]);

		me->set("max_kee",    hp_status["max_kee"]);
		me->set("eff_kee",    hp_status["eff_kee"]);
		me->set("kee",        hp_status["kee"]);
		me->set("max_gin",  hp_status["max_gin"]);
		me->set("eff_gin",  hp_status["eff_gin"]);
		me->set("gin",      hp_status["gin"]);
		me->set("max_force", hp_status["max_force"]);
		me->set("force",     hp_status["force"]);
		me->set("jiali",     hp_status["jiali"]);
		me->set("gender",    hp_status["gender"]);
		me->set("combat_exp",hp_status["combat_exp"]);

	save();

	tell_object(ob, "状态储存完毕。\n");

	return 1;
}

int do_recover()
{
	object me, ob;

	me = this_object();
	ob = this_player();

	if ( me->query("winner") != ob->query("id") ) 
		return notify_fail("你不是现任罚恶使者！\n");;

	ob->set("combat_exp", me->query("combat_exp"));

	write("状态复元完毕。\n");

	return 1;
}
