// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// create by snowcat.c 12/15/1997

inherit ROOM;

void create ()
{
  set ("short", "毒敌山");
  set ("long", @LONG

毒敌山脉在一望无际的视野里起伏，山峰峻险，不时可见脚下
雾气腾起如生云一般。山上，石岩石崖间开辟出一条小路弯曲
而上，路的西边是万丈深崖，令人胆寒。

LONG);

  set("exits", ([
        "northeast"   : __DIR__"dudi1",
        "southeast"   : __DIR__"dongkou",
        "southwest"   : __DIR__"dudi3",
      ]));
  set("outdoors", __DIR__);

  setup();
}
