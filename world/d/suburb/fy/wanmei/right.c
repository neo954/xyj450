// 
// 

inherit ROOM;
void create()
{
        set("short", "��Ū��");
        set("long", @LONG
͸����÷�ù���������ƫ������ϡ���Կ������ڵľ�������
�İ��̴������ķ�϶�������漴��΢΢ɽ�紵ɢ���������ó�����
����Ʈ��֮�С�

LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"frontyard",
  "northeast" : __DIR__"yard",
]));
        set("outdoors", "wanmei");
        set("objects", ([
        __DIR__"npc/cat": 1,
	__DIR__"npc/ass" : 2,
                        ]) );
        setup();
        replace_program(ROOM);
}
