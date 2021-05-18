#include <stdio.h>

int main_loopproject(void) {
	//++ 뿔뿔
	/*int a = 10;
	printf("%d\n", a);
	a++;
	printf("%d\n", a);*/

	//b++를 하면 해당 문장이 20+1=21이 된다
	//++b는 21인 상태에서 그다음 문장이 21+1인 상태가 된다
	/*int b = 20;
	printf("%d\n", b++);
	printf("%d\n", ++b);
	printf("b는 :%d\n", ++b);*/

	//반복문, for. while, do while
	//for(선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++)
	printf("Hello World %d\n", i);*/

	//while(조건)
	/*int i = 1; //선언
	while (i <= 10) //조건
	{
		printf("hello world %d\n", i++);
		//i++(증감), 위에넣던 여기넣던 상관x
	}*/

	// do {} while :
	/*int i = 1;
	  do
	  {
	   printf("hello world %d\n", i++);
	  } while (i <= 10);*/
	  // for(선언,조건,증감) ->printf
	  // 선언, while(조건->printf), (증감)
	  // 선언, do(증감->printf), while(조건)

	  //2중 반복문(구구단 만들기 가능)
	  /*int  i = 1;
	  while (i <= 5)
	  {
	  printf("첫번째 반복문 : %d\n", i++);

	  for (int j = 1; j <= 5; j++)
	  {
		  printf("두번째 반복문  %d\n", j);}
	  }*/

	  //구구단
	  /*for (int i = 2; i <= 9; i++)
	  {
		  printf("%d단 계산\n", i);
		  for (int j = 1; j <= 9; j++)
		  {
			  printf("%d x %d = %d\n", i, j, i * j);
		  }}*/

	//정방향 별
		  /*for (int i = 0; i < 5; i++) // i는 5번에 걸쳐서 출력
		  {
			  for (int j = 0; j <= i; j++) // j가 0일때 i도 0이므로 한번 출력, i가 2가되면 j값 0,1보다 커지므로 2번출력
			                               // i가 3일때는 j값 0,1,2보다 크므로 3번출력
				  printf("*");
			  printf("\n");
		  }*/
	//SSS*
	//SS**
	//S***
	//****
	//거꾸로 별
		 /* for (int i = 0; i < 5; i++) // i는 0~4까지 순차적으로 출력
		  {
			  {for (int j = i; j < 5 - 1; j++) // j = 0 일때 j < 4 이므로 j 는 SSS출력/ i = 0 일때 k는 * 출력
				  printf(" "); }
			  {for (int k = 0; k <= i; k++) // k는 0부터시작해서 k가 i와 같거나 i가 커질때가지 즉 0 ~4까지 *을 출력
				  printf("*"); }
			  printf("\n");
		  }*/

		  //피라미드를 쌓아줘 plz~
		  /*int floor;
		  printf("몇층으로 쌓겠느냐");
		  scanf_s("%d", &floor); //scanf_s 는 변수가 &로 들어옴
		  for (int i = 0; i < floor; i++)
		  {
			  for (int j = i; j < floor - 1; j++) // j < floor를 하면 j < 입력한 층 * 2 + 1로 연산 되므로 
		                                          // j < i * 2 + 1을 해야 순차적으로 1,3,5피라미드 모양으로 쌓임
			  {
				  printf(" ");
			  }
			  for (int k = 0; k < i * 2 + 1; k++)
			  {
				  printf("*");
			  }
			  printf("\n");
		  }*/

	/*
	SSSS*
	SSS***
	SS*****
	S*******
	*********
	*/
   


	return 0;
}