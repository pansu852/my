#include <stdio.h>
#include <time.h>
//10������ ���� �ٸ� ���� (�� ī�� 2�徿)
//����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
//��� ���� ���� ã���� ���� ����
//�� ���� Ƚ�� �˷��ֱ�

/*int arrayanimal[4][5]; // ī�� ���� (20���� ī��)
int checkanimal[4][5]; //���������� ���� Ȯ��
char * stranimal[10]; // 10���� ���� �迭

void initanimalarray();
void initanimalname();
void shuffleanimal();

int getemptyposition();
int conv_pos_x(int x);
int conv_pos_y(int y);

void printanimals();
void printquestion();


int main_m_array_project(void) 
{
	srand(time(NULL));

	initanimalarray();
	initanimalname();

	shuffleanimal();
	
	int failcount = 0; //���� Ƚ��

	while (1)
	{
		int select1 = 0; //����ڰ� ������ ó�� ��
		int select2 = 0; //����ڰ� ������ �ι�° ��

		printanimals(); //������ġ���
		printquestion(); //�������(ī������)
		printf("������ ī�带 2�� ������ : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) //���� ī�� ���ý� ��ȿ
			continue;

		//��ǥ�� �ش��ϴ� ī�带 ������ ���� ������ �ٸ��� Ȯ��
		int firstselect_x = conv_pos_x(select1);
		int firstselect_y = conv_pos_y(select1);

		int secondselect_x = conv_pos_x(select2);
		int secondselect_y = conv_pos_y(select2);
		// ���� ������ ���
		if ((checkanimal[firstselect_x][firstselect_y] == 0//ī�尡 �������� �ʾҴ���)
			&& checkanimal[secondselect_x][secondselect_y] == 0)  //������
			&&
			arrayanimal[firstselect_x][firstselect_y]
			== arrayanimal[secondselect_x][secondselect_y]) //������
		 // �� ������ ���� ���
		{
			printf("\n\n����! : %s �߰�\n\n", stranimal[arrayanimal[firstselect_x][firstselect_y]]);
			checkanimal[firstselect_x][firstselect_y] = 1;
			checkanimal[secondselect_x][secondselect_y] = 1;
		}
		//�ٸ� ������ ���
		else
		{
			printf("\n\n ��!! (Ʋ�Ȱų�, �̹� ������ī���Դϴ�)\n\n");
			printf("%d : %s\n", select1, stranimal[arrayanimal[firstselect_x][firstselect_y]]);
			printf("%d : %s\n", select2, stranimal[arrayanimal[secondselect_x][secondselect_y]]);
			printf("\n\n");

			failcount++;
		}

		//��� ������ ã�Ҵ��� ����, 1==��, 0==����
		if (foundallanimals() == 1)
		{
			printf("\n\n �����մϴ� ! ����\n\n");
			printf("���ݱ��� �� %d�� �Ǽ��ϼ̽��ϴ�\n", failcount);
			break;
		}
	}
	
	return 0;
}

void initanimalarray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayanimal[i][j] = -1;
		}
	}
}

void initanimalname()
{
	stranimal[0] = "����";
	stranimal[1] = "����";
	stranimal[2] = "��ȣ";
	stranimal[3] = "����";
	stranimal[4] = "����";
	stranimal[5] = "����";
	stranimal[6] = "����";
	stranimal[7] = "����";
	stranimal[8] = "����";
	stranimal[9] = "����";
}
//���� ������ġ
void shuffleanimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getemptyposition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayanimal[x][y] = i;
		}
	}
}
//��ǥ���� �� ���� ã��
int getemptyposition()
{
	while (1) // while(1)�� ���� ��Ʈ ����
	{//�����ϰ� �̴� ���ڸ� 0~19�� �����Ұ��� �ؿ� seq�� ���ؼ�
	 //������ ���� �迭 ���� [0][0]~[3][3]����
		int randpos = rand() % 20; // 0~19������ ���� ��ȯ
		
		int x = conv_pos_x(randpos);
		int y = conv_pos_y(randpos);

		if (arrayanimal[x][y] == -1)
		{
			return randpos;
		}
	}
	return 0;
}
// �׷��Ƿ� 0~19���� �̴� ��ġ�� 5�� ������
//x�� ��ġ�� 5�� ���������� �� �� �ְ�
//y�� ��ġ�� 5�� ���������� ���������̹Ƿ� (x,y)�� ��ġ�� �� �� ����
// �� �迭�� ��ġ�� x,y�� ǥ��, 19 -> (3,4)�� �ٲ������
//������ 0 1 2 3 4 -> x�� ������  0 0 0 0 0 y�� ������ 
//������ 5 6 7 8 9 -> x�� ������  1 1 1 1 1
//������ 10        -> x�� ������  2 2 2 2 2
//������        19 -> x�� ������  3 3 3 3 3

int conv_pos_x(int x)
{
	return x / 5; // x�� 5�� ���� ��
}
int conv_pos_y(int y)
{
	return y % 5; // y�� 5�� ���� ������ ��
}

void printanimals() //���� ��ġ ���
{
	printf("\n=======�̰� ����ε� ���� �����ݴϴ�======\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", stranimal[arrayanimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==========================================\n");
}
void printquestion() //���� ���
{
	printf("\n\n(����)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//ī�带 ����� �������� '�����̸�'
			if (checkanimal[i][j] != 0)
			{
				printf("%8s", stranimal[arrayanimal[i][j]]);
			}
			//���� ������ ��������(������ ��������) �޸� -> ��ġ�� ��Ÿ���� ����
			else
			{
				printf("%8d", seq); //seq++�� ǥ���ϰ� �Ǿ ������ ������ �Ǹ� else���� ���ԵǾ�
				// seq++���� �������� �ʱ� ������ seq�� ǥ���ؾ� �ȴ�
				//������ ������ �Ǹ� else���� ���ԵǾ� �ִ� seq++�Լ��� if���� ������ �ν����� ���ؼ�
				//�����̸��� �������� seq�� ���ڴ� �������� �ʾƼ� �迭�� �ּҶ� �������� ��
			}
			seq++; //if�� Ÿ�� else�� Ÿ�� seq�� 0~19�� ���¿����� ������ ������ �� ������ �ؾ���
		}
		printf("\n");
	}
	printf("\n");
}

int foundallanimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkanimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; //��� �� ã��
}*/
