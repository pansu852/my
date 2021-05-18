#include <stdio.h>

int main_printfscanf(void)
{
	/*int age = 12; //정수 12를 age라는 값에 넣는다
	printf("%d\n", age); //age는 상수가 아닌 변수
	age = 13;
	printf("%d\n", age);// 때문에 age라는 변수는 여러번 정의해도 됨, 처음에 int를 사용했다면 그 다음부터는
	//int없이 사용 가능*/
	
	//실수형 float
	//float 출력은 f, double 출력은 lf
	/*float q = 46.5f; //float사용할때는 항상 f 
	printf("% .1f\n", q);

	double w = 14.5; //double는 f안들어감 but 실수 형식 사이에 알아서 형식 변환(묵시적 형식 변환)을 해주긴함
	printf("% .1lf\n", w);*/

	//float 보다 double이 더 정밀하게 소수점 표현이 가능하다
	//float : 4bit이고 double는 8bit의 크기를 가지기 때문이다

	
	//상수형 const, %d는 정수형 값
	/*const int YEAR = 2000; //const란 변함없는 이라는 뜻으로 변수 앞에 붙이면 변수를 상수취급, 변경x
	//YEAR = 3000;을 하면 오류발생
	printf("태어난연도 : %d\n", YEAR);*/
	//변하지 않는 값을 만들고 싶을 때

	//printf 
	/*int add = 3 + 7; //	10
	//printf("3 + 7 = %d\n,", add);
	//printf("%d x %d = %d\n", 3, 7, add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);*/

	//scanf &표시는 인풋이라는 변수가 정의된곳에 값을 입력받겠다
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("아무거나 넣어봐 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	//scanf활용
	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three); //입력값
	printf("첫번째 값 : %d\n", one); //출력값
	printf("두번째 값 : %d\n", two); //출력값
	printf("세번째 값 : %d\n", three); //출력값*/
	
	//문자(한 글자)=%c로 표시, 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	//문자열 표시는 %s, scanf_s에서 문자열을 입력할때는 &표시없이 사용 대신 sizeof로 크기 명시
	//크기입력도 해줘야 : sizeof = 256이내의 문자열만 받겠다, 256은 정해진 숫자는 아님
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);*/

	
	//프로젝트
	// 경찰서 조사
	// 이름, 나이, 몸무게, 키, 범죄내용

	/*char name[12];
	printf("이름이뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇이에요?");
	scanf_s("%f", &weight); // 값이 미정상태인데 .2f를 하면 오류 발생

	double height;
	printf("키는 몇 cm에요?");
	scanf_s("%lf", &height);

	char what[125];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	//조서내용출력
	printf("\n\n----범죄자 정보---\n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄기록 : %s\n", what);*/

	return 0;


}