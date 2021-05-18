#include <stdio.h>

int main_array(void) {

	/*int subway1 = 10;
	int subway2 = 20;
	int subway3 = 30;
	{
		printf("지하철 1호차에는 %d명의 사람이있다\n", subway1);
		printf("지하철 2호차에는 %d명의 사람이있다\n", subway2);
		printf("지하철 3호차에는 %d명의 사람이있다\n", subway3);
	}*/
		//배열 = 여러개의 변수를 동시에 생성
		//배열, 배열은 index, 즉[]안에 들어가는 수가 0부터시작
		/*int subway_array[3]; // = [0], [1], [2] 생성
		subway_array[0] = 30;
		subway_array[1] = 40;
		subway_array[2] = 50;

			for (int i = 0; i <= 2; i++)
		{
				printf("지하철 %d호차에 %d명이 타고 있습니다\n", i+1, subway_array[i]); // i+1은 지하철 1,2,3호차
		}*/

		//값설정방법
		//모든 값에는 초기화 즉 할당이 되지 않으면 더미값이 나온다
		/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		for (int i = 0; i <= 9; i++)
		{
			printf("%d\n", arr[i]);
		}*/

		//배열은 항상 상수로 선언
		//int arr[ex]는 배열값이 문자값이기 때문에 생성 x
		//int arr[10] 요런식

		//배열에서 모든 배열값에 초기화를 해놓지 않으면 1,2번만 정상적인 입력값이 뜨고 나머지는 0으로 생성
		/*int arr[10] = { 1, 2 };

		for (int i = 0; i <= 9; i++)
		{
			printf("%d\n", arr[i]);
		}*/

		//int arr[] = {1, 2}는 대괄호[]값이 없으므로 자동으로 중괄호값이 배열값(=2개)이 되어 1과 2가 생성
		/*float arr_f[5] = { 1.0f, 2.0f, 3.0f, 4.0f }; //실수형 배열
		for (int i = 0; i < 5; i++)
		{
			printf("%.2f\n", arr_f[i]);
		}*/


		//문자 %c로 출력
		/*char c = 'a'; 
			printf("%c", c);*/
			
			//문자열 끝에는 끝을 의미하는 NULL문자 '\0' 가 들어가야해서 6글자 단어면
			//7개의 문자열을 만들어줘야한다

			/*char str[] = "cording";
			//문자열을 만들때 반드시 sizeof의 크기를 명시해줘야 하는것은 아니다
			printf("%s\n", str); // 문자열출력
			printf("%d\n", sizeof(str));*/  // []를 비어두고 sizeof를 적으면 문자열의 크기가 출력된다
			
			//sizeof 문자열의 크기를 나타낸다 or 문자열 크기를 명시해줌
	//EX : char str[256]
	//EX : scanf_s("%s", str, sizeof(str));

	//NULL문자가 삽입되지 않으면 더미값이 들어감
  /*char str[7] = "coding"; //[c],[o],[d],[i],[n],[g] \0(자동삽입) //문자열의 맨뒤에는 NULL문자가 자동삽입
		for (int x = 0; x < sizeof(str); x++)
		{
			printf("%c\n", str[x]);
		}*/

	/*char kor[] = "나도코딩";
	{
		printf("%s\n", kor);
		printf("%d\n", sizeof(kor));
	}*/

	//영어 한글자 1byte
	//한글은 한글자에 2byte
	//char 크기 1byte

	/*char c_away[] = { 'c', 'o', 'd', 'i', 'n', 'g','\0' };
		printf("%s", c_away);*/
	
	/*char name[256]; // 256개의 글자수 제한
	printf("이름을 입력해주세요 :");
	scanf_s("%s", name, sizeof(name));*/
	// %s에 적힌 이름을 입력받아서
	//name이라는 배열값에 적혀진 이름을 입력함
	//char name[256]이 크기가 명시되어 있으므로 sizeof(name)을 통해
	//256보다 큰 문자열이 못 들어오게 명시함

	// 참고 : ASCII코드, ANSI(미국표준협회)에서 제시한 표준코드체계
	// 7bit 총 128코드(0~127)
	// a : 97
	// A : 65
	// 0 : 48
	// enter : 13
	/*for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 %d값 출력:%c\n",i, i);
	}*/

	return 0;
}