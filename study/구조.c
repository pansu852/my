#include <stdio.h>
#include <string.h> //strcpy 함수가 선언된 헤더파일

struct person { // 구조체 정의
	char name[20];
	int age;
	char address[100];
}person; // 변수선언을 정의선언 이후 바로 할 수도있다

typedef struct { // 구조체 이름이 없는 익명 구조체
	char name[20];
	int age;
	char address[100];
}person;

int main_awtawtwe(void)
{
	/*struct person p1; //정의선언 이후 함수내에서 변수선언

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시");
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);*/

	person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울");
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);

	//N에 정수를 입력받고 X의 개수보다 작으면 출력
	/*int N, X, input;

	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &input);
	}
		if (X > input)
			printf("%d ", input);*/
	
	person p1;
	strcpy(p1.name, "ㅅㅈㅎ");
	p1.age = 30;
	strcpy(p1.address, "서울");
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address)

	return 0;
}


#include <stdio.h>
//구조체 형태는 요렇게 3가지 방법이 있긴함
typedef struct {
	int speed;
	char fuel;
	float mileage;
	int engineTemp;
	int rpm;
}Dashboard;

int main_rmpatrt(void)
{
	//문자열(배열) 멤버는 strcpy로 접근해야함
	Dashboard d1;

	d1.speed = 80;
	d1.fuel = 'F';
	d1.mileage = 5821.442871f;
	d1.engineTemp = 200;
	d1.rpm = 1830;

	printf("Speed: %dkm/h\n", d1.speed);
	printf("Fuel: %c\n", d1.fuel);
	printf("Mileage: %fkm\n", d1.mileage);
	printf("Engine temp: %d℃\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);
	return 0;

}