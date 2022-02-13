///Add
#if defined(__BL__DETAILS_UI__)
#include "Packet.h"

static BYTE __GetApplyPointType(BYTE bApplyType)
{
	switch (bApplyType)
	{
		// Generated from constants.cpp(aApplyInfo)
		case CItemData::EApplyTypes::APPLY_NONE:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_MAX_HP:	return EPointTypes::POINT_MAX_HP;
		case CItemData::EApplyTypes::APPLY_MAX_SP:	return EPointTypes::POINT_MAX_SP;
		case CItemData::EApplyTypes::APPLY_CON:	return EPointTypes::POINT_HT;
		case CItemData::EApplyTypes::APPLY_INT:	return EPointTypes::POINT_IQ;
		case CItemData::EApplyTypes::APPLY_STR:	return EPointTypes::POINT_ST;
		case CItemData::EApplyTypes::APPLY_DEX:	return EPointTypes::POINT_DX;
		case CItemData::EApplyTypes::APPLY_ATT_SPEED:	return EPointTypes::POINT_ATT_SPEED;
		case CItemData::EApplyTypes::APPLY_MOV_SPEED:	return EPointTypes::POINT_MOV_SPEED;
		case CItemData::EApplyTypes::APPLY_CAST_SPEED:	return EPointTypes::POINT_CASTING_SPEED;
		case CItemData::EApplyTypes::APPLY_HP_REGEN:	return EPointTypes::POINT_HP_REGEN;
		case CItemData::EApplyTypes::APPLY_SP_REGEN:	return EPointTypes::POINT_SP_REGEN;
		case CItemData::EApplyTypes::APPLY_POISON_PCT:	return EPointTypes::POINT_POISON_PCT;
		case CItemData::EApplyTypes::APPLY_STUN_PCT:	return EPointTypes::POINT_STUN_PCT;
		case CItemData::EApplyTypes::APPLY_SLOW_PCT:	return EPointTypes::POINT_SLOW_PCT;
		case CItemData::EApplyTypes::APPLY_CRITICAL_PCT:	return EPointTypes::POINT_CRITICAL_PCT;
		case CItemData::EApplyTypes::APPLY_PENETRATE_PCT:	return EPointTypes::POINT_PENETRATE_PCT;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_HUMAN:	return EPointTypes::POINT_ATTBONUS_HUMAN;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_ANIMAL:	return EPointTypes::POINT_ATTBONUS_ANIMAL;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_ORC:	return EPointTypes::POINT_ATTBONUS_ORC;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_MILGYO:	return EPointTypes::POINT_ATTBONUS_MILGYO;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_UNDEAD:	return EPointTypes::POINT_ATTBONUS_UNDEAD;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_DEVIL:	return EPointTypes::POINT_ATTBONUS_DEVIL;
		case CItemData::EApplyTypes::APPLY_STEAL_HP:	return EPointTypes::POINT_STEAL_HP;
		case CItemData::EApplyTypes::APPLY_STEAL_SP:	return EPointTypes::POINT_STEAL_SP;
		case CItemData::EApplyTypes::APPLY_MANA_BURN_PCT:	return EPointTypes::POINT_MANA_BURN_PCT;
		case CItemData::EApplyTypes::APPLY_DAMAGE_SP_RECOVER:	return EPointTypes::POINT_DAMAGE_SP_RECOVER;
		case CItemData::EApplyTypes::APPLY_BLOCK:	return EPointTypes::POINT_BLOCK;
		case CItemData::EApplyTypes::APPLY_DODGE:	return EPointTypes::POINT_DODGE;
		case CItemData::EApplyTypes::APPLY_RESIST_SWORD:	return EPointTypes::POINT_RESIST_SWORD;
		case CItemData::EApplyTypes::APPLY_RESIST_TWOHAND:	return EPointTypes::POINT_RESIST_TWOHAND;
		case CItemData::EApplyTypes::APPLY_RESIST_DAGGER:	return EPointTypes::POINT_RESIST_DAGGER;
		case CItemData::EApplyTypes::APPLY_RESIST_BELL:	return EPointTypes::POINT_RESIST_BELL;
		case CItemData::EApplyTypes::APPLY_RESIST_FAN:	return EPointTypes::POINT_RESIST_FAN;
		case CItemData::EApplyTypes::APPLY_RESIST_BOW:	return EPointTypes::POINT_RESIST_BOW;
		case CItemData::EApplyTypes::APPLY_RESIST_FIRE:	return EPointTypes::POINT_RESIST_FIRE;
		case CItemData::EApplyTypes::APPLY_RESIST_ELEC:	return EPointTypes::POINT_RESIST_ELEC;
		case CItemData::EApplyTypes::APPLY_RESIST_MAGIC:	return EPointTypes::POINT_RESIST_MAGIC;
		case CItemData::EApplyTypes::APPLY_RESIST_WIND:	return EPointTypes::POINT_RESIST_WIND;
		case CItemData::EApplyTypes::APPLY_REFLECT_MELEE:	return EPointTypes::POINT_REFLECT_MELEE;
		case CItemData::EApplyTypes::APPLY_REFLECT_CURSE:	return EPointTypes::POINT_REFLECT_CURSE;
		case CItemData::EApplyTypes::APPLY_POISON_REDUCE:	return EPointTypes::POINT_POISON_REDUCE;
		case CItemData::EApplyTypes::APPLY_KILL_SP_RECOVER:	return EPointTypes::POINT_KILL_SP_RECOVER;
		case CItemData::EApplyTypes::APPLY_EXP_DOUBLE_BONUS:	return EPointTypes::POINT_EXP_DOUBLE_BONUS;
		case CItemData::EApplyTypes::APPLY_GOLD_DOUBLE_BONUS:	return EPointTypes::POINT_GOLD_DOUBLE_BONUS;
		case CItemData::EApplyTypes::APPLY_ITEM_DROP_BONUS:	return EPointTypes::POINT_ITEM_DROP_BONUS;
		case CItemData::EApplyTypes::APPLY_POTION_BONUS:	return EPointTypes::POINT_POTION_BONUS;
		case CItemData::EApplyTypes::APPLY_KILL_HP_RECOVER:	return EPointTypes::POINT_KILL_HP_RECOVER;
		case CItemData::EApplyTypes::APPLY_IMMUNE_STUN:	return EPointTypes::POINT_IMMUNE_STUN;
		case CItemData::EApplyTypes::APPLY_IMMUNE_SLOW:	return EPointTypes::POINT_IMMUNE_SLOW;
		case CItemData::EApplyTypes::APPLY_IMMUNE_FALL:	return EPointTypes::POINT_IMMUNE_FALL;
		case CItemData::EApplyTypes::APPLY_SKILL:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_BOW_DISTANCE:	return EPointTypes::POINT_BOW_DISTANCE;
		case CItemData::EApplyTypes::APPLY_ATT_GRADE_BONUS:	return EPointTypes::POINT_ATT_GRADE_BONUS;
		case CItemData::EApplyTypes::APPLY_DEF_GRADE_BONUS:	return EPointTypes::POINT_DEF_GRADE_BONUS;
		case CItemData::EApplyTypes::APPLY_MAGIC_ATT_GRADE:	return EPointTypes::POINT_MAGIC_ATT_GRADE_BONUS;
		case CItemData::EApplyTypes::APPLY_MAGIC_DEF_GRADE:	return EPointTypes::POINT_MAGIC_DEF_GRADE_BONUS;
		case CItemData::EApplyTypes::APPLY_CURSE_PCT:	return EPointTypes::POINT_CURSE_PCT;
		case CItemData::EApplyTypes::APPLY_MAX_STAMINA:	return EPointTypes::POINT_MAX_STAMINA;
		case CItemData::EApplyTypes::APPLY_ATT_BONUS_TO_WARRIOR:	return EPointTypes::POINT_ATTBONUS_UNUSED1;
		case CItemData::EApplyTypes::APPLY_ATT_BONUS_TO_ASSASSIN:	return EPointTypes::POINT_ATTBONUS_UNUSED2;
		case CItemData::EApplyTypes::APPLY_ATT_BONUS_TO_SURA:	return EPointTypes::POINT_ATTBONUS_UNUSED3;
		case CItemData::EApplyTypes::APPLY_ATT_BONUS_TO_SHAMAN:	return EPointTypes::POINT_ATTBONUS_UNUSED4;
		case CItemData::EApplyTypes::APPLY_ATT_BONUS_TO_MONSTER:	return EPointTypes::POINT_ATTBONUS_UNUSED0;
		case CItemData::EApplyTypes::APPLY_MALL_ATTBONUS:	return EPointTypes::POINT_ATT_BONUS;
		case CItemData::EApplyTypes::APPLY_MALL_DEFBONUS:	return EPointTypes::POINT_MALL_DEFBONUS;
		case CItemData::EApplyTypes::APPLY_MALL_EXPBONUS:	return EPointTypes::POINT_MALL_EXPBONUS;
		case CItemData::EApplyTypes::APPLY_MALL_ITEMBONUS:	return EPointTypes::POINT_MALL_ITEMBONUS;
		case CItemData::EApplyTypes::APPLY_MALL_GOLDBONUS:	return EPointTypes::POINT_MALL_GOLDBONUS;
		case CItemData::EApplyTypes::APPLY_MAX_HP_PCT:	return EPointTypes::POINT_MAX_HP_PCT;
		case CItemData::EApplyTypes::APPLY_MAX_SP_PCT:	return EPointTypes::POINT_MAX_SP_PCT;
		case CItemData::EApplyTypes::APPLY_SKILL_DAMAGE_BONUS:	return EPointTypes::POINT_SKILL_DAMAGE_BONUS;
		case CItemData::EApplyTypes::APPLY_NORMAL_HIT_DAMAGE_BONUS:	return EPointTypes::POINT_NORMAL_HIT_DAMAGE_BONUS;
		case CItemData::EApplyTypes::APPLY_SKILL_DEFEND_BONUS:	return EPointTypes::POINT_SKILL_DEFEND_BONUS;
		case CItemData::EApplyTypes::APPLY_NORMAL_HIT_DEFEND_BONUS:	return EPointTypes::POINT_NORMAL_HIT_DEFEND_BONUS;
		case CItemData::EApplyTypes::APPLY_EXTRACT_HP_PCT:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_PC_BANG_EXP_BONUS:	return EPointTypes::POINT_PC_BANG_EXP_BONUS;
		case CItemData::EApplyTypes::APPLY_PC_BANG_DROP_BONUS:	return EPointTypes::POINT_PC_BANG_DROP_BONUS;
		case CItemData::EApplyTypes::APPLY_RESIST_WARRIOR:	return EPointTypes::POINT_ATTBONUS_UNUSED6;
		case CItemData::EApplyTypes::APPLY_RESIST_ASSASSIN:	return EPointTypes::POINT_ATTBONUS_UNUSED7;
		case CItemData::EApplyTypes::APPLY_RESIST_SURA:	return EPointTypes::POINT_ATTBONUS_UNUSED8;
		case CItemData::EApplyTypes::APPLY_RESIST_SHAMAN:	return EPointTypes::POINT_ATTBONUS_UNUSED9;
		case CItemData::EApplyTypes::APPLY_ENERGY:	return EPointTypes::POINT_ENERGY;
		case CItemData::EApplyTypes::APPLY_DEF_GRADE:	return EPointTypes::POINT_DEF_GRADE;
		case CItemData::EApplyTypes::APPLY_COSTUME_ATTR_BONUS:	return EPointTypes::POINT_COSTUME_ATTR_BONUS;
		case CItemData::EApplyTypes::APPLY_MAGIC_ATTBONUS_PER:	return EPointTypes::POINT_MAGIC_ATT_BONUS_PER;
		case CItemData::EApplyTypes::APPLY_MELEE_MAGIC_ATTBONUS_PER:	return EPointTypes::POINT_MELEE_MAGIC_ATT_BONUS_PER;
		case CItemData::EApplyTypes::APPLY_RESIST_ICE:	return EPointTypes::POINT_RESIST_ICE;
		case CItemData::EApplyTypes::APPLY_RESIST_EARTH:	return EPointTypes::POINT_RESIST_EARTH;
		case CItemData::EApplyTypes::APPLY_RESIST_DARK:	return EPointTypes::POINT_RESIST_DARK;
		case CItemData::EApplyTypes::APPLY_ANTI_CRITICAL_PCT:	return EPointTypes::POINT_RESIST_CRITICAL;
		case CItemData::EApplyTypes::APPLY_ANTI_PENETRATE_PCT:	return EPointTypes::POINT_RESIST_PENETRATE;

#if 0
		case CItemData::EApplyTypes::APPLY_RESIST_HUMAN:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_CZ:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_DESERT:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_INSECT:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_RESIST_MAGIC_REDUCTION:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ENCHANT_ELECT:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ENCHANT_ICE:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ENCHANT_DARK:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ENCHANT_FIRE:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ENCHANT_WIND:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ENCHANT_EARTH:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_WOLFMAN:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_RESIST_WOLFMAN:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_RESIST_CLAW:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_SWORD:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_TWOHAND:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_DAGGER:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_BELL:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_FAN:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_BOW:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_ATTBONUS_CLAW:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_RESIST_MOUNT_FALL:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_BLEEDING_PCT:	return EPointTypes::POINT_NONE;
		case CItemData::EApplyTypes::APPLY_BLEEDING_REDUCE:	return EPointTypes::POINT_NONE;
#endif
	}

	return POINT_MAX_NUM;
}

PyObject* itemGetApplyPoint(PyObject* poSelf, PyObject* poArgs)
{
	BYTE bApplyType;
	if (!PyTuple_GetByte(poArgs, 0, &bApplyType))
		return Py_BuildException();

	const BYTE bApplyPoinyType = __GetApplyPointType(bApplyType);
	if (bApplyPoinyType == POINT_MAX_NUM)
		TraceError("itemGetApplyPoint - Cannot find Apply Point Type(Apply Type: %d)", bApplyType);
	
	return Py_BuildValue("i", bApplyPoinyType);
}
#endif

//Find
		{ "LoadItemTable",					itemLoadItemTable,						METH_VARARGS },
		
///Add
#if defined(__BL__DETAILS_UI__)
		{ "GetApplyPoint",					itemGetApplyPoint,						METH_VARARGS },
#endif