#include <stdio.h>

int main_loopproject(void) {
	//++ �Ի�
	/*int a = 10;
	printf("%d\n", a);
	a++;
	printf("%d\n", a);*/

	//b++�� �ϸ� �ش� ������ 20+1=21�� �ȴ�
	//++b�� 21�� ���¿��� �״��� ������ 21+1�� ���°� �ȴ�
	/*int b = 20;
	printf("%d\n", b++);
	printf("%d\n", ++b);
	printf("b�� :%d\n", ++b);*/

	//�ݺ���, for. while, do while
	//for(����; ����; ����)
	/*for (int i = 1; i <= 10; i++)
	printf("Hello World %d\n", i);*/

	//while(����)
	/*int i = 1; //����
	while (i <= 10) //����
	{
		printf("hello world %d\n", i++);
		//i++(����), �����ִ� ����ִ� ���x
	}*/

	// do {} while :
	/*int i = 1;
	  do
	  {
	   printf("hello world %d\n", i++);
	  } while (i <= 10);*/
	  // for(����,����,����) ->printf
	  // ����, while(����->printf), (����)
	  // ����, do(����->printf), while(����)

	  //2�� �ݺ���(������ ����� ����)
	  /*int  i = 1;
	  while (i <= 5)
	  {
	  printf("ù��° �ݺ��� : %d\n", i++);

	  for (int j = 1; j <= 5; j++)
	  {
		  printf("�ι�° �ݺ���  %d\n", j);}
	  }*/

	  //������
	  /*for (int i = 2; i <= 9; i++)
	  {
		  printf("%d�� ���\n", i);
		  for (int j = 1; j <= 9; j++)
		  {
			  printf("%d x %d = %d\n", i, j, i * j);
		  }}*/

	//������ ��
		  /*for (int i = 0; i < 5; i++) // i�� 5���� ���ļ� ���
		  {
			  for (int j = 0; j <= i; j++) // j�� 0�϶� i�� 0�̹Ƿ� �ѹ� ���, i�� 2���Ǹ� j�� 0,1���� Ŀ���Ƿ� 2�����
			                               // i�� 3�϶��� j�� 0,1,2���� ũ�Ƿ� 3�����
				  printf("*");
			  printf("\n");
		  }*/
	//SSS*
	//SS**
	//S***
	//****
	//�Ųٷ� ��
		 /* for (int i = 0; i < 5; i++) // i�� 0~4���� ���������� ���
		  {
			  {for (int j = i; j < 5 - 1; j++) // j = 0 �϶� j < 4 �̹Ƿ� j �� SSS���/ i = 0 �϶� k�� * ���
				  printf(" "); }
			  {for (int k = 0; k <= i; k++) // k�� 0���ͽ����ؼ� k�� i�� ���ų� i�� Ŀ�������� �� 0 ~4���� *�� ���
				  printf("*"); }
			  printf("\n");
		  }*/

		  //�Ƕ�̵带 �׾��� plz~
		  /*int floor;
		  printf("�������� �װڴ���");
		  scanf_s("%d", &floor); //scanf_s �� ������ &�� ����
		  for (int i = 0; i < floor; i++)
		  {
			  for (int j = i; j < floor - 1; j++) // j < floor�� �ϸ� j < �Է��� �� * 2 + 1�� ���� �ǹǷ� 
		                                          // j < i * 2 + 1�� �ؾ� ���������� 1,3,5�Ƕ�̵� ������� ����
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