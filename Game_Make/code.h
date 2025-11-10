#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifndef Race_L

#define Race_L

typedef enum
{
	인간 = 0,
	고블린,
	오크,
	골렘,
	고스트,
	좀비,
	스켈레톤,
	엘프,
	Error = 1000
}Race;

#endif // !1

#ifndef Class_L

#define Class_L

typedef enum
{
	초급전사 = 0,
	초급마법사,
	초급사제,
	쉴더,
	검사,
	궁수,
	전투마법사,
	원소술사,
	정령술사,
	
	무직 = 100
}Class;

#endif // !1

void SelectRace(Race* RacePtr, int *HPPtr, int* ATTACKPtr, int* DEFENCEPtr, int* SPEEDPtr, int* INTPtr, int* LUCKPtr);

void SelectClass(Race RacePtr, Class* ClassPtr, int* HPPtr, int* ATTACKPtr, int* DEFENCEPtr, int* SPEEDPtr, int* INTPtr, int* LUCKPtr);
