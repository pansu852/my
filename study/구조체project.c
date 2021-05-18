#include <stdio.h>
#include <time.h>

// 5마리의 고양이가 있다
// 아무 키나 눌러서 랜덤으로 고양이를 뽑되,
// 5마리 모두 다 수집을 해서 키우면 됨
// 중 복 발 생 가 능!!

// 고양이
// 이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct {
	char* name;
	int age;
	char* character;
	int level;


} CAT;

// 현재까지 보유한 고양이
int collection[5] = { 0, 0, 0, 0, 0 };

//전체 고양이 리스트
CAT cats[5];

void initcats();
void printcat(int selected);

int main_struct_project(void) 
{
	srand(time(NULL));

	initcats();

	while (1)
	{
		printf("어느 고양이를 키우실 건가요?\n 아무키나 눌러서 확인하세요");
		getchar();

		int selected = rand() % 5; //0~4사이의 숫자 반환
		printcat(selected); // 뽑은 고양이 정보 출력
		collection[selected] = 1; // 고양이 봅기 처리

		int collectall = checkcollection();
		if (collectall == 1)
		{
			break;
		}
	
	}

	return 0;
}


void initcats()
{
	cats[0].name = "app";
	cats[0].age = 2;
	cats[0].character = "이상함";
	cats[0].level = 1;

	cats[1].name = "app2";
	cats[1].age = 5;
	cats[1].character = "화남";
	cats[1].level = 2;

	cats[2].name = "app3";
	cats[2].age = 6;
	cats[2].character = "괴상함";
	cats[2].level = 3;

	cats[3].name = "app4";
	cats[3].age = 9;
	cats[3].character = "알수없음";
	cats[3].level = 4;

	cats[4].name = "app5";
	cats[4].age = 11;
	cats[4].character = "???";
	cats[4].level = 5;

}

void printcat(int selected)
{
	printf("\n\n==당신은 이 고양이의 집사가 되었어요! ===\n\n");
	printf(" 이름   : %s\n", cats[selected].name);
	printf(" 나이   : %d\n", cats[selected].age);
	printf(" 캐릭터 : %s\n", cats[selected].character);
	printf(" 레벨   : ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n");
}

int checkcollection()
{
	//현재 보유한 고양이 목록도 출력
	//다 모았는지 여부 반환
	int collectall = 1;

	printf("\n\n == 보유한 고양이 목록이에요 == \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) //고양이 수집x
		{
			printf("%10s", "(빈 박스)");
			collectall = 0;
		}
		else //고양이 수집 0
		{
			printf("%10s", cats[i].name);
		}		
	}
	printf("\n=================================\n\n");
	
	if (collectall) //모든 고양이 모은 경우
	{
		printf("\n축하합니다! 모든 고양이를 모았습니다\n");
	}
	
	return collectall;
}