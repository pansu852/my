#define _CRT_SECURE_NO_WARNINGS

/*
char s3[20];
s3 = "hello" // �̹� ����� �迭���� ���ڿ��Է�x

// y = strcmp(s1. s2); -> ���ڿ��� ������ 0, s1 - s2, s1 < s2 = -1, s1 > s2 = 1
// strcpy(s2, s1); -> s2�� �����Ҵ� or s2[10]ó�� ������ ����������
// strcat(s2, s1); -> s2 ���ڿ� ���� s1���ڿ��� ����
/////////////////////
	char s1[20];    // ũ�Ⱑ 20�� char�� �迭�� ����
	//s1�� ���� ���ڸ� ������ �� �迭(����ϴ� �迭�̳� �޸𸮰���) : ����
	sprintf(s1, "Hello, %s", "world!");    // "Hello, %s"�� ������ �����Ͽ� s1�� ����

	printf("%s\n", s1);    // Hello, world!: ���ڿ� s1 ���

    char s1[30];    // ũ�Ⱑ 30�� char�� �迭�� ����

	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);    // ����, ����, �Ǽ��� ���ڿ��� ����

	printf("%s\n", s1);    // a 10 3.200000 1.123456e-21: ���ڿ� s1 ���
*/

/*int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // ũ�Ⱑ 10�� int�� �迭

int* numPtr = numArr;       // �����Ϳ� int�� �迭�� �Ҵ�

printf("%d\n", *numPtr);    // 11: �迭�� �ּҰ� ����ִ� �����͸� �������ϸ� �迭�� 
							// ù ��° ��ҿ� ����

printf("%d\n", *numArr);    // 11: �迭 ��ü�� �������ص� �迭�� ù ��° ��ҿ� ����

printf("%d\n", sizeof(numArr));    // 40: sizeof�� �迭�� ũ�⸦ ���ϸ� �迭�� �޸𸮿� 
								   // �����ϴ� ������ ��µ�

printf("%d\n", sizeof(numPtr));    // 4 : sizeof�� �迭�� �ּҰ� ����ִ� �������� ũ�⸦ 
								   // ���ϸ� �������� ũ�Ⱑ ��µ�(64��Ʈ��� 8)

return 0;
}*/

/*
// �Է°� 3���� ���� total���� 0~9������ ���ڵ��� ����� ���Դ��� ���
int		main()
{
	int a, b, c;
	int total;
	int num[10] = {0, }; // �迭�� ��Ҹ� ��� 0���� �ʱ�ȭ
	int rest;

	scanf_s("%d %d %d", &a, &b, &c);
	total = a * b * c;

	while (total > 0)
	{
		rest = total % 10; // ���������� rest�� ������ 0 ~9�� ����������
		//�˸´� ���ڰ� rest�� �迭�� �� ++�� 1���� �þ���� �˸�
		total = total / 10; //�����ڸ� -> �����ڸ��� ���ڸ����˻�
		num[rest]++; // num[rest]++�� 0~9���� �� 10���� �����ϴ� num�� �迭����
		//�� �迭�� �ڸ��� ���� 0�� �����̹Ƿ� ���ǿ� �´� ���ڰ� ���� +1�� ���ִ°�
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
}*/

// �ִ밪�� �� ��ġ ���
/*int		main()
{
	int num[9]; 
	int count;
	int a = 0;

	for (int i = 1; i < 10; i++)
	{
		scanf_s("%d", &num[i]);

		if (a < num[i])
		{
			a = num[i];
			count = i;
		}
	}
	printf("%d\n%d", a, count);
}*/
/*
int		main()
{
	int num[10] = {0, };
	int count;
	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
		num[i] = num[i] % 42;
	}
	for (int i = 0; i < 10; i++) // [0]�迭���� ��
	{
		count = 0;
		for (int j = i + 1; j < 10; j++) // [1]�迭���� �˻�
		{
			if (num[i] == num[j]) // [0,1]���ͺ� ������ �ɷ���
				count++; // �������ڴ� �������� ������ ������ count++
		}
		if (count == 0)
			result++;
	}
	printf("%d", result);
}*/

/*#include <string.h>

int main(void) {

	int input, score, sum;
	char test[80];

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
	 	sum = 0;
		score = 1;
		scanf_s("%s", test);
		for (int j = 0; j < strlen(test); j++) {
			if (test[j] == 'O') {
				sum += score;
				score++;
			}
			if (test[j] == 'X')  score = 1;
		}
		printf("%d\n", sum);
	}
}*/

/*#include <stdlib.h>

int* ten()
{
	int* numptr = malloc(sizeof(int)); // �����Ҵ�
	//�����͸� ��ȯ�Ϸ��� malloc�� �޸𸮸� �Ҵ��ѵ� ��ȯ�ؾ���
	*numptr = 10; // �������� 10����

	return numptr; // ������ ��ȯ malloc���� �޸𸮸� �Ҵ������Ƿ� �Լ��� ������ �����������


	//int num1 = 10;
	//return &num1;
	//�̷������� �ϸ� num1�� ten�Լ��ȿ����� ����Ҽ�������
	//�Լ��� ������ ����� ��¼�ٰ� ȣ���� �Ǵ� ������ �ڵ尡 �����ؼ�
}
// �Լ��� main���� �ݵ�� ���� or ����+���� �ؾ���
// c���α׷��� ������ �Ʒ��� �б⶧��
char* helloLiteral() // �䷸�Ե�����
{
	char* s1 = "Hello, wolrd!";
	return s1; // ���ڿ��� �޸𸮿� ����Ǿ�����
	//���ڿ� ������ ����
}
int main()
{
	int* numptr;
	numptr = ten(); // �Լ��� ȣ���ϰ� ��ȯ���� numptr�� ����
	printf("%d\n", *numptr); // 10 : �޸𸮸� �����ϱ� ������ ������
	free(numptr); //�ٸ� �Լ����� �Ҵ�� �޸𸮶� �ݵ�� ����
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory()
{
	void* ptr = malloc(100); // 100byte��ŭ ���� �޸��Ҵ�
	// void�����ʹ� ������ȯ ���� �ʾƵ� ���� type�� �����Ϳ� �������ִ�
	return ptr;
}
//void* allocMemory() // �ڵ����̱�
//{
	//return malloc(100);    // malloc �Լ��� ȣ���ϸ鼭 �ٷ� ��ȯ
//}
//��ȯ�� �ڷ���(�Լ�)���� void *�� ����� �� �ֽ��ϴ�. 
//�̶��� char �����Ͱ� void �����ͷ� �ڵ� ��ȯ�ǰ�, 
//�ٽ� �Լ��� ȣ��Ǿ��� �� char �����Ϳ� ����˴ϴ�.
int	main()
{
	char* s1 = allocMemory();
	strcpy_s(s1, "Hello, world!");
	printf("%s\n", s1);
	free(s1);

	int* numptr1 = allocMemory();
	numptr1[0] = 10;
	numptr1[1] = 20;
	printf("%d %d\n", numptr1[0], numptr1[1]);
	free(numptr1);

	return 0;
}*/

// OX���� ���ϴٽ�

/*#include <stdio.h>
#include <math.h>

int	main()
{
	int num1, num2;
	int score[1000];
	int sum, sum2 = 0;
	float result;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++)
	{
		scanf("%d", &num2);
		if (!(1 <= num2 && num2 <= 1000))
			return 0;
		for (int j = 0; j < num2; j++)
		{
			scanf("%d", &score[j]);
			if (!(0 <= score && score <= 100))
				return 0;
			sum = score[j];
		}
		sum2 = sum / num2;
		int count = 0;
		for (int k = 0; k < num2; k++)
		{
			if (score[k] >= sum2)
				count += 1;
		}
		count = num2 / count;
		result = count;
		printf("%.3f", ceil(result));
	}
}*/

/*
#include <stdio.h>

int		main()
{
	int arr[10000];
	int n1, n2;
	int sum, cnt;
	float avg, result;

	scanf("%d", &n1);

	for (int i = 0; i < n1; i++)
	{
		sum = 0; cnt = 0;
		scanf("%d", &n2);
		for (int j = 0; j < n2; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		avg = (float)sum / n2;
		for (int j = 0; j < n2; j++)
		{
			if (arr[j] > avg)
				cnt++;
		}
		result = (float)cnt / n2 * 100;
		printf("%.3f%%\n", result);
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void) {
	int N, x, ans;
	while (scanf("%d", &N) != EOF) 
	{
		for (x = ans = 1; x % N != 0; ans++) 
		{
			x = (x * 10 + 1) % N;
		}
		printf("%d\n", ans);
	}
	return 0;
}*/