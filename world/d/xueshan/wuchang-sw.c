// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

//standroom.c used by weiqi...others may hate this format:D
//wuchang-sw.c

inherit ROOM;

void create ()
{
   set ("short", "西南武场");
   set ("long", @LONG

这是冰宫前的一块平地，供大雪山弟子练功之用。冰面极平，光
鉴照人。不过走在上面得小心点，雪山弟子也正是借此锻炼下盘
的稳固功夫。
LONG);

   //set("item_desc", ([" *** " : " *** \n", ]));
   //for look something.

   set("exits",
   ([ //sizeof() == 4
     //"south" : __DIR__"binggu",
     "north" : __DIR__"wuchang-w",
     //"west" : __DIR__"restroom",
     "east" : __DIR__"wuchang-s",
     //"up" : __DIR__"***",
     //"down" : __DIR__"***",
   ]));

   set("objects",
   ([ //sizeof() == 1
     //__DIR__"npc/xunshi" : 2,
     //__DIR__"npc/yingwu-guai" : 1,
   ]));


   set("outdoors", "xueshan");

   setup();
}

//void init()
//{
   //add_action("do_jump", "jump");
//}

//int do_jump(string arg)
//{

//}
