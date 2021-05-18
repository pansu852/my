#define _CRT_SECURE_NO_WARNINGS

// 더하기 사이클, 원래 숫자로 돌아오는 count값이 몇인지
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
		j = num % 10; // 주어진 수의 가장 오른쪽자리수
		k = (i + j) % 10;  // 앞에서 구한합의 가장 오른쪽자리수
		l = (j * 10) + k; // 새로운 수
		num = l;
		count++;
	}
	printf("%d", count);
	return 0;
}*/

/*
// 셀프넘버 = 생성자가 없는 수
#include <stdio.h>

int sum(int n) // 셀프넘버체크 함수
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
	int arr[10001]; // 10000이하의 숫자 이므로 10001크기의 배열
	int count;
	for (int i = 1; i < 10001; i++)
	{
		count = sum(i); // 2,4,6,8,10이 sum(i)에서 count로 전달
		if (count < 10001)
			arr[count] = 1; //조건에 맞는건 2,4밖에 없으므로
		// 배열의 2번째와 4번째 순서에 1이 삽입
	}
	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] != 1)
			printf("%d\n", i);
		// 배열의 2번째와 4번째를 제외한 1,3,5번째 인덱스 출력
	}
	return 0;
}*/

// scanf로 100자리 이하의 char문자열 입력
// 알파벳 문자의 첫번째 위치에 따라 i값 출력
// 초기값 -1

/*
#include <stdio.h>

int		main()
{
	char word[100] = { 0, };
	scanf("%s", &word);

	for (int i = 97; i <= 122; i++) // alpha -> 순서대로 check
	{
		int j = 0;
		while (word[j] != 0) // word[j]문 끝까지 출력
		{
			if (word[j] == (char)i) // alpha와 입력값 [j]와 같은게 존재하면 break로 while문 빠져나감
				break; // 같다면 break로 if문 탈출
			j++; // 해당 자리 배열 + 1
		}
		if (word[j] == (char)i) //i와 word[j]가 같다면 배열위치인 j출력
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
			// R로 돌리면 ch의 문자열보다 더 돌수도 or 덜 돌수도 있어서 
			// strlen(ch)로 입력받은 문자열 크기만큼만 돌려줘야함
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", ch[j]);
			}
		}
		printf("\n");
	}
}*/


// 가장 많이 사용된 알파벳 대문자로 출력
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

//  상수 뒤집기

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

// 몇개의 문자가 입력되었는지 공백으로 구분
/*
#include <stdio.h> 
#include <string.h> 

int main(void) 
{ 
	int len, cnt = 0;
	char arr[1000000]; 
	scanf("%[^\n]s", arr); // 줄바꿈을 제외한 모든 문자 입력
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
	int cnt = 1; // 단어는 공백 + 1이므로 1부터 시작
	char S[1000000];

	scanf("%[^\n]s", S); 

	for (int i = 0; i < strlen(S); i++)
	{
		if (S[i] == ' ')
			cnt++;
	}
	if (S[0] == ' ' && S[strlen(S) - 1] == ' ') // 앞 && 뒤 공백제거
		cnt -= 2;
	else if (S[0] == ' ') // 앞 공백제거
		cnt -= 1;
	else if (S[strlen(S) - 1] == ' ') // 뒤 공백제거
		cnt -= 1;

	printf("%d", cnt);
}*/

// A,B,C는 21억이하의 자연수
// C : 노트북가격, A : 고정비용. C : 가변비용
// 총수입이 총비용보다 많아질때를 구하시오(손익분기점)없다면 -1
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
	// A + B * X < C * X 라는 수식을 밑과 같이 변형시킴
	// A < (C - B) * X 이므로 X 는 A / (C - B)보다 + 1 커야함
	X = A / (C - B) + 1; // 나머지가 남을수도 있음 그렇지만 X의 값은
	//최초로 이익이 발생하는 판매량이기때문에 소수점을 무시하고 +1을하면 해결

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
// 1. 초기식 -> 2. 조건식 -> 3. 본문 -> 4. 증감식
// 2 -> 3 -> 4 순서대로 반복문 수행
// i = 3일때 4. 까지 진행된뒤 2.에서는 조건이 맞지 않으므로 탈출
// 때문에 i = 4로 증가된 상태이므로 printf를하면 i = 4가 출력
for (초기식; 조건; 증감식) 의 실행순서는 초기식을 최초 실행한 후

[조건->본문->증감식]을 계속 실행하는 순서입니다.

a의 값이 20일 경우, i = 1로 초기화되고

20 > 1->b += 6(7)->i++(2)

20 > 7->b += 12(19)->i++(3)

20 > 19->b += 18(37)->i++(4)

20 < 37->조건 불만족으로 반복문 탈출

	의 순서로 실행되기 때문에, i엔 4가 저장되는게 맞습니다*/


// 달팽이 올라가(시간초과뜸)
/*
#include <stdio.h>

int	main()
{
	long a, b, v;
	int h = 0;

	scanf("%ld %ld %ld", &a, &b, &v);
	
	int day = 1; // 조건에 입력값이 1 부터 시작이므로 i = 1;
	while (1) 
	{
		h += a;
		if (h >= v) // 조건 성립되면
			break; // break로 바로 반복문 빠져나감 +1 안됨 절대
		h -= b;
		day++;
	}
	printf("%d", day);
}*/

//달팽이 올라가(시간제한 안뜸)
/*
#include <stdio.h> 
#include <math.h> 

int main(void) 
{ 
	int a, b, v; 
	double day; 
	
	scanf("%d %d %d", &a, &b, &v); 
	
	day = ceil((double)(v - b) / (a - b)); 
	// 정확히 몫이 나눠지지 않는건 ceil로 올려줌
	// 나머지가 조금이라도 있으면 day + 1을 해야하므로
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
	t += strlen(ch); // 다이얼에 1씩 더해주면 되므로 이미 구한
	// 다이얼의 합 T에 문자열길이만큼 더 더해줌

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

// 한 수 구하기
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
		ch1 = (i / 100) - ((i / 10) % 10); // 백의자리 - 십의자리
		ch2 = ((i / 10) % 10) - (i % 10); // 십의자리 - 일의자리

		if (ch1 == ch2) // 같은지 확인
			han++; // 같다면 ++
	}
	printf("%d\n", han);
	return 0;
}*/
