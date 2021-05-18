#include <stdio.h>
struct Person {    // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
};
int main_practice(void)
{

    /*struct Person * p1 = malloc(sizeof(struct Person));    // 구조체 포인터 선언, 메모리 할당

       // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
     strcpy(p1->name, "홍길동");
     p1->age = 30;
     strcpy(p1->address, "서울시 용산구 한남동");

     // 화살표 연산자로 구조체 멤버에 접근하여 값 출력
     printf("이름: %s\n", p1->name);       // 홍길동
     printf("나이: %d\n", p1->age);        // 30
     printf("주소: %s\n", p1->address); */   // 서울시 용산구 한남동
	
     /*
     char string1[6] = {'H', 'e', 'l', 'l', 'o' '\0'};
     char string2[6] = "world";
     char string3[10];

     printf("이름을 입력하세요: ");
     scanf("%s", &string3);

     printf("%s\n", string1);
     printf("%s\n", string2);
     printf("%s %s %s님 안녕하세요 \n", string1, string2, string3);*/
    
    //표형태 : 2차원배열
    // char name[3][2];
    
    /*int num1;
replay:
    scanf_s("%d", &num1);

    if (num1 != 0) {
        printf("%d\n", num1);
    }goto replay;*/
    /*sizeof(int);
     int num1;
    sizeof(num1);
     sizeof num1;*/

    /*int num1 = 5;
    int num2;
 //num2는 참/거짓을 판단할 변수
 //100은 참일때 사용할값
 //200은 거짓일때 사용할값
    num2 = num1 ? 100 : 200;    // num1이 참이면 num2에 100을 할당, 거짓이면 num2에 200을 할당
 
    printf("%d\n", num2);*/    // 100: num1이 5이므로 참. num2에는 100이 할당됨
    // 함수 안에서 삼항 연산자 사용
    //printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다.");

	/*unsigned char num1 = 32;
	num1 = num1 >> 4 << 1;
		printf("%u\n", num1);*/

		//printf밖에서 쓰려면 =으로 할당을 해줘야함
		/*unsigned char num1 = 3;
		unsigned char num2 = 24;
		num1 <<= 3;
		num2 >>= 2;
		printf("%u\n", num1);
		printf("%u\n", num2);*/

		/*int num1;
		int num2 = 3;
		num1 = 10 + 2 / (5 - 3) * ++num2;
		// 2/(5 - 3) = 1
		// ++num2 = 4
		// 1 * 4
		// 10 + 4 = 14
		printf("%d\n", num1);*/

		// &&(AND)양쪽모두 참일때 참
		// ||(OR) 양쪽 중 한쪽만 참이여도 참
		// !(NOT) 참과 거짓을 뒤집음
		//bool b1;
		//b1 = (false || true);
		//printf("%d\n", b1);
		// a : 97, A : 65 0 : 48 
		// 나머지 연산은 % 연산자
		// 나눗셈은 / 연산자

		/*switch (num1)
		{
		case 1:    // 1 또는
		case 2:    // 2일 때 코드 실행
			printf("1 또는 2입니다.\n");
			break;*/

			/*if (num1 == 1 || num1 == 2)
			printf("1 또는 2입니다.\n");
			else if (num1 == 3 || num1 == 4)
			printf("3 또는 4입니다.\n");*/

			/*char c1;
			scanf_s("%c", &c1);
			switch (c1)
			{
			case 'a':
				printf("a\n");
				break;
			case 'b':
				printf("a\n");
				break;
			default:
				printf("default\n");
				break;

			}*/
			//최근방식, 간결함 대신 루프 안에서만 사용 가능
			/*for (int i = 0; i < 100; i++)    // for 반복문 초기식에서 변수를 선언. C99 방식
			{
				printf("Hello, world!\n");
			}

			printf("%d\n", i); */   // 컴파일 에러: i는 for 반복문 바깥에서 사용할 수 없음
			//옛날방식
			/*int i;    // for 반복문 바깥에 변수 선언
			for (i = 0; i < 100; i++)
			{
				printf("Hello, world!\n");
			}

			printf("%d\n", i); */   // for 반복문 안 or 바깥에서 사용할 수 있음

			/*int i;
			for (i = 0; i < 10; i++) //0부터 9까지 10번반복
			{
				printf("Hello\n");
			}
			{
				printf("%d\n", i);
			}
			printf("%d\n", i);*/// 반복문이 끝난뒤 i의값은 10이다 왜냐하면
			//i < 10 이므로 10은 거짓, 즉 조건에 맞지 않으므로 루프를 탈출하고 %d <- i에 입력된다
			//10이 거짓으로 나왔으므로 다음 연산은 하지않음

			//for 반복문에 변수 두개 사용
			/*for (int i = 0, j = 0; i < 10; i++, j += 2)
			{
				printf("i : %d, j : %d\n", i, j);
			}*/

			// i *= 2뿐만 아니라 다양한 연산자 사용이 가능!!! 
			/*for (int i = 2, j = 5; i <= 32; i *= 2, j--)
			{
				printf("%d %d\n", i, j);
			}*/

			//j의 조건을 설정하지 않는 이유 : i의 연산이 5번이 끝이기때문에 i의 연산이 끝나면 j의 연산도 같이 끝남
			// for (int i = 2, j = 5; i <= 32 || j >= 1; i *= 2, j--) 이런식으로 i와 j를 같이 검사할수도있음


			/*char i;
		scanf_s("%c", &i);
		{
			for (; i <= 'z'; i++) //초기값없이 scanf에서 받은 값부터 시작
				printf("%c", i);
		}*/

		//++과 --의 차이 구분 ++은 값을 입력받으면 초기값부터 어디까지 올라가야 할지 정하기 힘들기때문에 못쓸듯 
		/*int count;

			scanf("%d", &count);    // 값을 입력받음

			int i = 0;
			while (i < count)                      // i가 count보다 작을 때 반복
			{
				printf("Hello, world! %d\n", i);   // Hello, world!와 i의 값을 함께 출력
				i++;                               // i를 1씩 증가시킴
			}*/

			// --를 밑에 식과 같이 쓸때는 코드가 조금 간결해지고 0이라는 한계점이 있어서 가능 
			/*int count;

				scanf("%d", &count);    // 값을 입력받음
				//
				while (count > 0)    // count가 0보다 클 때 반복
				{
					printf("Hello, world! %d\n", count); //
					count--;         // count를 1씩 감소시킴
				}*/

				/*unsigned char i = 1;
				while (i != 0) // i는 0과 다르다 라는 조건이므로 0이되면 출력 종료
				{
					printf("%u\n", i);
					i <<= 1; // i의 비트를 0000 0001부터 왼쪽으로 한칸씩 이동
				} */           // 한칸씩 밀리다가 0000 0000이 되면 연산 종료

				//1200원씩 감소하는 함수
				/*int i;
				scanf_s("%d", &i); //10000원입력
				while (i > 1200) // 400원이되면 0보다 크므로 -1200원이 다시 감소됨 그러므로 최소 i > 1200이 되어야 돈이 없어도
				//감소되지 않기때문에 조건식을 이렇게 설정
				{
					i -= 1200; // 최초금액은 출력하지 않기위해 printf 위에 위치
					printf("%d\n", i);
				}*/
    
    return 0;
}