// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

//nw.c
//created 4-8-97 pickle

#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "天宫墙外");
  set ("long", @LONG

    你好不容易才走到天宫的西北角。漫步过来，你感到空气异常的
新鲜，心情也随之变的很好。玉帝和他的臣子们神通广大，所以天宫
不必象下界一般造起五丈城墙，充满剑拔弩张的气氛。琉璃造就的墙
里，隐隐约约的是宫殿的飞檐。东面和南面都能看到一座大门的轮廓。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/summer-gongcao" : 1,
]));
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wn1",
  "east" : __DIR__"nw1",
]));

  setup();
}
