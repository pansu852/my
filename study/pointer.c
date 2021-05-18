#include <stdio.h>

void swap(int a, int b);

void swap_array(int * a, int * b);

void changeArray(int* ptr);

int  main_pointer(void) 
{ //포인터 : 변수의 주소(메모리주소)를 저장하는 변수

	//[성은] : 101호 --메모리 공간의 주소
	//[중호] : 201호
	//[우인] : 301호
	// 각 문 앞에 암호가 걸려있음
	/*int 성은 = 1; //암호
	int 중호 = 2;
	int 우인 = 3;
	
	printf("성은이네 주소 : %d, 암호 %d\n", &성은, 성은);
	printf("중호네 주소 : %d, 암호 %d\n", &중호, 중호);
	printf("우인이네 주소 : %d, 암호 %d\n", &우인, 우인);

	//미션맨이 아파트 문에 적힌 암호 확인
	int *미션맨;
	미션맨 = &성은;
	printf("미션맨이 방문하는 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);
	
	미션맨 = &중호;
	printf("미션맨이 방문하는 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);
	
	미션맨 = &우인;
	printf("미션맨이 방문하는 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	//두번째 미션 : 각 암호에 3을 곱해라
	미션맨 = &성은;
	*미션맨 = *미션맨 * 3;
		printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

		미션맨 = &중호;
		*미션맨 = *미션맨 * 3;
		printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

		미션맨 = &우인;
		*미션맨 = *미션맨 * 3;
		printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

		//스파이
		//미션맨이 바꾼 암호에서 2를 빼라
		int *스파이 = 미션맨;
		스파이 = &성은;
		*스파이 = *스파이 - 2;
			printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

			스파이 = &중호;
			*스파이 = *스파이 - 2;
			printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

			스파이 = &우인;
			*스파이 = *스파이 - 2;
			printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

			int *철수;
			printf("미션맨 주소 : %d\n", &철수);
			printf("스파이 주소 : %d\n", &스파이);
			*/

	//ptr과 arr이 같은 주소를 받는 상태
	/*int arr[3] = { 5, 10, 15 };
	int * ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("포인터ptr[%d]의 값 : %d\n", i, ptr[i]);
	}
	// *ptr과 arr이 같은 주소이므로 arr[0] or ptr[1] 값은 동일하게 나옴
	arr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i)); //arr자체는 arr에 배열의 가장처음에 해당하는 주소값을 가지고 있는데, +i를 해줌으로써
	}                                                      // i번째에 해당하는 값을 가져옴
	for (int i = 0; i < 3; i++)
	{
		printf("포인터ptr[%d]의 값 : %d\n", i, *(ptr + i));
	}
	// arr[i] == *(arr + i) 같은 표현
	// arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
	printf("arr 자체의 값 : %d\n", arr); //arr 첫번째 값의 주소
	printf("arr[0] 의 주소 : %d\n", &arr[0]); //0은 arr 첫번째

	printf("arr 자체의 값이 가지는 실제주소 : %d\n", *arr);
	printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

	//*&는 아무것도 없는 것과 같다 &는 주소이며 * 는 그 주소의 값이기 때문에
	// *&은 서로 상쇄된다
	printf("arr[0]의 실제 값 : %d\n", *&*&*&*&*&*&*&arr[0]);
	printf("arr[0]의 실제 값 : %d\n", arr[0]);*/

	//SWAP
	/* int a = 10;
	int b = 20;
	printf("a의 주소 : %d\n", &a);
	printf("b의 주소 : %d\n", &b);
	// a와 b의 값을 바꾼다
	printf("swap 함수 전 => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("swap 함수 후 => a : %d, b : %d\n", a, b);
 
	// 값에 의한 복사(Call by value) -> 값만 복사한다는 의미
	//주소값 자체를 넘긴다면?

	printf("(주소값전달)swap 함수 전 => a : %d, b : %d\n", a, b);
	swap_array(&a, &b);  //주소값을 전달해야 하므로 &표시!!
	printf("(주소값전달)swap 함수 후 => a : %d, b : %d\n", a, b);*/

//배열일 때, arr2 -> 주소, 배열과 포인터
int arr2[3] = { 10, 20, 30 };
//changeArray(arr2); // arr2의 주소를 가져감
changeArray(&arr2[0]); // &arr2[0]도 arr주소의 0배열부터 시작하는 주소를 가져간다 즉 10,20,30의 주소를 다 가져감
//결론적으로 둘 다 사용 씹가능
for (int i = 0; i < 3; i++)
{
	printf("%d\n", arr2[i]);
}




	return 0;
}
//값만 전달
void swap(int a, int b)
{
	printf("(SWAP 함수 내) a의 주소 : %d\n", &a);
	printf("(SWAP 함수 내)b의 주소 : %d\n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("swap 함수 내 => a : %d, b : %d\n", a, b);
}
//주소값 전달
void swap_array(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값전달) swap 함수 내 => a : %d, b : %d\n", *a, *b);
}
//배열로 포인터값 바꾸기
void changeArray(int* ptr)
{
	ptr[2] = 50;
}