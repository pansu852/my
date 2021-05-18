#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

int main_file(void) 
{
	//파일 입출력
	//파일에 어떤 데이터를 저장
	//파일에 저장된 데이터를 불러오기

	// fputs, fgets 쌍 -> 문자열 저장
	char line[MAX]; // = char line[10000]

	//파일 쓰기
	/*FILE * file = fopen("test1.txt", "wt"); //\\두개가 들어가야 하나의 역슬래쉬
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

	fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해주세요\n", file);*/

	//파일 읽기
	/*FILE* file = fopen("test1.txt", "rt"); //\\두개가 들어가야 하나의 역슬래쉬
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL) //라인 : 저장될곳 max : 사이즈, file : file 포인터
	{
		printf("%s", line);
	}*/

	//파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면
	// 데이터 손실 발생 가능! 그래서 항상 fopen이 나오면 fclose를 적어야힘
	//fclose(file);
	
			 
	// fprintf, fscanf 쌍
	// printf
	// scanf
	int num[6] = { 0, 0, 0, 0, 0, 0 }; //추첨번호
	int bouns = 0; //보너스번호

	char str1[MAX];
	char str2[MAX];
	//------------------------------------------------%s는 왜써야하는가?
	//------------------------------------------------str이 들어가는 이유?, &표시,[]는 why?
	//파일 쓰기
	/*FILE* file = fopen("test2.txt", "wt");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	fprintf(file, "%s %d %d %d %d %d %d\n","추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n","보너스번호", 7);

	fclose(file);*/

	//파일 읽기
	/*FILE* file = fopen("test2.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	//(내가 그냥 생각해서 해본거)
	//fscanf(file, "추첨 번호 %d %d %d %d %d %d\n", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	//printf("추첨번호 %d %d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4], num[5]);
    //fscanf(file, "%d", &bouns);
	//printf("%d\n", bouns);

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bouns);
	printf("%s %d\n", str2, bouns);*/

	fclose(file);


	return 0;
}
