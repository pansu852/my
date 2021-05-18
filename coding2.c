#define _CRT_SECURE_NO_WARNINGS

/*
// 크로아티아 알파벳
#include <stdio.h>
#include <string.h>

int		main()
{
	char ch[101];
	int count = 0;

	scanf("%s", &ch);

	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == '=' || ch[i] == '-')
			i++;
		if (ch[i] == 'd' && ch[i + 1] == 'z' && ch[i + 2] == '=')
			count--;
		if (ch[i] == 'l' && ch[i + 1] == 'j')
			count--;
		if (ch[i] == 'n' && ch[i + 1] == 'j')
			count--;
		for (int k = 'a'; k <= 'z'; k++)
		{
			if (ch[i] == k)
				count++;
		}
	}
	printf("%d", count);
}
*/ 

// 단어 그룹 체커
/*
#include <stdio.h>
#include <string.h>

int    check(char a[], int n)
{
	int num = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
			{
				num = j - i;
				if (num > 1)
				{
					if (a[j - 1] != a[j])
						return 0;
				}
			}
		}
	}
	return 1;
}

int    main()
{
	int num, sum = 0;
	char arr[100];

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", &arr);
		sum += check(arr, strlen(arr));
	}
	printf("%d", sum);
	return 0;
}*/

// 소수 찾기
/*
#include <stdio.h>

int	main()
{
	int N, num, cnt = 0;
	
	scanf("%d", &N);

	int i;

	while (N--)
	{
		scanf("%d", &num);
		for (i = 2; i < num; i++)
		{
			if (num % i == 0) // 어차피 break가 안되면 i는 ++연산이 마지막에 한번 되므로 소수는 밑에 if문에서 밝혀짐
				break;
		} // 초기식(2)이 2일 경우 -> 조건(2) -> 본문(2) -> 증감(3) -> 조건(3) -> 불일치 -> 밑에 if 문에서 소수인것이 걸림
		if (i == num) 
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}*/

// 소인수분해
/*
#include <stdio.h>
// #include <math.h>
int		main()
{
	int n;
	scanf("%d", &n);
	//for (int i = 2; i <= sqrt(N); i++) // N을 반만큼 검사
		 // 시간 복잡도는 i * i 가 sqrt(N)보다 더 크다
	for (int i = 2; i * i <= n; i++) // 에라토스테네스의 체, 91이 소수인지 판단하려면
// 9 * 9 < 91 < 10 * 10 이므로 소수인지 판별할때는 1~9까지만 나누어보면됨
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
			i--;
		}
	}
	if (n > 1)
		printf("%d\n", n);
}*/

//소수구하기, 시간제한

/*
#include <stdio.h>
#include <math.h>

int		main()
{
	int M, N;
	int i, j, cnt;

	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++)
	{
		cnt = 0;
		for (j = 2; j * j <= i; j++) // 에라토스테네스체
		{
			if (i % j == 0)
			{
				j = 2;
				cnt++;
				break;
			}
		}
		if (i == 1)
			continue;
		if (cnt == 0)
			printf("%d\n", i);
	}
}*/
/*

// 재귀 팩토리얼

#include <stdio.h>
int	fact(int num)
{
	if (num > 1)
		return num * fact(num - 1);
	// N이 1이 될 때까지 재귀함수 사용 1이되면 조건에 안 맞으므로 return
	else
		return 1; // 0, 1은 return 1
}

int	main()
{
	int N;

	scanf("%d", &N);
	printf("%d\n", fact(N)); // fact(N)에서 받아온 수 출력

	return 0;
}
*/

// 피보나치 재귀
/*
#include <stdio.h>

int	fibonacci(int num)
{
	if (num > 1)
		return fibonacci(num - 1) + fibonacci(num - 2);
	else
		return num;
}
// 9, 8 -> 8, 6 -> 7, 4 -> 6, 2 -> 4, 1
int	main()
{
	int N;

	scanf("%d", &N);
	printf("%d\n", fibonacci(N));

	return 0;
}*/

// 별찍기

/*
#include <stdio.h>

void star(int x, int y, int num)
{
	if ((x / num) % 3 == 1 && (y / num) % 3 == 1)
	{
		printf(" ");
	}
	else
	{
		if (num / 3 == 0)
		{
			printf("*");
		}
		else
		{
			star(x, y, num / 3);
		}
	}
}

int main(int argc, char* argv[])
{
	int x, y, num;
	scanf("%d", &num);
	if (num % 3 != 0)
		return 0;
	for (x = 0; x < num; ++x)
	{
		for (y = 0; y < num; ++y)
		{
			star(x, y, num);
		}
		printf("\n");
	}
	return 0;
}*/

// 하노이
/*
#include <stdio.h>
#include <math.h>

void	hanoi(int N, int start, int mid, int end)
{
	if (N == 1)
		printf("%d %d\n", start, end);
	else
	{
		hanoi(N - 1, start, end, mid);
		printf("%d %d\n", start, end);
		hanoi(N - 1, mid, start, end);
	}
}

int	main()
{
	int N;

	scanf("%d", &N);

	printf("%d\n", (int)pow(2, N) - 1);
	hanoi(N, 1, 2, 3);
}*/

// 골드바흐

/*
#include <stdio.h>

int	main()
{
	int n, count = 0;
	int i = 0;

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		if (n == 1)
		{
			printf("1");
			continue;
		}
		for (int i = n - 1; i < n; i++)
		{
			for (i = 2; i <= 123456; i++)
			{
				if (n % i == 0)
					break;
			}
			if (n == i)
				count++;
		}
		printf("%d\n", count);
		i++;
	}
	return 0;
}*/


// 삼항연산자
/*
#include <stdio.h>

int   main()
{
	int x, y, z;
	int min = 0, max = 0;

	scanf("%d %d %d", &x, &y, &z);

	printf("max : %d\n", (x > y ? x : y) > z ? (x > y ? x : y) : z);
	printf("min : %d", (x < y ? x : y) < z ? (x < y ? x : y) : z);

	return 0;
}*/


// 짝수 소수 예제가 입력됨
// 짝수 소수 예제 = 소수 + 소수로 나타내야함
/*
#include <stdio.h>

int	main()
{
	int num;
	int num2, num3 = 0;
	int count, count2, k;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
	{
		// 8 -> 7 -> 6 -> 5 -> 4
		scanf("%d", &num2);
		for (int j = num2; j > 2; j--)
		{
			for (k = 2; k < num2; k++)
			{
				if (j % k == 0)
					break;
			}
			if (j == k)
				count = j;
		}
		int l = 0;
		count2 = num2 - count;
		for (l = 2; l < count2; l++)
		{
			if (count2 % l == 0)
				break;
		}
		if (count2 == l)
			printf("%d %d", count, count2);
	}
	return 0;
}*/

/*
#include <stdio. h>

int main()
{
	int x, y, z;
	while (1)
	{
		int num1, num2, num3;
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0)
			break;

		num1 = x * x;
		num2 = y * y;
		num3 = z * z;

		if (num3 == num1 + num2 || num2 == num1 + num3 || num1 == num2 + num3)
			printf("rignt\n");
		else
			printf("wrong\n");
	}
	return 0;
}*/
