// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// create by snowcat.c 12/8/1997

inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG

在荒野上，一条小路蜿蜿蜒蜒又细又长。路边风吹杨柳，莺啾
鹤鸣。远处青青山峦起伏，近处翠林稀稀密密，路两边百草争
香艳。

LONG);

  set("exits", ([
        "west"   : __DIR__"xiaolu4",
        "east"   : __DIR__"xiaolu6",
      ]));
  set("outdoors", __DIR__);

  setup();
}
