#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

int main_file(void) 
{
	//���� �����
	//���Ͽ� � �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	// fputs, fgets �� -> ���ڿ� ����
	char line[MAX]; // = char line[10000]

	//���� ����
	/*FILE * file = fopen("test1.txt", "wt"); //\\�ΰ��� ���� �ϳ��� ��������
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

	fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���\n", file);*/

	//���� �б�
	/*FILE* file = fopen("test1.txt", "rt"); //\\�ΰ��� ���� �ϳ��� ��������
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL) //���� : ����ɰ� max : ������, file : file ������
	{
		printf("%s", line);
	}*/

	//������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����
	// ������ �ս� �߻� ����! �׷��� �׻� fopen�� ������ fclose�� �������
	//fclose(file);
	
			 
	// fprintf, fscanf ��
	// printf
	// scanf
	int num[6] = { 0, 0, 0, 0, 0, 0 }; //��÷��ȣ
	int bouns = 0; //���ʽ���ȣ

	char str1[MAX];
	char str2[MAX];
	//------------------------------------------------%s�� �ֽ���ϴ°�?
	//------------------------------------------------str�� ���� ����?, &ǥ��,[]�� why?
	//���� ����
	/*FILE* file = fopen("test2.txt", "wt");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	fprintf(file, "%s %d %d %d %d %d %d\n","��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n","���ʽ���ȣ", 7);

	fclose(file);*/

	//���� �б�
	/*FILE* file = fopen("test2.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	//(���� �׳� �����ؼ� �غ���)
	//fscanf(file, "��÷ ��ȣ %d %d %d %d %d %d\n", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	//printf("��÷��ȣ %d %d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4], num[5]);
    //fscanf(file, "%d", &bouns);
	//printf("%d\n", bouns);

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bouns);
	printf("%s %d\n", str2, bouns);*/

	fclose(file);


	return 0;
}
