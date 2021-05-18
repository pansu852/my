#include <stdio.h>
#include <time.h>

int main_11234(void) {

	srand(time(NULL));
	printf("\n\n == 아빠는 대머리게임 == \n\n");
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제선택 0~3

	int cntshowbottle = 0; //이번 게임에 보여줄 병 갯수
	int precntshowbottle = 0; // 앞게임에 보여준 병 갯수
	//서로 보여주는 병 갯수를 다르게 하여 정답률 향상

	//3번의 기회
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; // 4개의 병
		do {
			cntshowbottle = rand() % 2 + 2; //보여줄 병 갯수
		} while (cntshowbottle == precntshowbottle);
		precntshowbottle = cntshowbottle;

		int isincluded = 0; //보여줄 병중에 발모제 포함
		printf(" > %d번째 시도 : ", i);

		//보여줄 병 종류 선택
		for (int j = 0; j < cntshowbottle; j++)
		{
			int randbottle = rand() % 4; // 0~3
		//아직 선택되지 않은 병이면 선택처리
			if (bottle[randbottle] == 0)
			{
				bottle[randbottle] = 1;
				if (randbottle == treatment)
				{
					isincluded = 1;
				}
			}
			//이미 선택된 병이면 중복이므로 다시 선택
			else {
				j--;
			}
		}

		//사용자에게 문제표시
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);
		}
		if (isincluded == 1)
		{
			printf(">> 성공\n");
		}
		else {
			printf("실패\n");
		}
		printf("\n .. 계속 하려면 아무키나 누르세요 ..");
		getchar();
	}
	printf("\n\n발모제는 몇번일까요?");
	scanf_s("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n >> 정답입니다!\n");
	}
	else
	{
		printf("\n >> 땡 틀렸어요 정답은 %d입니다\n", treatment + 1);
	}

	return 0;
}