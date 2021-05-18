#include <stdio.h>
#include <time.h>

// 5������ ����̰� �ִ�
// �ƹ� Ű�� ������ �������� ����̸� �̵�,
// 5���� ��� �� ������ �ؼ� Ű��� ��
// �� �� �� �� �� ��!!

// �����
// �̸�, ����, ����, Ű��� ���̵�(����)

typedef struct {
	char* name;
	int age;
	char* character;
	int level;


} CAT;

// ������� ������ �����
int collection[5] = { 0, 0, 0, 0, 0 };

//��ü ����� ����Ʈ
CAT cats[5];

void initcats();
void printcat(int selected);

int main_struct_project(void) 
{
	srand(time(NULL));

	initcats();

	while (1)
	{
		printf("��� ����̸� Ű��� �ǰ���?\n �ƹ�Ű�� ������ Ȯ���ϼ���");
		getchar();

		int selected = rand() % 5; //0~4������ ���� ��ȯ
		printcat(selected); // ���� ����� ���� ���
		collection[selected] = 1; // ����� ���� ó��

		int collectall = checkcollection();
		if (collectall == 1)
		{
			break;
		}
	
	}

	return 0;
}


void initcats()
{
	cats[0].name = "app";
	cats[0].age = 2;
	cats[0].character = "�̻���";
	cats[0].level = 1;

	cats[1].name = "app2";
	cats[1].age = 5;
	cats[1].character = "ȭ��";
	cats[1].level = 2;

	cats[2].name = "app3";
	cats[2].age = 6;
	cats[2].character = "������";
	cats[2].level = 3;

	cats[3].name = "app4";
	cats[3].age = 9;
	cats[3].character = "�˼�����";
	cats[3].level = 4;

	cats[4].name = "app5";
	cats[4].age = 11;
	cats[4].character = "???";
	cats[4].level = 5;

}

void printcat(int selected)
{
	printf("\n\n==����� �� ������� ���簡 �Ǿ����! ===\n\n");
	printf(" �̸�   : %s\n", cats[selected].name);
	printf(" ����   : %d\n", cats[selected].age);
	printf(" ĳ���� : %s\n", cats[selected].character);
	printf(" ����   : ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "��");
	}
	printf("\n");
}

int checkcollection()
{
	//���� ������ ����� ��ϵ� ���
	//�� ��Ҵ��� ���� ��ȯ
	int collectall = 1;

	printf("\n\n == ������ ����� ����̿��� == \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) //����� ����x
		{
			printf("%10s", "(�� �ڽ�)");
			collectall = 0;
		}
		else //����� ���� 0
		{
			printf("%10s", cats[i].name);
		}		
	}
	printf("\n=================================\n\n");
	
	if (collectall) //��� ����� ���� ���
	{
		printf("\n�����մϴ�! ��� ����̸� ��ҽ��ϴ�\n");
	}
	
	return collectall;
}