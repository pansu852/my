#include <stdio.h>
#include <time.h>

int main_11234(void) {

	srand(time(NULL));
	printf("\n\n == �ƺ��� ��Ӹ����� == \n\n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸������� 0~3

	int cntshowbottle = 0; //�̹� ���ӿ� ������ �� ����
	int precntshowbottle = 0; // �հ��ӿ� ������ �� ����
	//���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ���

	//3���� ��ȸ
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; // 4���� ��
		do {
			cntshowbottle = rand() % 2 + 2; //������ �� ����
		} while (cntshowbottle == precntshowbottle);
		precntshowbottle = cntshowbottle;

		int isincluded = 0; //������ ���߿� �߸��� ����
		printf(" > %d��° �õ� : ", i);

		//������ �� ���� ����
		for (int j = 0; j < cntshowbottle; j++)
		{
			int randbottle = rand() % 4; // 0~3
		//���� ���õ��� ���� ���̸� ����ó��
			if (bottle[randbottle] == 0)
			{
				bottle[randbottle] = 1;
				if (randbottle == treatment)
				{
					isincluded = 1;
				}
			}
			//�̹� ���õ� ���̸� �ߺ��̹Ƿ� �ٽ� ����
			else {
				j--;
			}
		}

		//����ڿ��� ����ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);
		}
		if (isincluded == 1)
		{
			printf(">> ����\n");
		}
		else {
			printf("����\n");
		}
		printf("\n .. ��� �Ϸ��� �ƹ�Ű�� �������� ..");
		getchar();
	}
	printf("\n\n�߸����� ����ϱ��?");
	scanf_s("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n >> �����Դϴ�!\n");
	}
	else
	{
		printf("\n >> �� Ʋ�Ⱦ�� ������ %d�Դϴ�\n", treatment + 1);
	}

	return 0;
}