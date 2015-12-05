namespace cpp entity
namespace py ccentity.error
namespace as3 com.dreamfire.sanguo.data.definition.entity

/////////////////////////////////////////////////////////
// 错误提示类型定义
enum ErrorType {
  MIN = 0,

  ///////////////////////////////
  // 实体类 0 ~ 199
  ACTOR_BEGIN = 0,
  ACTOR_OFFLINE,              // 该玩家不在线
  ACTOR_LEVEL_LOW,            // 等级不足
  ACTOR_GOLD_LOW,             // 金币不足
  ACTOR_FREEDOM_DOLLAR_LOW,   // 钻石不足
  ACTOR_RESTRICT_DOLLAR_LOW,  // 礼券不足
  ///////////////////////////////

  ///////////////////////////////
  // 道具类 200 ~ 399
  ITEM_BEGIN = 200,
  PACKET_FULL,                // 背包空间不足
  ITEM_NUMBER,                // 道具数量不足
  ///////////////////////////////

  ///////////////////////////////
  // 技能类 400 ~ 499
  SKILL_BEGIN = 400,
  ///////////////////////////////

  ///////////////////////////////
  // BUFF类 500 ~ 599
  BUFF_BEGIN = 500,
  ///////////////////////////////

  ///////////////////////////////
  // 场景类 600 ~ 699
  SCENE_BEGIN = 600,
  ///////////////////////////////

  ///////////////////////////////
  // 英灵类 700 ~ 799
  SOU_BEGIN = 700,
  ///////////////////////////////

  ///////////////////////////////
  // 任务类 800 ~ 899
  TASK_BEGIN = 800,
  TASK_ACCPED_RISK,           // 已经接受了该历险任务
  TASK_ACCPED_SAME_TRIP,      // 你已经接到相同类型的奇遇任务，请完成任务后再使用
  ///////////////////////////////

  ///////////////////////////////
  // 属性类 900 ~ 999
  ATTR_BEGIN = 900,
  ///////////////////////////////

  ///////////////////////////////
  // 聊天类 1000 ~ 1099
  CHAT_BEGIN = 1000,
  ///////////////////////////////

  ///////////////////////////////
  // 邮件类 1100 ~ 1199
  MAIL_BEGIN = 1100,
  MAIL_ACTOR_INVALID,         // 玩家不存在
  MAIL_ACTOR_BLACKLIST,       // 不能向拉黑自己的玩家发送邮件
  MAIL_CONTEXT_SIZE,          // 邮件字数超出限制
  ///////////////////////////////

  ///////////////////////////////
  // 社交类 1200 ~ 1299
  SOCIAL_BEGIN = 1200,
  ///////////////////////////////

  ///////////////////////////////
  // 组队类 1300 ~ 1399
  TEAM_BEGIN = 1300,
  TEAM_HAVE_TEAM,             // 对方已有队伍
  ///////////////////////////////

  ///////////////////////////////
  // 公会类 1400 ~ 1499
  GUILD_BEGIN = 1400
  ///////////////////////////////

  MAX,
}

