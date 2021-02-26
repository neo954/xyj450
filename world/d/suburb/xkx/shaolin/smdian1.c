// Room: /d/shaolin/smdian1.c
// Date: YZC 96/01/19

inherit ROOM;




void create()
{
	set("short", "东侧殿");
	set("long", @LONG
这里是东侧殿。房间四周悬挂着达摩祖师、观音大士的画
像，以及一些寺内元老的字画。地下散乱地放着许多蒲团，木
鱼等。看来此处是本派弟子打坐修行之所。几位年轻僧人正肃
容入定，看来已颇得禅宗三昧。
LONG
	);

	set("exits", ([
		"west" : __DIR__"smdian",
	]));

	set("objects",([
		__DIR__"obj/muchui" : 1,
	]));

	setup();
	replace_program(ROOM);
}
