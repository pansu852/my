#include <stdio.h>

//선언
void p(int num);

void function_without_return();

int function_return();

void shin(int num1, int num2, int num3);

int apple(int total, int ate); //전체 total 개에서 ate개를 먹고 남은 값

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_finish(void)
{
	//계산기

	//int num = 2;
	//printf("num 은 %d 입니다\n", num);
	//p(num);

	// 2 + 3은?
	//num = num + 3;
	//printf("num 은 %d 입니다\n", num);
	//p(num);
	// 5 - 1은?
	//num -= 1; // num = num - 1
	//printf("num 은 %d 입니다\n", num);
	//p(num);
	// 4 x 3 은?
	//num *= 3;
	//printf("num 은 %d입니다\n", num);
	//p(num);
	// 12 / 6 은?
	//num /= 6;
	//printf("num 은 %d 입니다\n", num);
	//p(num);

	//반환값이 없는 함수(void) / return 0;

	void function_without_return();

	//반환값이 있는 함수는 정수를 받고싶다면 int 실수는 float,double
	//문자는 char로 반환 받으면 된다
	//printf에서 출력이되고 반환되는 장소는 return 뒤에 return 10;
	//return 문자;, return 10.5; 이런 식
	int ret = function_return();
	p(ret);

	//전달값이 없는 함수 
	//fucntion_without();

	//전달값이 있는 함수
	shin(35, 27, 15);

	//파라미터(전달값)도 받고 반환값이 있는 함수
	//int ret = apple(5, 2); //사과 5개중에 2개를 먹으면?
	printf("사과 5개중에 2개를 먹으면? %d가 남아요");
	printf("사과 %d 개 중에 %d개를 먹으면? %d개가 남아요\n", 10, 4, apple(10, 4));

	//계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
	return 0;

}
	

	//전달값, 반환값이 없는 함수
	//p();
	/*shin(42.51, 17, 5);
	int ret = params();
	printf("숫자는 %d입니다", ret);

	return 0;
}


/*void p()

{
	printf("p는 숫자야\n"); 
}*/

//정의
void p(int num) // 소괄호 안이 전달값
{
	printf("num은 %d 입니다\n", num);
}

// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?
//int 함수이름(num) //(int num1, int num2, char c) 등 여러개의 전달값을 받을 수 있음 물론 위쪽에 선언을 해야함
//함수이름 앞이 반환값(정수면 int 문자면 char~~~)
//{
//	return num + 4;
//}
void function_without_return()
	{
		printf("반환값이 없는 함수");
	}

int function_return()
{
	printf("반환값이 있는 함수");
	return 10;
}

void shin(int num1, int num2, int num3)// -> 전달값
{
	printf("전달값이 있는함수 %d %d %d\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}