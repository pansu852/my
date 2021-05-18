#include <stdio.h>
#include <time.h>

//����Ⱑ 6������ �ִ�
//���� �����ϱ����� ���� ä���� ����⸦ ��������

int level;
int arrayfish[6];
int * point; //���׿� ã�ư��� ���� �ִ� ��Ȱ

void initdata();
void printfishes();
void deswater(long elapsedtime);

int main_point_project(void) 
{
	long starttime = 0; //���� ���� �ð�, �ð��� long���� ��
	long totaltime = 0; //�� ��� �ð�
	long prevtime = 0; //�ֱٿ� ���� �� �ð� ����

	int num; //��� ���׿� ���� �� ������
	initdata();

	point = arrayfish; //point[0]...point[1]

	starttime = clock(); //���� �ð��� (1000���� 1)������ ��ȯ
	while (1) // � ������ �ְ� �� ������ �����ϸ� ��� ����, ������ �������� ������ ����x
		//do=while�� �ݺ����� �ѹ� �����ϰ� �ڿ� ��ɹ������� �������� ���� ����
	{
		printfishes();
		printf("�� �� ���׿� ���� �ֽðھ��?");
		scanf_s("%d", &num);

		//�Է°� üũ
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�");
			continue;
		}

		//�� ��� �ð�
		totaltime = (clock() - starttime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totaltime);
	
		//���� �� �� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevtime = totaltime - prevtime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevtime);
	
		// ������ ���� ���� (����)
		deswater(prevtime);

		//����ڰ� �Է��� ���׿� ���� �ش�
		// 1. ������ ���� 0 �̸�? ���� ���� �ʴ´�
		if (point[num - 1] <= 0)
		{
			printf("%d�� ������ �̹� �׾����ϴ�", num);
		}
		//2. ������ ���� 0�� �ƴ� ���? ���� �ش� �� ������ 100�� �Ѵ��� üũ
		else if (point[num - 1] + 1 <= 100)
		{
			//�����ش�
			printf("%d�� ���׿� ���� �ݴϴ�", num);
			point[num - 1] += 1; // point[num - 1] + 1�� ���� �����ۿ�
		}
		//�������� �� ���� Ȯ��(�������� 20�ʸ��� �ѹ�)
		if (totaltime / 20 > level - 1)//������ ���� 1�ε� totaltime�� 20�ʰ� ������ 20���� �������� 1�� �ǹǷ� 1 > 0�� �Ǿ 20�ʸ��� ������
		{
			level++; // level : 1 -> level : 2
			printf("*** �� ������ ! ���� %d���� %d�� ������ �߽��ϴ� ***\n\n", level - 1, level);

			//���� ���� 5
			if (level == 5)
			{
				printf("\n\n�����մϴ�, �ְ����� �޼��߽��ϴ� ������ �����մϴ�\n\n");
				exit(0);
			}
		}
		//��� ����Ⱑ �׾����� Ȯ��
		if (checkfishalive() == 0)
		{
			//����� ��� �׾���
			printf("��� ����Ⱑ �׾���");
			exit(0);
		}
		else
		{
			printf("����Ⱑ ���� ��� �־��");
			//�ּ� �Ѹ��� �̻��� ����ִ�
		}
		prevtime = totaltime; // prevtime �� totaltime - prevtime�̴�
		// ������ �� �� �ð� 10�� -> �� ���� �� �� �ð� 15��  = 5�ʰ� prevtime�� ��
		// ���� �� ������ 25�ʿ� ���� �شٸ�(10������) 25 - 15�� �ؾߵǴµ� 15�ʰ� prevtime�� �� ������ ����
		// ���� 15�� ���� prevtime�� �־��ֱ� ���� �ӽ÷� prevtime(���������� ���� �ؽð�) = totaltime(�����ְ� �귯���ð�)�� ���� 
	}


	return 0;
}

void initdata()
{
	level = 1; // ���ӷ���(1~5)
	for (int i = 0; i <= 5; i++)
	{
		arrayfish[i] = 100; //������ �� ���� (0~ 100)
	}
}

void printfishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayfish[i]);
}
	printf("\n\n");
}

void deswater(long elapsedtime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] -= (level * 3 * (int)elapsedtime); //���̵� ���� ��
		if (arrayfish[i] < 0)
		{
			arrayfish[i] = 0;
		}
	}
}
int(checkfishalive())
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayfish[i] > 0)
			return 1; // �� true i�� 6���� �� �� 1�� �����־ �������
	}
	return 0; //��� ����Ⱑ ����
}
