#include <stdio.h>
#include <time.h>

void question(i, num1, num2);
int randomnumber(int level);
void succes();
void fail();

int main_function(void) {
	//문이 5개가있고 각 문마다 더 어려운 수식이 나옴(랜덤)
	//맞히면 통과, 틀리면 실패
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) //1~5까지의 수 출력(몇번째 문제인지 알기위해)
		//5개의 연산이 종료되면 자동으로 프로그램 종료
	{
		//x * y = ?
		int num1 = randomnumber(i);
		int num2 = randomnumber(i);
		//printf("%d * %d ? ", num1, num2);
		question(i, num1, num2);//(문제가 나오는 함수)

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("프로그램을 종료합니다");
			exit(0); //break를 쓰면 for문을 탈출하고 밑에 printf의 값이 출력되기 때문에 exit를 쓴다
			//중간에 나가고 싶을때 나가라고 만듬
		}
		else if (answer == num1 * num2)
		{
			succes();
			count++; // 총 맞힌 문제의 개수
		}
		else
		{
			fail();
		}
	}
	printf("\n당신은 5개중 %d개를 맞췄습니다", count);

	return 0;
}
int randomnumber(int level)
{
	return rand() % (level * 10) + 1;
}
void question(int level,int num1,int num2)
{
	printf("%d번째 비밀번호", level);
	printf("\n\n\n%d x %d는 ?\n\n\n", num1, num2);
	printf("###############################");
	printf("\n\n\n비밀번호를 입력하세요(종료-1)>>\n\n\n");
}
void succes()
{
	printf("\n 성공입니다");
}

void fail()
{
	printf("\n틀렸습니다");
}
