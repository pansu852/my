#include <stdio.h>
#include <time.h>

int main_randomproject(void) {
	
	//�����ʱ�ȭ
	/*printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++) // 0~9���� 10�� ��
	{
		printf("%d", rand() % 10); 
	}
	srand(time(NULL)); //���� �ʱ�ȭ
	printf("\n\n���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);
	}*/
	
	/*srand(time(NULL));
	int i = rand() % 3; //3���� ����� �� �� �ϳ��� �̾ƶ� 0 ~ 2����, 1 ~ 3�� �̱� ���ϸ� rand () % 3 + 1
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����");
	}*/

	//SWITCH
	/*srand(time(NULL));
    //int i = rand() % 3 // 0 - 2 ��ȯ
	int i = 1;
	switch (i)
	{//break�� ���������� ������ i�� 0�̸� �� ��µǰ�
	//i�� 1�϶��� 0�� 1���� �۾Ƽ� ���ǿ� ���� �����Ƿ� ����� �ȵǰ�
	//1���� ���ǿ� �����Ƿ� ��� �� �ؿ� case2�� ������ ������ �ʰ� �����
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("����"); break; //default �� �� ���� ������
	}*/

	/*int age = 17;
	switch (age)
	{//������ �ϴٰ� ���ǿ� �´� �극��ũ�� ������ Ż����
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16: printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19: printf("����л��Դϴ�\n"); break;
	default : printf("�л��� �ƴѰ�����\n"); break;
	}*/

	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���������� (1~100) :");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}
		else if (answer < num)
		{
			printf("UP\n\n");
		}
		else if (answer == num)
		{
			printf("����\n\n");
			break;
		}
		else
		{
			printf("����\n\n");
		}
		if (chance == 0)
		{
			printf("��ȸ����");
			break;
		}
			
	}*/
}