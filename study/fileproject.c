#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��й�ȣ�� �Է¹޾Ƽ�
// �´°��? ��� �ϱ⸦ �о�ͼ� �����ְ� ��� �ۼ�
// Ʋ�����? ��� �޽����� ǥ���ϰ� ����

#define MAX 10000

int main_fileproject(void) 

{
	//fgets, fputs Ȱ��
	char line[MAX]; //���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; //�ϱ��忡 �Է��� ����
	char password[20]; //��й�ȣ �Է�
	char c; //��й�ȣ �Է� �� �� Ű�� Ȯ�ο�(��ǥ�� �������)

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	//getchar()�� getch()�� ����
	//getchar() : ���͸� �Է¹޾ƾ� ������ �Ѵ�
	//getch() : Ű �Է½� �ٷιٷ� ������ ��

	int i = 0;

	while (1)
	{
		c = getch(); 
		//�ٵ� getchar�� ����ϸ� *�̶߰� ���ڰ� ���� �ϴ°� �ƴѰ�? �ݴ�� �� �ߴ���>
		// getch�� ��°��� �Ⱥ����ְ� getchar�� ȭ�鿡 ��°��� �����ֱ⶧���� ����ϸ� �̻�����
		//*�� �츮�� �Է��� �Է°��� �����ִ°�
		if (c == 13) // enter -> ��й�ȣ �Է� ����, ��й�ȣ �ڸ��� 13�ڸ��� �Ѿ��
		{
			password[i] = '\0';//(NULL); ���� 13�ڸ��� �Ǿ �Է��̵Ǿ�����
			break; //����
		}
		else // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n === ��й�ȣ Ȯ����... ===\n\n");
	if (strcmp(password, "skehzheld") == 0) // ��й�ȣ ��ġ, password�� �Է������� ���ڿ��� ũ�Ⱑ 0���� 
		//password�� skehzheld���� ��Ȯ�� �ԷµǾ� Ȯ�οϷ�
	{
		printf(" === ��й�ȣ Ȯ�� �Ϸ� === \n\n");
		char* filename = "lastproject.txt";
		FILE* file = fopen(filename, "a+t");
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ͻ÷��� EXIT�� �Է��ϼ���");
		
		while (1)
		{
			scanf("%[^\n]", contents); //���ο� �� (\n)�� ������ ������ �о���� �� �� ���徿 ������ �ϰڴ�
			getchar(); //enter �Է�(\n) Flushó��(���ۿ� �����ִ� ���� �ٹٲ��� ������)

			if (strcmp(contents, "EXIT") == 0) //EXIT�� 0�� ����
			{
				printf("����ϱ� �Է��� �����մϴ�\n\n");
				break;
			}
			fputs(contents, file); // EXIT�� �ƴҶ�
			fputs("\n", file); //���͸� ������ ����ó�� �Ͽ����Ƿ� ���Ƿ� �߰�
		}
		fclose(file);
	}
	else // ��й�ȣ Ʋ�� ���
	{
		printf(" === ��й�ȣ�� Ʋ�Ⱦ�� ===\n");
		printf(" �� ������ ������");
	}

	return 0;
}