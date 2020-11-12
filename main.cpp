#include "pch.h"
#include "SA2ModLoader.h"

extern "C" 
{
#pragma pack(push, 8)
	struct __declspec(align(4)) ChaoHudThingB
	{
		int adjust;
		float wd;
		float ht;
		float s0;
		float t0;
		float s1;
		float t1;
		NJS_TEXLIST* pTexlist;
		int TexNum;
	};
#pragma pack(pop)
	struct SEachWork
	{
		unsigned char mLev;
		unsigned char mExpNum;
		unsigned __int16 mSkill;
		int mLevelUpCount;
		int mLevelUpLocation;
		unsigned __int16 mSkillDiff;
	};
#pragma pack(push, 8)
	struct StatUIBptrCWE
	{
		char mode;
		char gap1;
		int field_4;
		char gap8[4];
		char NumberOfStats;
		char gapD[3];
		float xPos;
		float yPos;
		float xPosGoal;
		float yPosGoal;
		float AlphaColor;
		float gap24;
		int Unused2;
		int Unused1;
		int field_30;
		int Timer;
		ObjectMaster* PointerToChao;
		ChaoDataBase* ChaoDataBase;
		int StatsDiffer;
		int field_44;
		int field_48;
		SEachWork skillWork[7];
	};
#pragma pack(pop)
	enum
	{
		BBI_CMN_0 = 0x0,
		BBI_CMN_1 = 0x1,
		BBI_CMN_2 = 0x2,
		BBI_CMN_3 = 0x3,
		BBI_CMN_4 = 0x4,
		BBI_CMN_5 = 0x5,
		BBI_CMN_6 = 0x6,
		BBI_CMN_7 = 0x7,
		BBI_CMN_8 = 0x8,
		BBI_CMN_9 = 0x9,
		BBI_CMN_PLUS = 0xA,
		BBI_CMN_LV = 0xB,
		BBI_CMN_LEVELUP = 0xC,
		BBI_CMN_SWIM = 0xD,
		BBI_CMN_FLY = 0xE,
		BBI_CMN_RUN = 0xF,
		BBI_CMN_POWER = 0x10,
		BBI_CMN_STAMINA = 0x11,
		BBI_CMN_TOP = 0x12,
		BBI_CMN_TOP2 = 0x13,
		BBI_CMN_MIDDLE = 0x14,
		BBI_CMN_BOTTOM = 0x15,
		BBI_CMN_MARU_L = 0x16,
		BBI_CMN_MARU_M = 0x17,
		BBI_CMN_MARU_S = 0x18,
	};
	ChaoHudThingB stru_36736A8[25] =
	{
	  {
		1,
		 12.0,
		 14.0,
		 0.65820312,
		 0.19140625,
		 0.70117188,
		 0.29296875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.72070312,
		 0.19140625,
		 0.76367188,
		 0.29296875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.78320312,
		 0.19140625,
		 0.82617188,
		 0.29296875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.84570312,
		 0.19140625,
		 0.88867188,
		 0.29296875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.90820312,
		 0.19140625,
		 0.95117188,
		 0.29296875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.65820312,
		 0.31640625,
		 0.70117188,
		 0.41796875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.72070312,
		 0.31640625,
		 0.76367188,
		 0.41796875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.78320312,
		 0.31640625,
		 0.82617188,
		 0.41796875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.84570312,
		 0.31640625,
		 0.88867188,
		 0.41796875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.90820312,
		 0.31640625,
		 0.95117188,
		 0.41796875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 12.0,
		 14.0,
		 0.65820312,
		 0.44140625,
		 0.71679688,
		 0.54296875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 24.0,
		 14.0,
		 0.72070312,
		 0.45703125,
		 0.81054688,
		 0.55859375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 88.0,
		 16.0,
		 0.65820312,
		 0.06640625,
		 0.99804688,
		 0.18359375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 48.0,
		 20.0,
		 0.001953125,
		 0.59765625,
		 0.18554688,
		 0.74609375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 32.0,
		 20.0,
		 0.18945312,
		 0.59765625,
		 0.31054688,
		 0.74609375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 40.0,
		 20.0,
		 0.31445312,
		 0.59765625,
		 0.46679688,
		 0.74609375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 56.0,
		 20.0,
		 0.47070312,
		 0.59765625,
		 0.68554688,
		 0.74609375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 72.0,
		 20.0,
		 0.68945312,
		 0.59765625,
		 0.99804688,
		 0.74609375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 165.0,
		 24.0,
		 0.001953125,
		 0.00390625,
		 0.64648438,
		 0.18359375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 165.0,
		 40.0,
		 0.001953125,
		 0.00390625,
		 0.64648438,
		 0.18359375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 165.0,
		 40.0,
		 0.001953125,
		 0.19140625,
		 0.64648438,
		 0.49609375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 165.0,
		 12.0,
		 0.001953125,
		 0.50390625,
		 0.64648438,
		 0.59765625,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 36.0,
		 26.0,
		 0.001953125,
		 0.75390625,
		 0.13867188,
		 0.94921875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 28.0,
		 22.0,
		 0.14648438,
		 0.75390625,
		 0.25195312,
		 0.91796875,
		(NJS_TEXLIST*)0x33A1040,
		2
	  },
	  {
		1,
		 18.0,
		 16.0,
		 0.25976562,
		 0.75390625,
		 0.33398438,
		 0.87109375,
		(NJS_TEXLIST*)0x33A1040,
		2
	  }
	};
	double newParamHeight = 136;
	DataPointer(ObjectMaster*, ParamFukidasiExecutor_ptr, 0x01AED28C);
	const int njProjectScreenPtr = 0x0077FB00;
	void njProjectScreen(NJS_POINT2* a1, NJS_VECTOR* a2)
	{
		__asm
		{
			mov ebx, a1
			mov esi, a2
			call njProjectScreenPtr
		}
	}
	void __cdecl sub_7376B0(ObjectMaster* a1)
	{
		StatUIBptrCWE* v1; // esi
		char v2; // cl
		bool v3; // sf
		double v4; // st7
		int v5; // eax
		double v6; // st7
		char v7; // cl
		int v8; // edx
		int v9; // eax
		int v10; // eax
		int v11; // eax
		int v12; // eax
		ChaoDataBase* v13; // ecx
		int v14; // eax
		unsigned __int16 v15; // ax
		unsigned __int16 v16; // ax
		int v17; // eax
		int v18; // eax
		unsigned __int16 v19; // ax
		unsigned __int16 v20; // ax
		int v21; // eax
		int v22; // eax
		unsigned __int16 v23; // ax
		unsigned __int16 v24; // ax
		int v25; // eax
		int v26; // eax
		unsigned __int16 v27; // ax
		unsigned __int16 v28; // ax
		int v29; // eax
		int v30; // eax
		unsigned __int16 v31; // ax
		unsigned __int16 v32; // ax
		bool v33; // zf
		char* v34; // ebp
		signed __int64 v36; // rax
		unsigned __int8 v37; // al
		int v38; // edx
		int v39; // ebx
		char v40; // cl
		unsigned int v41; // edx
		__int16* v42; // [esp+Ch] [ebp-10h]
		signed int v43; // [esp+10h] [ebp-Ch]
		NJS_POINT2 a3; // [esp+14h] [ebp-8h]

		v1 = (StatUIBptrCWE*)a1->Data2.Undefined;
		switch (v1->mode)
		{
		case 0:
			v1->mode = 1;
			v1->field_4 = 0;
			goto LABEL_3;
		case 1:
		LABEL_3:
			v2 = v1->NumberOfStats + 1;
			v1->NumberOfStats = v2;
			if (v1->NumberOfStats == 7)
			{
				v1->NumberOfStats = 7;
				v1->mode = 3;
				v1->field_4 = 0;
			}
			break;
		case 3:
			v4 = v1->AlphaColor + 0.1;
			v1->AlphaColor = v4;
			if (v4 > 1.0)
			{
				v1->AlphaColor = 1.0;
				v1->mode = 4;
				v1->field_4 = 0;
			}
			break;
		case 5:
		case 6:
			v5 = v1->field_4;
			v1->field_4 = v5 + 1;
			if (v5 > 300)
			{
				v1->mode = 7;
				v1->field_4 = 0;
				ParamFukidasiExecutor_ptr = 0;
			}
			break;
		case 7:
			v6 = v1->AlphaColor - 0.1;
			v1->AlphaColor = v6;
			if (v6 < 0.0)
			{
				v1->AlphaColor = 0.0;
				v1->mode = 9;
				v1->field_4 = 0;
			}
			break;
		case 9:
			v7 = v1->NumberOfStats - 1;
			v1->NumberOfStats = v7;
			if (v7 <= 0)
			{
				v1->NumberOfStats = 0;
				v1->mode = 10;
				v1->field_4 = 0;
			}
			break;
		case 10:
			a1->MainSub = DeleteObject_;
			break;
		default:
			break;
		}
		v8 = v1->Unused1 + 384;
		v9 = v1->mode - 4;
		v1->Unused2 += 608;
		v1->Unused1 = v8;
		if (v9 && v9 != 2)
		{
			goto LABEL_95;
		}
		v10 = v1->Timer + 1;
		v1->Timer = v10;
		if (v10 > 100)
		{
			njProjectScreen(&a3, &v1->PointerToChao->Data1.Entity->Position);

			if (a3.x < 640.0)
			{
				if (a3.x > 450.0)
				{
					if (v1->field_30 == 1)
					{
						v1->xPosGoal = 120.0;
						v1->Timer = 0;
						v1->field_30 = 0;
					}
					goto LABEL_29;
				}
			}
			if (a3.x <= 0.0 || *(float*)0xA08454 <= a3.x)
			{
				if (a3.x < 0.0 || a3.x > 640.0)
				{
					v1->mode = 7;
					v1->field_4 = 0;
				}
			}
			else if (!v1->field_30)
			{
				v1->Timer = 0;
				v1->xPosGoal = 520.0;
				v1->field_30 = 1;
			}
		}
	LABEL_29:
		v11 = v1->field_48;
		v1->xPos = (v1->xPosGoal - v1->xPos) * 0.039999999 + v1->xPos;
		if (v11 > 0)
		{
			v1->field_48 = v11 - 1;
		}
		v12 = v1->skillWork[0].mLevelUpCount;
		v13 = v1->ChaoDataBase;
		if (v12)
		{
			v14 = v12 + 1;
			v1->skillWork[0].mLevelUpCount = v14;
			if (v14 == 1024)
			{
				v1->skillWork[0].mLevelUpCount = 0;
			}
			if (!(v1->skillWork[0].mLevelUpCount & 7))
			{
				v15 = v1->skillWork[0].mSkill;
				if (v15 < v13->StatPoints[0])
				{
					v1->skillWork[0].mSkill = v15 + 1;
				}
			}
		}
		v16 = v1->skillWork[0].mSkill;
		if (v16 > v13->StatPoints[0])
		{
			v1->skillWork[0].mSkill = v16 - 1;
		}
		v17 = v1->skillWork[1].mLevelUpCount;
		if (v17)
		{
			v18 = v17 + 1;
			v1->skillWork[1].mLevelUpCount = v18;
			if (v18 == 1024)
			{
				v1->skillWork[1].mLevelUpCount = 0;
			}
			if (!(v1->skillWork[1].mLevelUpCount & 7))
			{
				v19 = v1->skillWork[1].mSkill;
				if (v19 < v13->StatPoints[1])
				{
					v1->skillWork[1].mSkill = v19 + 1;
				}
			}
		}
		v20 = v1->skillWork[1].mSkill;
		if (v20 > v13->StatPoints[1])
		{
			v1->skillWork[1].mSkill = v20 - 1;
		}
		v21 = v1->skillWork[2].mLevelUpCount;
		if (v21)
		{
			v22 = v21 + 1;
			v1->skillWork[2].mLevelUpCount = v22;
			if (v22 == 1024)
			{
				v1->skillWork[2].mLevelUpCount = 0;
			}
			if (!(v1->skillWork[2].mLevelUpCount & 7))
			{
				v23 = v1->skillWork[2].mSkill;
				if (v23 < v13->StatPoints[2])
				{
					v1->skillWork[2].mSkill = v23 + 1;
				}
			}
		}
		v24 = v1->skillWork[2].mSkill;
		if (v24 > v13->StatPoints[2])
		{
			v1->skillWork[2].mSkill = v24 - 1;
		}
		v25 = v1->skillWork[3].mLevelUpCount;
		if (v25)
		{
			v26 = v25 + 1;
			v1->skillWork[3].mLevelUpCount = v26;
			if (v26 == 1024)
			{
				v1->skillWork[3].mLevelUpCount = 0;
			}
			if (!(v1->skillWork[3].mLevelUpCount & 7))
			{
				v27 = v1->skillWork[3].mSkill;
				if (v27 < v13->StatPoints[3])
				{
					v1->skillWork[3].mSkill = v27 + 1;
				}
			}
		}
		v28 = v1->skillWork[3].mSkill;
		if (v28 > v13->StatPoints[3])
		{
			v1->skillWork[3].mSkill = v28 - 1;
		}
		v29 = v1->skillWork[4].mLevelUpCount;
		if (v29)
		{
			v30 = v29 + 1;
			v1->skillWork[4].mLevelUpCount = v30;
			if (v30 == 1024)
			{
				v1->skillWork[4].mLevelUpCount = 0;
			}
			if (!(v1->skillWork[4].mLevelUpCount & 7))
			{
				v31 = v1->skillWork[4].mSkill;
				if (v31 < v13->StatPoints[4])
				{
					v1->skillWork[4].mSkill = v31 + 1;
				}
			}
		}
		v32 = v1->skillWork[4].mSkill;
		if (v32 > v13->StatPoints[4])
		{
			v1->skillWork[4].mSkill = v32 - 1;
		}

		if (v1->skillWork[5].mLevelUpCount) {
			v1->skillWork[5].mLevelUpCount++;
			if (v1->skillWork[5].mLevelUpCount > 1024)
				v1->skillWork[5].mLevelUpCount = 0;
		}
		v1->skillWork[5].mSkill = v13->StatPoints[5];

		if (v1->skillWork[6].mLevelUpCount) {
			v1->skillWork[6].mLevelUpCount++;
			if (v1->skillWork[6].mLevelUpCount > 1024)
				v1->skillWork[6].mLevelUpCount = 0;
		}
		v1->skillWork[6].mSkill = v13->StatPoints[6];

		if (!v1->StatsDiffer)
		{
			if (v1->skillWork[0].mLev != v13->StatLevels[0] || v1->skillWork[0].mExpNum != (v13->StatFractions[0] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			if (v1->skillWork[1].mLev != v13->StatLevels[1] || v1->skillWork[1].mExpNum != (v13->StatFractions[1] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			if (v1->skillWork[2].mLev != v13->StatLevels[2] || v1->skillWork[2].mExpNum != (v13->StatFractions[2] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			if (v1->skillWork[3].mLev != v13->StatLevels[3] || v1->skillWork[3].mExpNum != (v13->StatFractions[3] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			if (v1->skillWork[4].mLev != v13->StatLevels[4] || v1->skillWork[4].mExpNum != (v13->StatFractions[4] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			if (v1->skillWork[5].mLev != v13->StatLevels[5] || v1->skillWork[5].mExpNum != (v13->StatFractions[5] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			if (v1->skillWork[6].mLev != v13->StatLevels[6] || v1->skillWork[6].mExpNum != (v13->StatFractions[6] + 5) / 10)
			{
				v1->StatsDiffer = 1;
				v1->field_44 = 60;
			}
			goto LABEL_95;
		}
		v33 = v1->field_44-- == 1;
		if (!v33)
		{
		LABEL_95:
			//a1->DisplaySub(a1);
			return;
		}
		v43 = 0;
		v34 = v13->StatLevels;
		v42 = v13->StatPoints;
		SEachWork* skill = v1->skillWork;
		char* statfractions = v13->StatFractions;
		int counter = 7;
		do
		{
			v37 = skill->mLev;
			v38 = (*statfractions + 5) / 10;
			v39 = skill->mExpNum;
			if (v37 < (unsigned __int8)* v34 || (skill->mExpNum < v38))
			{
				v40 = skill->mExpNum + 1;
				skill->mExpNum = v40;
				if (v40 == 11)
				{
					skill->mLev = v37 + 1;
					skill->mExpNum = 0;
					skill->mLevelUpCount = 1;
					skill->mLevelUpLocation = v1->field_30;
					skill->mSkillDiff = *v42 - skill->mSkill;
					if (!v1->field_48)
					{
						//PlayJingle(112);
						v1->field_48 = 240;
					}
				}
				v43 = 1;
			}
			else if (skill->mExpNum > v38)
			{
				--skill->mExpNum;
				v43 = 1;
			}
			++v42;
			++skill;
			++v34;
			++statfractions;
			--counter;
		} while (counter);
		if (v43)
		{
			v1->field_44 = 20;
		}
		else
		{
			v1->StatsDiffer = 0;
		}
		goto LABEL_95;
	}
	const int ParamFukidasiExecutor_LoadPtr = 0x05659E0;
	void ParamFukidasiExecutor_Load(ObjectMaster* a1)
	{
		__asm
		{
			mov eax, a1
			call ParamFukidasiExecutor_LoadPtr
		}
	}
	void __cdecl ParamFukidasiStat(ObjectMaster* a1)
	{
		ParamFukidasiExecutor_Load(a1);

		((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->skillWork[5].mLev = ((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->ChaoDataBase->StatLevels[5];
		((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->skillWork[5].mSkill = ((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->ChaoDataBase->StatPoints[5];
		((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->skillWork[5].mExpNum = (((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->ChaoDataBase->StatFractions[5] + 5) / 10;
		((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->skillWork[6].mLev = ((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->ChaoDataBase->StatLevels[6];
		((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->skillWork[6].mSkill = ((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->ChaoDataBase->StatPoints[6];
		((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->skillWork[6].mExpNum = (((StatUIBptrCWE*)ParamFukidasiExecutor_ptr->Data2.Undefined)->ChaoDataBase->StatFractions[6] + 5) / 10;
	}
	static void __declspec(naked) ParamFukidasiExecutor_LoadHook()
	{
		__asm
		{
			push eax // a1

			// Call your __cdecl function here:
			call ParamFukidasiStat

			pop eax // a1
			retn
		}
	}
	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions)
	{
		//panel
		for (int i = 0; i < 25; i++)
		{
			stru_36736A8[i].pTexlist = (NJS_TEXLIST*)0x01366ABC;
		}
		stru_36736A8[BBI_CMN_TOP] = stru_36736A8[BBI_CMN_STAMINA];
		stru_36736A8[BBI_CMN_TOP2] = stru_36736A8[BBI_CMN_POWER];
		stru_36736A8[BBI_CMN_TOP].ht -= 2;
		stru_36736A8[BBI_CMN_TOP2].ht -= 2;
		stru_36736A8[BBI_CMN_TOP].t0 = stru_36736A8[BBI_CMN_MARU_L].t0 - 0.01;
		stru_36736A8[BBI_CMN_TOP].t1 = stru_36736A8[BBI_CMN_MARU_L].t0 + (stru_36736A8[BBI_CMN_POWER].t1 - stru_36736A8[BBI_CMN_POWER].t0);
		stru_36736A8[BBI_CMN_TOP2].t0 = stru_36736A8[BBI_CMN_MARU_L].t0 - 0.01;
		stru_36736A8[BBI_CMN_TOP2].t1 = stru_36736A8[BBI_CMN_MARU_L].t0 + (stru_36736A8[BBI_CMN_POWER].t1 - stru_36736A8[BBI_CMN_POWER].t0);
		WriteData((int*)0x5653FD, (int)& stru_36736A8[BBI_CMN_SWIM]);
		WriteData((int*)0x5658F6, (int)& stru_36736A8[BBI_CMN_MIDDLE]);
		WriteData((char*)0x564CBD, (char)7); //unneeded cuz mainfunc rewritten but keep just to be sure
		WriteData((char*)0x564CC7, (char)7);
		WriteData((unsigned int*)0x565A5E, sizeof(StatUIBptrCWE) + 4); //sizeof
		WriteData((unsigned int*)0x00565A68, sizeof(StatUIBptrCWE)); //xsizeof
		WriteData((double**)0x565416, &newParamHeight);
		WriteCall((void*)0x00565B62, ParamFukidasiExecutor_LoadHook);
		WriteJump(ParamFukidasiExecutor, sub_7376B0);
	}
	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}