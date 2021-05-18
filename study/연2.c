#include <stdio.h>
#include <time.h>

int main_practice2(void)
{
	/*srand(time(NULL));
	int i = 0;
	do
	{
		i = rand() % 10;
		printf("%d\n", i);
	} while (i != 3);*/ // 3과 같을때 연산을 멈춤, 거짓이기대문

 //while (c1 != 'q'); // 변수가 문자일때나 문자열일때 따옴표 넣는거 습관화
	
 //분석해보기
 // input 10 -> output 55
	/*unsigned int num1;
	unsigned int sum = 0;
	scanf_s("%d", &num1); // ex : 10입력
	unsigned int i = 0;
	do
	{
		sum += i; // 0~scanf입력된숫자까지 더함
		i++; // i++이 위로가면 입력되는 10을 바로 더해버려서 66이 나옴
	} while (i <= num1); //num1에 입력된 숫자보다 작거나 같게
	printf("%d\n", sum);*/ // i에서 나온 0~10까지의 숫자를 더함 


	/*for (int i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)// i를 2로 나누었을 때 나머지가 0이 아니면 홀수이므로 continue로 돌아가 다시 반복
			//나머지가 0이면 짝수이므로 printf에 출력 -> 100이 될때까지 반복
			continue;//continue는 조건이 참일경우 다시 반복수행하고 조건이 거짓일경우 출력한다
		printf("%d\n", i);
	}*/

	//1과 103 사이의 숫자 중 3으로 끝나는 숫자만 출력되게 만드세요
	/*int i = 1;
	for (;;)
	{
		if (i % 10 != 3)//이 조건에 참이라면 continue루프로 들어가고 거짓이라면 printf로 출력
		{
			i++; // 다음 숫자에 +1을 더해주는것이 i++ 
			continue; //continue로 들어온 참조건은 printf로 가지않기때문에 i++연산이 안된다 때문에 continue
			//위에 i++을 입력해주어야함 그래야 1 -> 2가 됨
		}
		if (i > 104)
			break; // break 를 쓸꺼면 i > 104
		//break를 안쓴다면 i < 104가 맞음
		printf("%d ", i); // printf로 들어온 거짓 조건은 그대로 출력
		i++; // i++을 연산받아 +1이 늘어난뒤 다음 코드 진행, 
		//연산의 종료는 break문에 걸릴때까지 for가 무한루프이므로
	}*/
	

	// 7로 끝나지 않는 연산을 하고 num1 은 num2보다 항상 작다
	/*int num1;
	int num2;
	int i;
	scanf_s("%d %d", &num1, &num2);
	i = num1;
	while (1)
	{
		if (i % 10 == 7)
		{
			i++;
			continue;
		}
		if (i > num2) // num1은 num2보다 항상작으므로 num2보다 커지는 순간 연산을 끝내면된다
		{
			break;
		}
	printf("%d ", i);
		i++;
	}*/

	//피라미드
	/*int x;
	scanf_s("%d", &x);

	for (int i = 0; i < x; i++)
	{
		for (int j = i; j < x - 1; j++)
		{
			printf(" ");
		}
		
			for (int k = 0; k < i * 2 + 1; k++)
		{
				printf("*");
		}
		printf("\n");
	}*/

	/*int num1 = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (num1 == 10)
			goto EXIT2; // EXIT2와 EXIT3이 출력

				num1++;
		}
	}

EXIT1:
	printf("100\n");

EXIT2:
	printf("200\n");

EXIT3:
	printf("300\n");*/
	
//논리 연산자 &&를 사용하지 않고 3과 5의 공배수를 검사하려면 어떻게 해야 할까요? 
//3 * 5 = 15는 3과 5의 최소공배수이므로 15로 나눴을 때 나머지가 0인 값들은 3과 5의 공배수입니다.
//실무에서는 코드를 명확히 하는것이 좋음, 가독성이 제일 중요
	/*for (int i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz\n");
		else if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}*/

//코드를 이런식으로 간결하게 작성 가능
//삼항 연산자를 사용하여 각 조건을 모두 처리하면서 문자열만 printf로 출력하는 방식입니다. 
//i % 3을 계산하여 0이 아니면(3의 배수가 아니면) i % 5로 갑니다. i % 5가 0이 아니면 %d로 i를 출력합니다.
//이제 i % 3이 0이고, i % 5가 0이면 3과 5의 공배수이므로 "FizzBuzz"를 출력합니다.
/*for (int i = 0; ++i <= 100;)
printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FIzzBuzz\n", i);*/
//삼항 연산자로 (조건) ? (조건이 참일 때 수행) : (조건이 거짓일 때 수행)

//포인터는 메모리의 특정 위치를 가르킨다
/*int* numptr; // 포인터선언(메모리할당????)
int num1 = 10; // int형 변수 선언 후 10 저장
numptr = &num1; // num1의 메모리 주소를 포인터 변수에 저장, 
//(&선언 안하고 num1만으로 값전달은 안됨-why?) -> 값전달이 아닌 메모리 주소를 전달해야함 ->
// 이미 포인터선언으로 numptr은 특정 메모리공간을 가르키는중이기때문 ->
//numptr = &num1을 선언함으로써 numptr이 num1의 주소를 가르키게 함
printf("%d\n", *numptr);// 역참조연산, num1의 메모리주소에서 값(10)을 가져옴 
printf("%d\n", numptr);// numptr의 값을 출력(현재 num1의 메모리주소가 입력)
printf("%d\n", &num1); // num1의 메모리주소 출력
printf("%d\n", &numptr);*/ // numptr의 메모리주소값이 나오는데 why? -> &으로 numptr변수의 주소값을 호출했으므로
//기존에 있던 num1의 주소에서 다시 본래의 numptr주소를 불러옴??????

//포인터는 변수의 주소만 가리키며 역참조는 주소에 접근해 값을 가져옴
/*int* numptr; //포인터선언
int num1 = 10; //num1의 변수에 10 입력
numptr = &num1; // num1의 메모리주소를 포인터 변수에 저장
printf("%d\n", *numptr);*/ // 역참조로 10을 불러옴

//numptr에는 num1의 메모리주소가 저장되어 있으므로 결국 num1에 저장
/*int* numptr;
int num1 = 10; // num1의 주소에는 값 10이 입력되어있음
numptr = &num1; //num1의 메모리주소를 포인터 변수에 저장
*numptr = 20; // 역참조 연산자로 num1의 메모리 주소에 접근하여 20저장
printf("%d\n", *numptr); // 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
printf("%d\n", num1);*/// 실제 num1의 값도 바뀜


//포인터에 저장되는 메모리 주솟값은 정수형으로 동일하지만 선언하는 자료형에 따라 메모리에 
//접근하는 방법이 달라집니다. 즉, 다음과 같이 포인터를 역참조하면 선언한 자료형의 
//크기에 맞춰서 값을 가져오거나 저장하게 됩니다.
/*long long *numptr1; // long long 포인터 선언
float *numptr2; // float 포인터 선언
char *cptr1; // char 포인터 선언

long long num1 = 10;
float num2 = 3.5f;
char c1 = 'a';

numptr1 = &num1; // num1의 메모리 주소 저장
numptr2 = &num2; // num2의 메모리 주소 저장
cptr1 = &c1; // c1의 메모리 주소 저장

printf("%lld\n", *numptr1); // 10
printf("%f\n", *numptr2); // 3.500000
printf("%c\n", *cptr1);*/ // a


/*int* numptr1;
int** numptr2;
int num1 = 10;
numptr1 = &num1; //num1의 메모리 주소 저장
numptr2 = &numptr1; //numptr1의 메모리 주소 저장
printf("%d\n", **numptr2); // 20 : 포인터를 두번 역참조하여 num1의 메모리에 접근
printf("%d\n", numptr1);
printf("%d\n", &numptr1);
printf("%d\n", num1);
printf("%d\n", &num1);*/
//포인터도 실제로는 변수이기 때문에 메모리 주소를 구할 수 있습니다. 
//하지만 포인터의 메모리 주소는 일반 포인터에 저장할 수 없고, int **numPtr2;처럼 이중 포인터에 저장해야 합니다


	return 0;
}