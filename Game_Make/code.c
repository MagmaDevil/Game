#include "code.h"



void SelectRace(Race* RacePtr, int* HPPtr, int* ATTACKPtr, int* DEFENCEPtr, int* SPEEDPtr, int* INTPtr, int* LUCKPtr)
{
	const char* RaceList[8] = { "인간", "고블린", "오크", "골렘", "고스트", "좀비", "스켈레톤", "엘프" };

	int input = 0;

	printf("시작 종족을 선택하세요.\n\n");

	for(int i = 0; i < 8; i++)
	{
		printf("%s: %d", RaceList[i], i);
		printf("\t\t");
	}

	printf("\n\n");

	scanf("%d", &input);

	*RacePtr = input;
	Race TempRace = *RacePtr;

	switch (TempRace)
	{
	case 인간:
		*HPPtr = 10;
		*ATTACKPtr = 1;
		*DEFENCEPtr = 1;
		*SPEEDPtr = 5;
		*INTPtr = 3;
		*LUCKPtr = 1;
		printf("종족을 인간으로 선택하셨습니다\n");
		break;

	case 고블린:
		*HPPtr = 5;
		*ATTACKPtr = 2;
		*DEFENCEPtr = 1;
		*SPEEDPtr = 7;
		*INTPtr = 2;
		*LUCKPtr = 1;
		printf("종족을 고블린으로 선택하셨습니다\n");
		break;

	case 오크:
		*HPPtr = 20;
		*ATTACKPtr = 5;
		*DEFENCEPtr = 5;
		*SPEEDPtr = 3;
		*INTPtr = 1;
		*LUCKPtr = 1;
		printf("종족을 오크로 선택하셨습니다\n");
		break;

	case 골렘:
		*HPPtr = 30;
		*ATTACKPtr = 7;
		*DEFENCEPtr = 7;
		*SPEEDPtr = 1;
		*INTPtr = 0;
		*LUCKPtr = 1;
		printf("종족을 골렘으로 선택하셨습니다\n");
		break;

	case 고스트:
		*HPPtr = 1;
		*ATTACKPtr = 0;
		*DEFENCEPtr = 0;
		*SPEEDPtr = 10;
		*INTPtr = 7;
		*LUCKPtr = 1;
		printf("종족을 고스트로 선택하셨습니다\n");
		break;

	case 좀비:
		*HPPtr = 3;
		*ATTACKPtr = 3;
		*DEFENCEPtr = 1;
		*SPEEDPtr = 2;
		*INTPtr = 0;
		*LUCKPtr = 1;
		printf("종족을 좀비으로 선택하셨습니다\n");
		break;

	case 스켈레톤:
		*HPPtr = 4;
		*ATTACKPtr = 4;
		*DEFENCEPtr = 4;
		*SPEEDPtr = 4;
		*INTPtr = 1;
		*LUCKPtr = 1;
		printf("종족을 스켈레톤으로 선택하셨습니다\n");
		break;

	case 엘프:
		*HPPtr = 8;
		*ATTACKPtr = 3;
		*DEFENCEPtr = 3;
		*SPEEDPtr = 7;
		*INTPtr = 3;
		*LUCKPtr = 5;
		printf("종족을 엘프로 선택하셨습니다\n");
		break;

	default: TempRace = Error;
		break;
	}

	system("cls");
}

void SelectClass(Race *RacePtr, Class* ClassPtr, int* HPPtr, int* ATTACKPtr, int* DEFENCEPtr, int* SPEEDPtr, int* INTPtr, int* LUCKPtr)
{
	printf("\n시작 직업을 선택하세요.\n\n");

	const char* RaceList[8] = { "인간", "고블린", "오크", "골렘", "고스트", "좀비", "스켈레톤", "엘프" };
	const char* ClassList[3] = {"초급 전사", "초급 마법사", "초급 사제"};

	int input = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("%s: %d", ClassList[i], i);
		printf("\t\t");
	}

	printf("\n\n");

	scanf("%d", &input);

	*ClassPtr = input;
	Class TempClass = *ClassPtr;

	switch (*RacePtr)
	{
	case 인간:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 5;
			*ATTACKPtr += 2;
			*DEFENCEPtr += 3;
			*SPEEDPtr -= 1;
			*INTPtr -= 1;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 고블린:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 3;
			*ATTACKPtr += 3;
			*DEFENCEPtr += 2;
			*SPEEDPtr -= 2;
			*INTPtr -= 1;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 2;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 오크:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 5;
			*ATTACKPtr += 2;
			*DEFENCEPtr += 3;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 골렘:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 5;
			*ATTACKPtr += 3;
			*DEFENCEPtr += 3;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 10;
			*ATTACKPtr -= 2;
			*DEFENCEPtr -= 2;
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 10;
			*ATTACKPtr -= 2;
			*DEFENCEPtr -= 2;
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 고스트:
		switch (TempClass)
		{
		case 초급전사:
			*ATTACKPtr += 2;
			*SPEEDPtr -= 1;
			*INTPtr -= 2;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 좀비:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 5;
			*ATTACKPtr += 2;
			*DEFENCEPtr += 3;
			*SPEEDPtr -= 1;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 스켈레톤:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 5;
			*ATTACKPtr += 2;
			*DEFENCEPtr += 3;
			*SPEEDPtr -= 1;
			*INTPtr -= 1;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	case 엘프:
		switch (TempClass)
		{
		case 초급전사:
			*HPPtr += 5;
			*ATTACKPtr += 2;
			*DEFENCEPtr += 3;
			*SPEEDPtr -= 1;
			*INTPtr -= 1;
			printf("직업을 초급 전사로 선택하셨습니다\n");
			break;

		case 초급마법사:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 3;
			printf("직업을 초급 마법사로 선택하셨습니다\n");
			break;

		case 초급사제:
			*HPPtr -= 1;
			*ATTACKPtr -= 1;
			*DEFENCEPtr -= 1;
			*SPEEDPtr += 1;
			*INTPtr += 1;
			*LUCKPtr += 1;
			printf("직업을 초급 사제로 선택하셨습니다\n");
			break;

		default: TempClass = 무직;
			break;
		}
		break;

	default: *RacePtr = Error;
		break;
	}

	system("cls");

	printf("당신은 %s족의 %s입니다\n", RaceList[*RacePtr], ClassList[TempClass]);
	printf("능력치\n체력: %d\t공격력: %d\t방어력: %d\t스피드: %d\t지력: %d\t행운: %d\t", *HPPtr, *ATTACKPtr, *DEFENCEPtr, *SPEEDPtr, *INTPtr, *LUCKPtr);
}
