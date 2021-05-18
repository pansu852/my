#include <stdio.h>
#include <time.h>
//10마리의 서로 다른 동물 (각 카드 2장씩)
//사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
//모든 동물 쌍을 찾으면 게임 종류
//총 실패 횟수 알려주기

/*int arrayanimal[4][5]; // 카드 지도 (20장의 카드)
int checkanimal[4][5]; //뒤집혔는지 여부 확인
char * stranimal[10]; // 10개의 공간 배열

void initanimalarray();
void initanimalname();
void shuffleanimal();

int getemptyposition();
int conv_pos_x(int x);
int conv_pos_y(int y);

void printanimals();
void printquestion();


int main_m_array_project(void) 
{
	srand(time(NULL));

	initanimalarray();
	initanimalname();

	shuffleanimal();
	
	int failcount = 0; //실패 횟수

	while (1)
	{
		int select1 = 0; //사용자가 선택한 처음 수
		int select2 = 0; //사용자가 선택한 두번째 수

		printanimals(); //동물위치출력
		printquestion(); //문제출력(카드지도)
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) //같은 카드 선택시 무효
			continue;

		//좌표에 해당하는 카드를 뒤집어 보고 같은지 다른지 확인
		int firstselect_x = conv_pos_x(select1);
		int firstselect_y = conv_pos_y(select1);

		int secondselect_x = conv_pos_x(select2);
		int secondselect_y = conv_pos_y(select2);
		// 같은 동물인 경우
		if ((checkanimal[firstselect_x][firstselect_y] == 0//카드가 뒤집히지 않았는지)
			&& checkanimal[secondselect_x][secondselect_y] == 0)  //소전제
			&&
			arrayanimal[firstselect_x][firstselect_y]
			== arrayanimal[secondselect_x][secondselect_y]) //대전제
		 // 두 동물이 같을 경우
		{
			printf("\n\n빙고! : %s 발견\n\n", stranimal[arrayanimal[firstselect_x][firstselect_y]]);
			checkanimal[firstselect_x][firstselect_y] = 1;
			checkanimal[secondselect_x][secondselect_y] = 1;
		}
		//다른 동물인 경우
		else
		{
			printf("\n\n 땡!! (틀렸거나, 이미 뒤집힌카드입니다)\n\n");
			printf("%d : %s\n", select1, stranimal[arrayanimal[firstselect_x][firstselect_y]]);
			printf("%d : %s\n", select2, stranimal[arrayanimal[secondselect_x][secondselect_y]]);
			printf("\n\n");

			failcount++;
		}

		//모든 동물을 찾았는지 여부, 1==참, 0==거짓
		if (foundallanimals() == 1)
		{
			printf("\n\n 축하합니다 ! 성공\n\n");
			printf("지금까지 총 %d번 실수하셨습니다\n", failcount);
			break;
		}
	}
	
	return 0;
}

void initanimalarray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayanimal[i][j] = -1;
		}
	}
}

void initanimalname()
{
	stranimal[0] = "성은";
	stranimal[1] = "우인";
	stranimal[2] = "중호";
	stranimal[3] = "찬석";
	stranimal[4] = "승윤";
	stranimal[5] = "승훈";
	stranimal[6] = "지훈";
	stranimal[7] = "현수";
	stranimal[8] = "백인";
	stranimal[9] = "흑인";
}
//동물 섞는위치
void shuffleanimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getemptyposition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayanimal[x][y] = i;
		}
	}
}
//좌표에서 빈 공간 찾기
int getemptyposition()
{
	while (1) // while(1)은 무한 루트 생성
	{//랜덤하게 뽑는 숫자를 0~19로 설정할것임 밑에 seq를 통해서
	 //하지만 실제 배열 값은 [0][0]~[3][3]까지
		int randpos = rand() % 20; // 0~19사이의 숫자 반환
		
		int x = conv_pos_x(randpos);
		int y = conv_pos_y(randpos);

		if (arrayanimal[x][y] == -1)
		{
			return randpos;
		}
	}
	return 0;
}
// 그러므로 0~19까지 뽑는 위치를 5로 나눈다
//x의 위치는 5로 나눈값으로 알 수 있고
//y의 위치는 5로 나눈값에서 나머지값이므로 (x,y)의 위치를 알 수 있음
// 각 배열의 위치를 x,y로 표현, 19 -> (3,4)로 바꿔줘야함
//□□□□□ 0 1 2 3 4 -> x로 나누면  0 0 0 0 0 y로 나누면 
//□□□□□ 5 6 7 8 9 -> x로 나누면  1 1 1 1 1
//□□□□□ 10        -> x로 나누면  2 2 2 2 2
//□□□□□        19 -> x로 나누면  3 3 3 3 3

int conv_pos_x(int x)
{
	return x / 5; // x를 5로 나눈 값
}
int conv_pos_y(int y)
{
	return y % 5; // y를 5로 나눈 나머지 값
}

void printanimals() //동물 위치 출력
{
	printf("\n=======이건 비밀인데 몰래 보여줍니다======\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", stranimal[arrayanimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==========================================\n");
}
void printquestion() //문제 출력
{
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//카드를 뒤집어서 맞혔으면 '동물이름'
			if (checkanimal[i][j] != 0)
			{
				printf("%8s", stranimal[arrayanimal[i][j]]);
			}
			//아직 뒤집지 못했으면(정답을 못맞히면) 뒷면 -> 위치를 나타내는 숫자
			else
			{
				printf("%8d", seq); //seq++로 표현하게 되어서 정답을 맞히게 되면 else절에 포함되어
				// seq++값이 증가하지 않기 때문에 seq로 표시해야 된다
				//정답을 맞히게 되면 else절에 포함되어 있는 seq++함수가 if절의 정답을 인식하지 못해서
				//동물이름은 적히지만 seq의 숫자는 증가하지 않아서 배열의 주소랑 엇갈리게 됨
			}
			seq++; //if를 타던 else를 타던 seq는 0~19인 상태에서만 정답을 맞히던 못 맞히던 해야함
		}
		printf("\n");
	}
	printf("\n");
}

int foundallanimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkanimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; //모두 다 찾음
}*/
