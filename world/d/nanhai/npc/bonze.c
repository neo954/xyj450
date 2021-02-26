// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// bonze.c 和尚�
// By Dream Dec. 20, 1996

inherit NPC;
inherit F_MASTER;

void create()
{
   set_name("和尚", ({ "heshang", "bonze" }));
   set("gender", "男性");
   set("age", 30);
   set("attitude", "peaceful");
   set("class", "bonze");
   set("max_kee", 600);
   set("max_gin", 600);
   set("max_sen", 600);
   set("force", 300);
   set("max_force", 300);
   set("force_factor", 20);
   set("max_mana", 300);
   set("mana", 300);
   set("mana_factor", 20);
   set("combat_exp", 100000);

        set("eff_dx", 35000);
        set("nkgain", 200);

   set_skill("literate", 50);
   set_skill("spells", 60);
   set_skill("buddhism", 50);
   set_skill("unarmed", 30);
   set_skill("jienan-zhi", 30);
   set_skill("dodge", 40);
   set_skill("lotusmove", 40);
   set_skill("parry", 50);
   set_skill("force", 50);
   set_skill("lotusforce", 50);
   set_skill("staff", 30);
   set_skill("lunhui-zhang", 30);
   set_skill("spear", 30);
   set_skill("huoyun-qiang", 30);
   map_skill("spells", "buddhism");
   map_skill("unarmed", "jienan-zhi");
   map_skill("dodge", "lotusmove");
   map_skill("force", "lotusforce");
   map_skill("parry", "lunhui-zhang");
   map_skill("staff", "lunhui-zhang");
   map_skill("spear", "huoyun-qiang");
//   set("chat_chance_combat", 80);
//   set("chat_msg_combat", ({
//     (: cast_spell, "thunder" :),
//   }) );

   set("chat_chance", 5);
   set("chat_msg", ({
     (: random_move :)
   }) );

   create_family("南海普陀山", 3, "弟子");

   setup();
   carry_object("/obj/money/gold");
   carry_object("/d/nanhai/obj/sengpao")->wear();
}

void attempt_apprentice(object ob)
{
   command("smile");
   command("say 很好，贫僧就收下你，希望你多加努力，早成正果。\n");

   command("recruit " + ob->query("id") );
   return;
}

