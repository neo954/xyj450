#include <ansi.h>
inherit SKILL;
mapping *quest = ({
        ([      "quest":                "将军",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "表哥",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "舞柳剑",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "红衣",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "顾云飞的秘函",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "叶孤鸿",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "白剑",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "粉燕子",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "铜钱镖",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "皮囊",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "「三才剑谱」",
                "quest_type":           "寻",
                "exp_bonus":            100,
        ]),
        ([      "quest":                "占卜入门",
                "quest_type":           "寻",
                "exp_bonus":            100,
        ]),
        ([      "quest":                "铁盒",
                "quest_type":           "寻",
                "exp_bonus":            100,
        ]),
        ([      "quest":                "怪兽",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "白额猛虎",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "方玉飞",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "冷若霜",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "银花青底披肩袍",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "银花青底披肩袍",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "蓝胡子",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "大牛",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "瞎子",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "风云衙役",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "杀威棒",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "风云差服",
                "quest_type":           "寻",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "裸体男人",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "媒婆",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),
        ([      "quest":                "龟奴",
                "quest_type":           "杀",
                "exp_bonus":            60,
        ]),

});
mapping query_quest()
{
        return quest[random(sizeof(quest))];
}
