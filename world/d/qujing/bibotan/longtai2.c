// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "龙沙台");
  set ("long", @LONG

龙沙台约有一丈见方，上面有细沙铺就，整个台面非常的平整。
台的东面高悬一口铜钟，象是在水中传讯是用的。有几个小妖在
台上舞刀弄枪，比划拳脚。正北方有一个月洞门，后面便是碧波
潭水府的后院了。
LONG);

  set("objects", ([ /* sizeof() == 1*/
  __DIR__"obj/rack" : 1,
]));
//  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shuijg",
  "north" : __DIR__"yuemen",
]));

  setup();
}

