// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

inherit ROOM;
#include <room.h>

void create ()
{
  set ("short", "白云洞");
  set ("long", @LONG

洞口虽小，洞内却别有天地。
LONG);
  set("exits", ([ /* sizeof() == 3 */
  "north": __DIR__"road1",
  "northeast": __DIR__"baiyun"+sprintf("%d",random(20)),
  "northwest": __DIR__"baiyun"+sprintf("%d",random(20)),
]));

  set("no_clean_up", 1);
  setup();
}
int clean_up()
{
      return 0;
}
