// xuan-cloth.c
//

#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("��������", ({ "jia sha", "cloth" }) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "cloth");
                set("armor_prop/armor", 50);
        }
        setup();
}

