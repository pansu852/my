#include <stdio.h>

int main_condition(void)
{
	/*int age = 5;

	printf("몇살");

	scanf_s("%d", &age);

	if (age <= 20) // if (조건) {...} else {,,,}
	printf("학생");

	else 
	printf("민짜");*/

//초등학생 / 중학생 / 고등학생이 버스를 탈 때
// if(여러번 사용가능) / else if(여러번 사용가능) / else
	//if 조건을 보고 만족하면 출력 만족하지않으면
	//else if로 가고 else if에서도 만족하지 않으면 else로 출력
	/*int age = 15;
	if (age >= 8 && age <= 13) //&&은 양쪽의 조건을 모두 만족할때 출력, 8과 13사이의 정수가 들어오면 조건에맞으므로출력
		{
		printf("fu\n");
		}
	else if (age >= 14 && age <= 17)
	{
	printf("bro\n");
	}
	else{
	printf("학생이 아닌가봐요");}*/

	//break / continue
	// 1번부터 30번까지 있는 반에서 1번부터 5번만 발표
	// break에 걸리는 조건은 탈출한다고 생각
	//1~30까지 연산을 해야 하는데 break에 걸리는 조건을 만나면 나머지를 연산하지않고 그대로 종료

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 제외\n");
			break;
		}
		printf("%d번 학생은 발표;\n", i);
	}*/

	// 1번부터 30번까지 있는 반에서 7번을 제외하고
	// 6번부터 10번까지 발표
	//continue : 결석으로 제외라는 조건을 만족하면 발표라는
	//명령어로 가지 않고 다음 i++로 넘어간다
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if ( i == 7) // i와 7이 같은지 다른지를 비교
			// i값이 7이 되기전까지 모든 수는 i == 7이 거짓이다
			// i가 7이 되는 순간 조건을 만족하므로 %d번학생은 결석으로 제외처리
			// continue처리는 조건을 만족하면 %d번 학생은 발표를 하세요로 넘어가지 않고
			// 다시 i++로 돌아와서 8,9,10을 연산한다
			{ 
			printf("%d번 학생은 결석으로 제외\n", i);
			continue;
			} {
				printf("%d번 학생은 발표를 하세요\n", i);
			}
			}
	
	}*/

	//  &&와 || (and 와 or)
	// &&은 앞 뒤 수식을 모두 만족시켜야함 즉 a == b, c == d 여야함
	// ||은  a == b, c == d 둘 중 하나만 같아도 출력
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;

	if (a == b || c == d)
	{
		printf("a와 b는 같고 c와 d는 같습니다\n");
	}
	else
	{
		printf("값이서로다릅니다");
	}*/


return 0;
}