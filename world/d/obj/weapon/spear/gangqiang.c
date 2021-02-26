// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// gangqiang.c, created 5-28-97 pickle

#include <weapon.h>
#include <ansi.h>

inherit SPEAR;

void create()
{
  set_name(HIC "点钢枪" NOR, ({ "steel spear","qiang","spear" }));
  set_weight(9000);
  if( clonep() )
    set_default_object(__FILE__);
  else {
    set("unit", "杆");
    set("value", 14000);
    set("material", "steel");
    set("long", "一柄乌黑的钢枪，上面连枪缨都没有。\n");
    set("wield_msg", "$N横握起一柄$n，果然威风凛凛。\n");
    set("unwield_msg", "$N收起$n，想顺手撸一下枪缨，却没找到。\n");
  }
  init_spear(60);
  setup();
}
