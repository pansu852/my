#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 비밀번호를 입력받아서
// 맞는경우? 비밀 일기를 읽어와서 보여주고 계속 작성
// 틀린경우? 경고 메시지를 표시하고 종료

#define MAX 10000

int main_fileproject(void) 

{
	//fgets, fputs 활용
	char line[MAX]; //파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; //일기장에 입력할 내용
	char password[20]; //비밀번호 입력
	char c; //비밀번호 입력 할 때 키값 확인용(별표로 만들것임)

	printf("'비밀일기'에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");

	//getchar()와 getch()의 차이
	//getchar() : 엔터를 입력받아야 동작을 한다
	//getch() : 키 입력시 바로바로 동작을 함

	int i = 0;

	while (1)
	{
		c = getch(); 
		//근데 getchar를 사용하면 *이뜨고 문자가 떠야 하는거 아닌가? 반대로 왜 뜨는지>
		// getch는 출력값을 안보여주고 getchar는 화면에 출력값을 보여주기때문에 사용하면 이상해짐
		//*은 우리가 입력한 입력값을 보여주는것
		if (c == 13) // enter -> 비밀번호 입력 종료, 비밀번호 자리가 13자리가 넘어가면
		{
			password[i] = '\0';//(NULL); 값이 13자리가 되어서 입력이되어지면
			break; //종료
		}
		else // 비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n === 비밀번호 확인중... ===\n\n");
	if (strcmp(password, "skehzheld") == 0) // 비밀번호 일치, password를 입력했을때 문자열의 크기가 0으로 
		//password는 skehzheld값이 정확히 입력되야 확인완료
	{
		printf(" === 비밀번호 확인 완료 === \n\n");
		char* filename = "lastproject.txt";
		FILE* file = fopen(filename, "a+t");
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT를 입력하세요");
		
		while (1)
		{
			scanf("%[^\n]", contents); //새로운 줄 (\n)이 나오기 전까지 읽어들임 즉 한 문장씩 저장을 하겠다
			getchar(); //enter 입력(\n) Flush처리(버퍼에 남아있는 엔터 줄바꿈을 없애줌)

			if (strcmp(contents, "EXIT") == 0) //EXIT가 0과 같다
			{
				printf("비밀일기 입력을 종료합니다\n\n");
				break;
			}
			fputs(contents, file); // EXIT가 아닐때
			fputs("\n", file); //엔터를 위에서 무시처리 하였으므로 임의로 추가
		}
		fclose(file);
	}
	else // 비밀번호 틀린 경우
	{
		printf(" === 비밀번호가 틀렸어요 ===\n");
		printf(" 너 누구야 나가라");
	}

	return 0;
}