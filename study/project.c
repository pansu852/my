#define _CRT_SECURE_NO_WARNINGS

/*
char s3[20];
s3 = "hello" // 이미 선언된 배열에는 문자열입력x

// y = strcmp(s1. s2); -> 문자열비교 같으면 0, s1 - s2, s1 < s2 = -1, s1 > s2 = 1
// strcpy(s2, s1); -> s2에 동적할당 or s2[10]처럼 공간을 만들어줘야함
// strcat(s2, s1); -> s2 문자열 끝에 s1문자열을 붙임
/////////////////////
	char s1[20];    // 크기가 20인 char형 배열을 선언
	//s1과 같이 문자를 저장할 빈 배열(사용하는 배열이나 메모리공간) : 버퍼
	sprintf(s1, "Hello, %s", "world!");    // "Hello, %s"로 서식을 지정하여 s1에 저장

	printf("%s\n", s1);    // Hello, world!: 문자열 s1 출력

    char s1[30];    // 크기가 30인 char형 배열을 선언

	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);    // 문자, 정수, 실수를 문자열로 만듦

	printf("%s\n", s1);    // a 10 3.200000 1.123456e-21: 문자열 s1 출력
*/

/*int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

int* numPtr = numArr;       // 포인터에 int형 배열을 할당

printf("%d\n", *numPtr);    // 11: 배열의 주소가 들어있는 포인터를 역참조하면 배열의 
							// 첫 번째 요소에 접근

printf("%d\n", *numArr);    // 11: 배열 자체를 역참조해도 배열의 첫 번째 요소에 접근

printf("%d\n", sizeof(numArr));    // 40: sizeof로 배열의 크기를 구하면 배열이 메모리에 
								   // 차지하는 공간이 출력됨

printf("%d\n", sizeof(numPtr));    // 4 : sizeof로 배열의 주소가 들어있는 포인터의 크기를 
								   // 구하면 포인터의 크기가 출력됨(64비트라면 8)

return 0;
}*/

/*
// 입력값 3개를 곱한 total에서 0~9까지의 숫자들이 몇번씩 나왔는지 출력
int		main()
{
	int a, b, c;
	int total;
	int num[10] = {0, }; // 배열의 요소를 모두 0으로 초기화
	int rest;

	scanf_s("%d %d %d", &a, &b, &c);
	total = a * b * c;

	while (total > 0)
	{
		rest = total % 10; // 나머지값을 rest에 넣으면 0 ~9의 나머지값중
		//알맞는 숫자가 rest의 배열에 들어감 ++로 1개가 늘어났음을 알림
		total = total / 10; //일의자리 -> 십의자리로 한자리씩검사
		num[rest]++; // num[rest]++은 0~9까지 총 10개가 존재하는 num의 배열에서
		//각 배열의 자리의 값은 0인 상태이므로 조건에 맞는 숫자가 오면 +1을 해주는것
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
}*/

// 최대값과 그 위치 출력
/*int		main()
{
	int num[9]; 
	int count;
	int a = 0;

	for (int i = 1; i < 10; i++)
	{
		scanf_s("%d", &num[i]);

		if (a < num[i])
		{
			a = num[i];
			count = i;
		}
	}
	printf("%d\n%d", a, count);
}*/
/*
int		main()
{
	int num[10] = {0, };
	int count;
	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
		num[i] = num[i] % 42;
	}
	for (int i = 0; i < 10; i++) // [0]배열부터 돔
	{
		count = 0;
		for (int j = i + 1; j < 10; j++) // [1]배열부터 검사
		{
			if (num[i] == num[j]) // [0,1]부터비교 같은건 걸러짐
				count++; // 같은숫자는 마지막에 같은게 없을때 count++
		}
		if (count == 0)
			result++;
	}
	printf("%d", result);
}*/

/*#include <string.h>

int main(void) {

	int input, score, sum;
	char test[80];

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
	 	sum = 0;
		score = 1;
		scanf_s("%s", test);
		for (int j = 0; j < strlen(test); j++) {
			if (test[j] == 'O') {
				sum += score;
				score++;
			}
			if (test[j] == 'X')  score = 1;
		}
		printf("%d\n", sum);
	}
}*/

/*#include <stdlib.h>

int* ten()
{
	int* numptr = malloc(sizeof(int)); // 동적할당
	//포인터를 반환하려면 malloc로 메모리를 할당한뒤 반환해야함
	*numptr = 10; // 역참조로 10저장

	return numptr; // 포인터 반환 malloc으로 메모리를 할당했으므로 함수가 끝나도 사라지지않음


	//int num1 = 10;
	//return &num1;
	//이런식으로 하면 num1은 ten함수안에서만 사용할수있으며
	//함수가 끝나면 사라짐 어쩌다가 호출이 되는 이유는 코드가 간단해서
}
// 함수는 main위에 반드시 선언 or 선언+정의 해야함
// c프로그램은 위에서 아래로 읽기때문
char* helloLiteral() // 요렇게도가능
{
	char* s1 = "Hello, wolrd!";
	return s1; // 문자열이 메모리에 저장되어있음
	//문자열 포인터 리턴
}
int main()
{
	int* numptr;
	numptr = ten(); // 함수를 호출하고 반환값을 numptr에 저장
	printf("%d\n", *numptr); // 10 : 메모리를 헤제하기 전까지 안전함
	free(numptr); //다른 함수에서 할당된 메모리라도 반드시 해제
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory()
{
	void* ptr = malloc(100); // 100byte만큼 동적 메모리할당
	// void포인터는 강제변환 하지 않아도 여러 type의 포인터에 넣을수있다
	return ptr;
}
//void* allocMemory() // 코드줄이기
//{
	//return malloc(100);    // malloc 함수를 호출하면서 바로 반환
//}
//반환값 자료형(함수)으로 void *도 사용할 수 있습니다. 
//이때는 char 포인터가 void 포인터로 자동 변환되고, 
//다시 함수가 호출되었을 때 char 포인터에 저장됩니다.
int	main()
{
	char* s1 = allocMemory();
	strcpy_s(s1, "Hello, world!");
	printf("%s\n", s1);
	free(s1);

	int* numptr1 = allocMemory();
	numptr1[0] = 10;
	numptr1[1] = 20;
	printf("%d %d\n", numptr1[0], numptr1[1]);
	free(numptr1);

	return 0;
}*/

// OX문제 내일다시

/*#include <stdio.h>
#include <math.h>

int	main()
{
	int num1, num2;
	int score[1000];
	int sum, sum2 = 0;
	float result;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++)
	{
		scanf("%d", &num2);
		if (!(1 <= num2 && num2 <= 1000))
			return 0;
		for (int j = 0; j < num2; j++)
		{
			scanf("%d", &score[j]);
			if (!(0 <= score && score <= 100))
				return 0;
			sum = score[j];
		}
		sum2 = sum / num2;
		int count = 0;
		for (int k = 0; k < num2; k++)
		{
			if (score[k] >= sum2)
				count += 1;
		}
		count = num2 / count;
		result = count;
		printf("%.3f", ceil(result));
	}
}*/

/*
#include <stdio.h>

int		main()
{
	int arr[10000];
	int n1, n2;
	int sum, cnt;
	float avg, result;

	scanf("%d", &n1);

	for (int i = 0; i < n1; i++)
	{
		sum = 0; cnt = 0;
		scanf("%d", &n2);
		for (int j = 0; j < n2; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		avg = (float)sum / n2;
		for (int j = 0; j < n2; j++)
		{
			if (arr[j] > avg)
				cnt++;
		}
		result = (float)cnt / n2 * 100;
		printf("%.3f%%\n", result);
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void) {
	int N, x, ans;
	while (scanf("%d", &N) != EOF) 
	{
		for (x = ans = 1; x % N != 0; ans++) 
		{
			x = (x * 10 + 1) % N;
		}
		printf("%d\n", ans);
	}
	return 0;
}*/