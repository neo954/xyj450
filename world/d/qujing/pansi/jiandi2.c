// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// created by snowcat.c 11/16/1997

inherit ROOM;

void create ()
{
  set ("short", "涧底");
  set ("long", @LONG

山涧低洼地带，四处是涧水潺潺，几乎无法落脚。两边是高山
峻岭，东边涧流水急很难涉过，上边有一陡坡。

LONG);

  set("exits", ([
        "up"    : __DIR__"jiandi",
        "down"    : __DIR__"jiandi3",
      ]));
  set("objects", ([
        __DIR__"npc/shuizhi" : 1,
      ]));
  set("outdoors",__DIR__"");
  setup();
}
