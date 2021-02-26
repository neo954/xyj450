// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// by snowcat jan 22 1998

#include <ansi.h>
#include "quest.h"

// the quest format is the following mapping:
// daoxing :     type     name     id            object         amount
//--------------------------------------------------------------------
//  1000   : ({ "find",  "秘笈",   "mi ji" ,     "",             "1" }),
//  5000   : ({ "give",  "灾民",   "zai min" ,   "白银(silver)", "5" }),
// 12000   : ({ "kill",  "白骨精", "baigu jing", "",             "3" });

//找一本秘笈，救济灾民五两银子，三打白骨精．．．．．．

mapping quests_wearing = ([
      10 : ({ "find", YEL"绣花小鞋"NOR,  "shoes",              "", "1" }),
      20 : ({ "find", "牛皮靴",          "leather boots",      "", "1" }),
      30 : ({ "find", "花褶靴",          "flower boots",       "", "1" }),
      40 : ({ "find", "乌绫巾",          "wuling jin",         "", "1" }),
     100 : ({ "find", "毡帽",            "hat",                "", "1" }),
     110 : ({ "find", "圆口布鞋",        "shoes",              "", "1" }),
     210 : ({ "find", RED"软香鞋"NOR,    "shoes",              "", "1" }),
     220 : ({ "find", "“金”项链",      "xiang lian",         "", "1" }),
     230 : ({ "find", HIB"蓝色冰块"NOR,  "lan bingkuai",       "", "1" }),
     300 : ({ "find", "花籽",            "seed",               "", "1" }),
     310 : ({ "find", "琥色毫毛",        "amber hair",         "", "1" }),
     315 : ({ "find", "黑色毫毛",        "black hair",         "", "1" }),
     320 : ({ "find", "蓝色毫毛",        "blue hair",          "", "1" }),
     325 : ({ "find", "棕色毫毛",        "brown hair",         "", "1" }),
     330 : ({ "find", "绿色毫毛",        "green hair",         "", "1" }),
     335 : ({ "find", "靛色毫毛",        "indigo hair",        "", "1" }),
     340 : ({ "find", "绛色毫毛",        "magenta hair",       "", "1" }),
     345 : ({ "find", "栗色毫毛",        "maroon hair",        "", "1" }),
     350 : ({ "find", "橙色毫毛",        "orange hair",        "", "1" }),
     355 : ({ "find", "粉色毫毛",        "pink hair",          "", "1" }),
     360 : ({ "find", "赤色毫毛",        "red hair",           "", "1" }),
     365 : ({ "find", "绯色毫毛",        "scarlet hair",       "", "1" }),
     370 : ({ "find", "紫色毫毛",        "violet hair",        "", "1" }),
     375 : ({ "find", "白色毫毛",        "white hair",         "", "1" }),
     380 : ({ "find", "黄色毫毛",        "yellow hair",        "", "1" }),
    1100 : ({ "find", "金戒指",          "jin jiezhi",         "", "1" }),
    1200 : ({ "find", "金项链",          "xiang lian",         "", "1" }),
    1300 : ({ "find", "白金项圈",        "baijin xiangquan",   "", "1" }),
    1400 : ({ "find", "紫金戒指",        "zijin jiezhi",       "", "1" }),
    1500 : ({ "find", "鎏金腕链",        "liujin wanlian",     "", "1" }),
    2100 : ({ "find", HIB"桂花"NOR,      "gui hua",            "", "1" }),
    2200 : ({ "find", HIB"野菊花"NOR,    "ju hua",             "", "1" }),
    2300 : ({ "find", HIB"矢车菊"NOR,    "ju hua",             "", "1" }),
    2400 : ({ "find", HIB"白菊花"NOR,    "ju hua",             "", "1" }),
    2500 : ({ "find", HIB"蔷薇花"NOR,    "rose",               "", "1" }),
    3000 : ({ "find", "水晶腰牌",        "yao pai",            "", "1" }),
    4100 : ({ "find", "硬木盔",          "ying mukui",         "", "1" }),
    4200 : ({ "find", "鹿皮鞋",          "pi xie",             "", "1" }),
    4300 : ({ "find", "水牛皮靴",        "shuiniu pixue",      "", "1" }),
    4400 : ({ "find", "登山屐",          "dengshan ji",        "", "1" }),
    4500 : ({ "find", "黑丝帽",          "si mao",             "", "1" }),
    5000 : ({ "find", HIB"蓝玫瑰"NOR,    "flower",             "", "1" }),
    5100 : ({ "find", HIB"黑郁金香"NOR,  "flower",             "", "1" }),
    5150 : ({ "find", HIB"薄雪花"NOR,    "flower",             "", "1" }),
    5200 : ({ "find", HIB"玉白露"NOR,    "flower",             "", "1" }),
    5250 : ({ "find", HIB"野风信子"NOR,  "flower",             "", "1" }),
    5300 : ({ "find", HIB"睡芙蓉"NOR,    "flower",             "", "1" }),
    5350 : ({ "find", HIB"紫蔷薇"NOR,    "flower",             "", "1" }),
    5400 : ({ "find", HIB"大丽花"NOR,    "flower",             "", "1" }),
    5450 : ({ "find", HIB"勿忘我"NOR,    "flower",             "", "1" }),
    5500 : ({ "find", HIB"白玫瑰"NOR,    "flower",             "", "1" }),
    5550 : ({ "find", HIB"翡翠绿"NOR,    "flower",             "", "1" }),
    5600 : ({ "find", HIB"雪腊梅"NOR,    "flower",             "", "1" }),
    5650 : ({ "find", HIB"曼陀罗"NOR,    "flower",             "", "1" }),
    5700 : ({ "find", HIB"睡莲"NOR,      "flower",             "", "1" }),
    6100 : ({ "find", "凤冠",            "jin fengguan",       "", "1" }),
    6200 : ({ "find", "龙冠",            "jin longguan",       "", "1" }),
    6300 : ({ "find", "云靴",            "yun xue",            "", "1" }),
    6400 : ({ "find", "牛皮帽",          "niu pimao",          "", "1" }),
    7100 : ({ "find", "银项链",          "silver necklace",    "", "1" }),
    7200 : ({ "find", "银戒指",          "silver ring",        "", "1" }),
    7300 : ({ "find", "银戒指",          "yin jie",            "", "1" }),
    7400 : ({ "find", "银手镯",          "silver wrist",       "", "1" }),
    7500 : ({ "find", "白金戒指",        "bai jie",            "", "1" }),
    7600 : ({ "find", "宝石戒指",        "bao jie",            "", "1" }),
    7700 : ({ "find", "钻石戒指",        "zuan jie",           "", "1" }),
    7800 : ({ "find", "金戒指",          "jin jie",            "", "1" }),
    8000 : ({ "find", "瞌睡虫" ,         "keshui chong",       "", "1" }),
    9000 : ({ "find", HIB"蓝色小草"NOR,  "xiao cao",           "", "1" }),
   10000 : ({ "find", "玉佩",            "yu pei",             "", "1" }),
   20000 : ({ "find", HIB "冰露珠项链" NOR, "icedew lace",     "", "1" }),
   50000 : ({ "find", YEL "银簪" NOR,    "clasp",              "", "1" }),
   80000 : ({ "find", "珍珠",            "pearl",              "", "1" }),
  100000 : ({ "find", "金厢白玉圭",      "yu gui",             "", "1" }),
  310000 : ({ "find", "白鹿头",          "bai lutou",          "", "1" }),
  320000 : ({ "find", "灰羊角",          "hui yangjiao",       "", "1" }),
  500000 : ({ "find", YEL"佛宝舍利子"NOR,"tooth",              "", "1" }),
  800000 : ({ "find", "狮子头",          "shizi tou",          "", "1" }),
  800000 : ({ "find", "牛头",            "niu tou",            "", "1" }),
  900000 : ({ "find", "金龙珠",          "jin longzhu",        "", "1" }),
  910000 : ({ "find", "银龙珠",          "yin longzhu",        "", "1" }),
  920000 : ({ "find", "赤龙珠",          "chi longzhu",        "", "1" }),
  930000 : ({ "find", "橙龙珠",          "cheng longzhu",      "", "1" }),
  940000 : ({ "find", "黄龙珠",          "huang longzhu",      "", "1" }),
  950000 : ({ "find", "绿龙珠",          "lu longzhu",         "", "1" }),
  960000 : ({ "find", "青龙珠",          "qing longzhu",       "", "1" }),
  970000 : ({ "find", "蓝龙珠",          "lan longzhu",        "", "1" }),
  980000 : ({ "find", "紫龙珠",          "zi longzhu",         "", "1" }),
 2000000 : ({ "find", "九彩云龙珠",      "long zhu",           "", "1" }),
 2200000 : ({ "find", "踏云靴",          "cloudy shoes",       "", "1" }),

]);


