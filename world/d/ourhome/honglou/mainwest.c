// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// Room: /u/hkgroup/mainwest
inherit ROOM;

void create ()
{
  set ("short", "含芳阁");
  set ("long", @LONG

　　大观楼西面斜楼。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"main",
]));
  set("resource/water",1);
  setup();
}
