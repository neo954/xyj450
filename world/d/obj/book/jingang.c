// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// jingang.c

inherit ITEM;

void create()
{
   set_name("〖金刚经〗", ({"jingang", "jing", "book"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "本");
   set("long",
"金刚般若波罗蜜经，是佛家弟子参禅的入门经书。\n");
        set("material", "paper");
        set("value", 1000);
        set("skill", ([
        "name": "buddhism",
                        "exp_required": 1000,
                        "sen_cost": 30,
                        "difficulty": 30,
        "max_skill": 40,
]) );
        }
}
