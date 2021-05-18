#include < stdio.h>

struct gameinfo {//struct(구조체)다른 타입의 데이터를 한번에 묶음
	char * name;
	int year;
	int price;
	char* company;
	
	struct gameinfo* friendgame; // 연관 업체 게임
};

typedef struct /*gameinfomation(1. 이 칸이 없어져도 사용 가능, 무엇으로 사용되어지는지 식별하지 않아도)*/ {
	char* name;
	int year;
	int price;
	char* company;

	struct gameinfo * friendgame; // 연관 업체 게임
} GAME_INFO; //struct gameinfomation 이 코드를 GAME_INFO로 치환하겠다 라는 뜻 별명지어주는것
//2. game info라는 별명(새롭게식별할수있는코드)이 지어졌기 때문에 GAME_INFO를 적으면 상관없이 코드가 작동됨
int main(void) 
{
	// [게임 출시]
	// 이름 : 나도게임
	// 발매년도 : 2017
	// 가격 50원
	//제작사 : 나도회사

	char * name = "나도게임";
	int year = 2017;
	int price = 50;
	char * company = "나도회사";

	// [게임 출시]
	// 이름 : 나도게임
	// 발매년도 : 2017
	// 가격 50원
	//제작사 : 나도회사

	char * name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char * company2 = "너도회사";

	//구조체 사용, 다른 타입의 데이터를 한번에 묶는것
	struct gameinfo gameinfo1;//gameinfo는 구조체, gameinfo1은 구조체변수
	//밑에 식처럼 .을 이용해서 구조체 멤버 변수들에 접근
	gameinfo1.name = "나도게임";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "나도회사";
	
	//구조체 출력

	printf("--게임 출시 정보--\n");
	printf("게임명   : %s\n", gameinfo1.name);
	printf("발매년도 : %d\n", gameinfo1.year);
	printf("가격     : %d\n", gameinfo1.price);
	printf("제작사   : %s\n", gameinfo1.company);

	//구조체 배열처럼 초기화
	struct gameinfo gameinfo2 = { "너도게임", 2017, 100, "너도회사"};
	printf("\n\n--또 다른 게임 출시 정보--\n");
	printf("게임명   : %s\n", gameinfo2.name);
	printf("발매년도 : %d\n", gameinfo2.year);
	printf("가격     : %d\n", gameinfo2.price);
	printf("제작사   : %s\n", gameinfo2.company);

	//구조체 배열
	struct gameinfo gamearray[2] = {
		{"나도게임", 2017, 50, "나도회사"},
		{"너도게임", 2017, 100, "너도회사"}
	};
	//구조체 포인터
	// ->는 구조체 포인터들의 멤버에 접근
	struct gameinfo * gameptr; //미션맨 같은 역활
	gameptr = &gameinfo1;
	printf("\n\n--미션맨의 게임 출시 정보--\n");
	/*printf("게임명   : %s\n", (*gameptr).name);
	printf("발매년도 : %d\n", (*gameptr).year);
	printf("가격     : %d\n", (*gameptr).price);
	printf("제작사   : %s\n", (*gameptr).company);*/
	printf("게임명   : %s\n", gameptr->name);
	printf("발매년도 : %d\n", gameptr->year);
	printf("가격     : %d\n", gameptr->price);
	printf("제작사   : %s\n", gameptr->company);

	
	// 연관 업체 게임 소개
	gameinfo1.friendgame = &gameinfo2;
	printf("\n\n-- 연관 업체의 게임 출시 정보--\n");
	printf("게임명   : %s\n", gameinfo1.friendgame->name);
	printf("발매년도 : %d\n", gameinfo1.friendgame->year);
	printf("가격     : %d\n", gameinfo1.friendgame->price);
	printf("제작사   : %s\n", gameinfo1.friendgame->company);

	//typedef
	//자료형에 별명 지정
	// int i = 3이 원래 우리가 알고 있는 표기인데
	typedef int 정수; //을 하면 i값이 성은이라는 문자로 변경된다
	typedef float 실수;
	정수 성은이 = 3; // int i = 3; 과 똑같은 뜻
	실수 우인이 = 3.23f; // float f = 3.23f 와 같은 뜻
	printf("정수변수 : %d\n 실수변수 %.2f\n\n", 성은이, 우인이);

	typedef struct gameinfo 게임정보;//게임정보를 별명으로 지정
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2020;

	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = 2014;

	/*struct gameinformation game3;
	game3.name = "한글게임3";*/

	return 0;
}

