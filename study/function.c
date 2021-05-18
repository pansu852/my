#include <stdio.h>
#include <time.h>

void question(i, num1, num2);
int randomnumber(int level);
void succes();
void fail();

int main_function(void) {
	//���� 5�����ְ� �� ������ �� ����� ������ ����(����)
	//������ ���, Ʋ���� ����
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) //1~5������ �� ���(���° �������� �˱�����)
		//5���� ������ ����Ǹ� �ڵ����� ���α׷� ����
	{
		//x * y = ?
		int num1 = randomnumber(i);
		int num2 = randomnumber(i);
		//printf("%d * %d ? ", num1, num2);
		question(i, num1, num2);//(������ ������ �Լ�)

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�");
			exit(0); //break�� ���� for���� Ż���ϰ� �ؿ� printf�� ���� ��µǱ� ������ exit�� ����
			//�߰��� ������ ������ ������� ����
		}
		else if (answer == num1 * num2)
		{
			succes();
			count++; // �� ���� ������ ����
		}
		else
		{
			fail();
		}
	}
	printf("\n����� 5���� %d���� ������ϴ�", count);

	return 0;
}
int randomnumber(int level)
{
	return rand() % (level * 10) + 1;
}
void question(int level,int num1,int num2)
{
	printf("%d��° ��й�ȣ", level);
	printf("\n\n\n%d x %d�� ?\n\n\n", num1, num2);
	printf("###############################");
	printf("\n\n\n��й�ȣ�� �Է��ϼ���(����-1)>>\n\n\n");
}
void succes()
{
	printf("\n �����Դϴ�");
}

void fail()
{
	printf("\nƲ�Ƚ��ϴ�");
}
