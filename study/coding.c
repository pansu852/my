#define _CRT_SECURE_NO_WARNINGS

// ���ϱ� ����Ŭ, ���� ���ڷ� ���ƿ��� count���� ������
/*
#include <stdio.h>
int	main()
{
	int i, j, k, l = -1;
	int num;
	int count = 0;
	int result;

	scanf_s("%d", &num);
	result = num;
	while (l != result)
	{
		i = num / 10;
		j = num % 10; // �־��� ���� ���� �������ڸ���
		k = (i + j) % 10;  // �տ��� �������� ���� �������ڸ���
		l = (j * 10) + k; // ���ο� ��
		num = l;
		count++;
	}
	printf("%d", count);
	return 0;
}*/

/*
// �����ѹ� = �����ڰ� ���� ��
#include <stdio.h>

int sum(int n) // �����ѹ�üũ �Լ�
{
	int sum = 0;
	sum = n;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int		main()
{
	int arr[10001]; // 10000������ ���� �̹Ƿ� 10001ũ���� �迭
	int count;
	for (int i = 1; i < 10001; i++)
	{
		count = sum(i); // 2,4,6,8,10�� sum(i)���� count�� ����
		if (count < 10001)
			arr[count] = 1; //���ǿ� �´°� 2,4�ۿ� �����Ƿ�
		// �迭�� 2��°�� 4��° ������ 1�� ����
	}
	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] != 1)
			printf("%d\n", i);
		// �迭�� 2��°�� 4��°�� ������ 1,3,5��° �ε��� ���
	}
	return 0;
}*/

// scanf�� 100�ڸ� ������ char���ڿ� �Է�
// ���ĺ� ������ ù��° ��ġ�� ���� i�� ���
// �ʱⰪ -1

/*
#include <stdio.h>

int		main()
{
	char word[100] = { 0, };
	scanf("%s", &word);

	for (int i = 97; i <= 122; i++) // alpha -> ������� check
	{
		int j = 0;
		while (word[j] != 0) // word[j]�� ������ ���
		{
			if (word[j] == (char)i) // alpha�� �Է°� [j]�� ������ �����ϸ� break�� while�� ��������
				break; // ���ٸ� break�� if�� Ż��
			j++; // �ش� �ڸ� �迭 + 1
		}
		if (word[j] == (char)i) //i�� word[j]�� ���ٸ� �迭��ġ�� j���
			printf("%d ", j);
		else
			printf("-1 ");
	}
}*/
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	int S, R;
	char ch[21];

	scanf("%d", &S);

	for (int i = 0; i < S; i++)
	{
		scanf("%d", &R);
		scanf("%s", &ch); 
		for (int j = 0; j < strlen(ch); j++)
			// R�� ������ ch�� ���ڿ����� �� ������ or �� ������ �־ 
			// strlen(ch)�� �Է¹��� ���ڿ� ũ�⸸ŭ�� ���������
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", ch[j]);
			}
		}
		printf("\n");
	}
}*/


// ���� ���� ���� ���ĺ� �빮�ڷ� ���
/*
#include <stdio.h>
#include <string.h>

int		main()
{
	int cnt[26] = { 0, };
	int max, count = 0;
	int  select = 0;
	char arr[1000000];

	scanf("%s", &arr);

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < strlen(arr); j++)
		{
			if (i == arr[j])
				cnt[i - 'a']++;
		}
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < strlen(arr); j++)
		{
			if (i == arr[j])
				cnt[i - 'A']++;
		}
	}
	max = cnt[0];
	for (int i = 1; i < 26; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
			select = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (max == cnt[i])
			count++;
	}
	if (count > 1)
		printf("?\n");
	else
		printf("%c", select + 'A');
	return 0;
}*/

//  ��� ������

/*
#include <stdio.h>

int	main()
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	n1 = ((n1 % 10) * 100) + (((n1 / 10) % 10) * 10) + (n1 / 100);
	n2 = ((n2 % 10) * 100) + (((n2 / 10) % 10) * 10) + (n2 / 100);

	if (n1 > n2)
		printf("%d", n1);
	else
		printf("%d", n2);
}*/

// ��� ���ڰ� �ԷµǾ����� �������� ����
/*
#include <stdio.h> 
#include <string.h> 

int main(void) 
{ 
	int len, cnt = 0;
	char arr[1000000]; 
	scanf("%[^\n]s", arr); // �ٹٲ��� ������ ��� ���� �Է�
	len = strlen(arr);

	for(int i = 1; i < len - 1; i++) 
	{ 
		if(arr[i] == ' ') 
			cnt++; 
	}
	printf("%d\n", cnt + 1); 
	return 0; 
}

#include <stdio.h>
#include <string.h>

int		main()
{
	int cnt = 1; // �ܾ�� ���� + 1�̹Ƿ� 1���� ����
	char S[1000000];

	scanf("%[^\n]s", S); 

	for (int i = 0; i < strlen(S); i++)
	{
		if (S[i] == ' ')
			cnt++;
	}
	if (S[0] == ' ' && S[strlen(S) - 1] == ' ') // �� && �� ��������
		cnt -= 2;
	else if (S[0] == ' ') // �� ��������
		cnt -= 1;
	else if (S[strlen(S) - 1] == ' ') // �� ��������
		cnt -= 1;

	printf("%d", cnt);
}*/

// A,B,C�� 21�������� �ڿ���
// C : ��Ʈ�ϰ���, A : �������. C : �������
// �Ѽ����� �Ѻ�뺸�� ���������� ���Ͻÿ�(���ͺб���)���ٸ� -1
/*
#include <stdio.h>

int	main()
{
	long A = 0, B = 0, C = 0, X = 1;

	scanf("%ld %ld %ld", &A, &B, &C);

	if (B >= C)
	{
		printf("-1");
		return 0;
	}
	// A + B * X < C * X ��� ������ �ذ� ���� ������Ŵ
	// A < (C - B) * X �̹Ƿ� X �� A / (C - B)���� + 1 Ŀ����
	X = A / (C - B) + 1; // �������� �������� ���� �׷����� X�� ����
	//���ʷ� ������ �߻��ϴ� �Ǹŷ��̱⶧���� �Ҽ����� �����ϰ� +1���ϸ� �ذ�

	printf("%d", X);
	return 0;
}*/

/*
#include <stdio.h>

int	main()
{
	int num;
	int x = 1;
	
	scanf("%d", &num);
	
	int i = 1;
	while (num > x)
	{
		x += 6 * i;
		i++;
	}
	printf("%d", i);
}
// 1. �ʱ�� -> 2. ���ǽ� -> 3. ���� -> 4. ������
// 2 -> 3 -> 4 ������� �ݺ��� ����
// i = 3�϶� 4. ���� ����ȵ� 2.������ ������ ���� �����Ƿ� Ż��
// ������ i = 4�� ������ �����̹Ƿ� printf���ϸ� i = 4�� ���
for (�ʱ��; ����; ������) �� ��������� �ʱ���� ���� ������ ��

[����->����->������]�� ��� �����ϴ� �����Դϴ�.

a�� ���� 20�� ���, i = 1�� �ʱ�ȭ�ǰ�

20 > 1->b += 6(7)->i++(2)

20 > 7->b += 12(19)->i++(3)

20 > 19->b += 18(37)->i++(4)

20 < 37->���� �Ҹ������� �ݺ��� Ż��

	�� ������ ����Ǳ� ������, i�� 4�� ����Ǵ°� �½��ϴ�*/


// ������ �ö�(�ð��ʰ���)
/*
#include <stdio.h>

int	main()
{
	long a, b, v;
	int h = 0;

	scanf("%ld %ld %ld", &a, &b, &v);
	
	int day = 1; // ���ǿ� �Է°��� 1 ���� �����̹Ƿ� i = 1;
	while (1) 
	{
		h += a;
		if (h >= v) // ���� �����Ǹ�
			break; // break�� �ٷ� �ݺ��� �������� +1 �ȵ� ����
		h -= b;
		day++;
	}
	printf("%d", day);
}*/

//������ �ö�(�ð����� �ȶ�)
/*
#include <stdio.h> 
#include <math.h> 

int main(void) 
{ 
	int a, b, v; 
	double day; 
	
	scanf("%d %d %d", &a, &b, &v); 
	
	day = ceil((double)(v - b) / (a - b)); 
	// ��Ȯ�� ���� �������� �ʴ°� ceil�� �÷���
	// �������� �����̶� ������ day + 1�� �ؾ��ϹǷ�
	printf("%.0f", day); 
	
	return 0; 
}
*/

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char ch[15];
	int t = 0;

	scanf("%s", &ch);

	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < strlen(ch); j++)
		{
			if (ch[j] == i)
				t += dial(i);
		}
	}
	t += strlen(ch); // ���̾� 1�� �����ָ� �ǹǷ� �̹� ����
	// ���̾��� �� T�� ���ڿ����̸�ŭ �� ������

	printf("%d", t);
}

int	dial(int n)
{
	switch (n){
	case 'A':
	case 'B':
	case 'C':
		return 2;
	case 'D':
	case 'E':
	case 'F':
		return 3;
	case 'G':
	case 'H':
	case 'I':
		return 4;
	case 'J':
	case 'K':
	case 'L':
		return 5;
	case 'M':
	case 'N':
	case 'O':
		return 6;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		return 7;
	case 'T':
	case 'U':
	case 'V':
		return 8;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		return 9;
	}
}*/
/*
#include <stdio.h>
#include <string.h>


int		main()
{
	int num;
	scanf("%d", &num);
	char a[100];
	char b;

	for (int i = 0; i < num; i++)
	{
		scanf("%s", &a);
		b = strlen(a);
		if (b > 0)
		{
			char* c = (char*)malloc(sizeof(char) * (b + 1));
			strcpy(c, a);

		}
	}
	printf("%s", b);
}*/

// �� �� ���ϱ�
/*
#include <stdio.h>

int	main()
{
	int n;
	int han = 99, ch1, ch2;
	
	scanf("%d", &n);

	if (n < 100)
	{
		printf("%d", n);
		return 0;
	}
	for (int i = 100; i <= n; i++) // 100 ~ start
	{
		ch1 = (i / 100) - ((i / 10) % 10); // �����ڸ� - �����ڸ�
		ch2 = ((i / 10) % 10) - (i % 10); // �����ڸ� - �����ڸ�

		if (ch1 == ch2) // ������ Ȯ��
			han++; // ���ٸ� ++
	}
	printf("%d\n", han);
	return 0;
}*/
