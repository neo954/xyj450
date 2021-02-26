// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// by snowcat  11/22/1997

inherit NPC;

string *names = ({
  "市民",
  "官人",
  "妇人",
  "路人",
  "车夫",
  "艺人",
  "和尚",
  "道士",
});

string *ids = ({
  "shi min",
  "guan ren",
  "fu ren",
  "lu ren",
  "che fu",
  "yi ren",
  "he shang",
  "dao shi",
});

string *genders = ({
  "男性",
  "男性",
  "女性",
  "男性",
  "男性",
  "男性",
  "男性",
  "男性",
});

void create()
{
  int i = random(sizeof(names));
  set_name(names[i], ({ids[i]}));
  set("gender", genders[i]);
  set("combat_exp", 1000+random(1000));
  set("age", 20+random(20));
  set("per", 14+random(20));
  set("attitude", "friendly");
  set("shen_type", 1);
  set("people", "people");
  set("force_factor",2);
  set("max_gin",200);
  set("max_kee",200);
  set("max_sen",200);
  set("max_force",300);
  set("max_mana",300);
  set_skill("unarmed", 10+random(90));
  set_skill("dodge", 10+random(90));
  set_skill("parry", 10+random(90));
  set("chat_chance", 5);
  set("chat_msg", ({ (: random_move :) }));
  setup();
  carry_object("/d/obj/cloth/linen")->wear();
}


