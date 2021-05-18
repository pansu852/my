#include <stdio.h>
#include <time.h>

int main_randomproject(void) {
	
	//난수초기화
	/*printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++) // 0~9까지 10개 수
	{
		printf("%d", rand() % 10); 
	}
	srand(time(NULL)); //난수 초기화
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);
	}*/
	
	/*srand(time(NULL));
	int i = rand() % 3; //3개의 경우의 수 중 하나를 뽑아라 0 ~ 2까지, 1 ~ 3을 뽑길 원하면 rand () % 3 + 1
	if (i == 0)
	{
		printf("바위\n");
	}
	else if (i == 1)
	{
		printf("가위");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요");
	}*/

	//SWITCH
	/*srand(time(NULL));
    //int i = rand() % 3 // 0 - 2 반환
	int i = 1;
	switch (i)
	{//break를 설정해주지 않으면 i가 0이면 다 출력되고
	//i가 1일때는 0은 1보다 작아서 조건에 맞지 않으므로 출력이 안되고
	//1부터 조건에 맞으므로 출력 그 밑에 case2는 조건을 보지도 않고 출력함
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("ㅁㄹ"); break; //default 는 그 외의 나머지
	}*/

	/*int age = 17;
	switch (age)
	{//실행을 하다가 조건에 맞는 브레이크를 만나면 탈출함
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16: printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19: printf("고등학생입니다\n"); break;
	default : printf("학생이 아닌가봐요\n"); break;
	}*/

	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) :");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}
		else if (answer < num)
		{
			printf("UP\n\n");
		}
		else if (answer == num)
		{
			printf("정답\n\n");
			break;
		}
		else
		{
			printf("오류\n\n");
		}
		if (chance == 0)
		{
			printf("기회소진");
			break;
		}
			
	}*/
}