#include <stdio.h>
#include <time.h>

//물고기가 6마리가 있다
//물이 증발하기전에 물을 채워서 물고기를 살려줘야해

int level;
int arrayfish[6];
int * point; //어항에 찾아가서 물을 주는 역활

void initdata();
void printfishes();
void deswater(long elapsedtime);

int main_point_project(void) 
{
	long starttime = 0; //게임 시작 시간, 시간은 long형을 씀
	long totaltime = 0; //총 경과 시간
	long prevtime = 0; //최근에 물을 준 시간 간격

	int num; //몇번 어항에 물을 줄 것인지
	initdata();

	point = arrayfish; //point[0]...point[1]

	starttime = clock(); //현재 시간을 (1000분의 1)단위로 변환
	while (1) // 어떤 조건을 주고 그 조건을 만족하면 계속 실행, 조건을 만족하지 않으면 실행x
		//do=while은 반복문을 한번 실행하고 뒤에 명령문을보고 수행할지 말지 결정
	{
		printfishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다");
			continue;
		}

		//총 경과 시간
		totaltime = (clock() - starttime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totaltime);
	
		//직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		prevtime = totaltime - prevtime;
		printf("최근 경과 시간 : %ld 초\n", prevtime);
	
		// 어항의 물을 감소 (증발)
		deswater(prevtime);

		//사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0 이면? 물을 주지 않는다
		if (point[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다", num);
		}
		//2. 어항의 물이 0이 아닌 경우? 물을 준다 단 물양이 100이 넘는지 체크
		else if (point[num - 1] + 1 <= 100)
		{
			//물을준다
			printf("%d번 어항에 물을 줍니다", num);
			point[num - 1] += 1; // point[num - 1] + 1과 같은 연산작용
		}
		//레벨업을 할 건지 확인(레벨업은 20초마다 한번)
		if (totaltime / 20 > level - 1)//레벨의 값은 1인데 totaltime이 20초가 지나서 20으로 나눠지면 1이 되므로 1 > 0이 되어서 20초마다 레벨업
		{
			level++; // level : 1 -> level : 2
			printf("*** 축 레벨업 ! 기존 %d에서 %d로 레벨업 했습니다 ***\n\n", level - 1, level);

			//최종 레벨 5
			if (level == 5)
			{
				printf("\n\n축하합니다, 최고레벨을 달성했습니다 게임을 종료합니다\n\n");
				exit(0);
			}
		}
		//모든 물고기가 죽었는지 확인
		if (checkfishalive() == 0)
		{
			//물고기 모두 죽었음
			printf("모든 물고기가 죽었음");
			exit(0);
		}
		else
		{
			printf("물고기가 아직 살아 있어요");
			//최소 한마리 이상은 살아있다
		}
		prevtime = totaltime; // prevtime 은 totaltime - prevtime이다
		// 최초의 물 준 시간 10초 -> 그 다음 물 준 시간 15초  = 5초가 prevtime에 들어감
		// 만약 그 다음엔 25초에 물을 준다면(10초차이) 25 - 15를 해야되는데 15초가 prevtime에 들어갈 공간이 없음
		// 따라서 15초 값을 prevtime에 넣어주기 위해 임시로 prevtime(마지막으로 물을 준시간) = totaltime(물을주고 흘러간시간)을 만듬 
	}


	return 0;
}

void initdata()
{
	level = 1; // 게임레벨(1~5)
	for (int i = 0; i <= 5; i++)
	{
		arrayfish[i] = 100; //어항의 물 높이 (0~ 100)
	}
}

void printfishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayfish[i]);
}
	printf("\n\n");
}

void deswater(long elapsedtime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] -= (level * 3 * (int)elapsedtime); //난이도 조절 값
		if (arrayfish[i] < 0)
		{
			arrayfish[i] = 0;
		}
	}
}
int(checkfishalive())
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayfish[i] > 0)
			return 1; // 참 true i의 6개의 값 중 1만 남아있어도 살아있음
	}
	return 0; //모든 물고기가 죽음
}
