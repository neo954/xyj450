// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// create by snowcat jan 21 1998

inherit ROOM;

void create ()
{
  set ("short", "舜王街");
  set ("long", @LONG

舜王街南北双向通行，与城里的另一条大街尧王街并行，穿过开封的
闹市区地带。街道由一色青石长条铺成。街的两边是各种各样的府宅
店铺，西边有一大门。

LONG);

  set("exits", ([
        "north" : __DIR__"shun1",
        "south" : __DIR__"shun3",
        "west" : __DIR__"yuxiang",
      ]));

  set("outdoors", __DIR__);

  setup();
}


