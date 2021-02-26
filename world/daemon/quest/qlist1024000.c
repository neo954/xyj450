#include <ansi.h>
inherit SKILL;
mapping *quest = ({
        ([      "quest":                "勾魂使者",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "白衣",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "乌木簪",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "胭松",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "法华经",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "金光明经",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "法句",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "泥恒",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "法海藏",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "尼白衣",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "赤松",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "老张",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "蝶恋花剑法秘笈",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "一剪梅花手秘笈",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "短歌刀法秘笈",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "内功心法秘笈",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "秋风步法秘笈",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "棋道秘笈",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "石雁",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "紫金冠",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "八卦道袍",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "七星剑",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "地利老人",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "金缕衣",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "天时老人",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "人和老人",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "银缕衣",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "铁缕衣",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "薛陀子",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "乙成仙",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "太极八卦道袍",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "铁传甲",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "普生",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "花满城",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "力士",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "金刚杵",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "宝冠",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "唐可卿",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "冷红儿",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "冷血刺客",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "花仙",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "阿文",
                "quest_type":           "杀",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "青衣服",
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),
        ([      "quest":              HIG "青衣刺" NOR,
                "quest_type":           "寻",
                "exp_bonus":            70,
        ]),

});
mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

