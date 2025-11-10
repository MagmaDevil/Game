/*
* 구현할 요소: 턴, 랜덤 스킬, 경험치, 전투, 직업 선택, 최고 전투 기록, 종족 선택


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "code.h"

int main()
{
#pragma region 플레이어 정보

Race Player_Race = 인간;
Class Player_Class = 무직;

int HP = 10;		 // 체력
int ATK = 1;		 // 공격력
int DEF = 1;		 // 방어력
int SPD = 1;		 // 스피드
int INT = 1;		 // 지력
int LUK = 1;		 // 행운

int * HPPtr = &HP;		 // 체력
int * ATKPtr = &ATK;		 // 공격력
int * DEFPtr = &DEF;		 // 방어력
int * SPDPtr = &SPD;		 // 스피드
int * INTPtr = &INT;		 // 지력
int * LUKPtr = &LUK;		 // 행운

#pragma endregion

SelectRace(&Player_Race, HPPtr, ATKPtr, DEFPtr, SPDPtr, INTPtr, LUKPtr);
SelectClass(Player_Class, &Player_Class, HPPtr, ATKPtr, DEFPtr, SPDPtr, INTPtr, LUKPtr);
}