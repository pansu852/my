#include < stdio.h>

struct gameinfo {//struct(����ü)�ٸ� Ÿ���� �����͸� �ѹ��� ����
	char * name;
	int year;
	int price;
	char* company;
	
	struct gameinfo* friendgame; // ���� ��ü ����
};

typedef struct /*gameinfomation(1. �� ĭ�� �������� ��� ����, �������� ���Ǿ������� �ĺ����� �ʾƵ�)*/ {
	char* name;
	int year;
	int price;
	char* company;

	struct gameinfo * friendgame; // ���� ��ü ����
} GAME_INFO; //struct gameinfomation �� �ڵ带 GAME_INFO�� ġȯ�ϰڴ� ��� �� ���������ִ°�
//2. game info��� ����(���ӰԽĺ��Ҽ��ִ��ڵ�)�� �������� ������ GAME_INFO�� ������ ������� �ڵ尡 �۵���
int main(void) 
{
	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017
	// ���� 50��
	//���ۻ� : ����ȸ��

	char * name = "��������";
	int year = 2017;
	int price = 50;
	char * company = "����ȸ��";

	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017
	// ���� 50��
	//���ۻ� : ����ȸ��

	char * name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char * company2 = "�ʵ�ȸ��";

	//����ü ���, �ٸ� Ÿ���� �����͸� �ѹ��� ���°�
	struct gameinfo gameinfo1;//gameinfo�� ����ü, gameinfo1�� ����ü����
	//�ؿ� ��ó�� .�� �̿��ؼ� ����ü ��� �����鿡 ����
	gameinfo1.name = "��������";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "����ȸ��";
	
	//����ü ���

	printf("--���� ��� ����--\n");
	printf("���Ӹ�   : %s\n", gameinfo1.name);
	printf("�߸ų⵵ : %d\n", gameinfo1.year);
	printf("����     : %d\n", gameinfo1.price);
	printf("���ۻ�   : %s\n", gameinfo1.company);

	//����ü �迭ó�� �ʱ�ȭ
	struct gameinfo gameinfo2 = { "�ʵ�����", 2017, 100, "�ʵ�ȸ��"};
	printf("\n\n--�� �ٸ� ���� ��� ����--\n");
	printf("���Ӹ�   : %s\n", gameinfo2.name);
	printf("�߸ų⵵ : %d\n", gameinfo2.year);
	printf("����     : %d\n", gameinfo2.price);
	printf("���ۻ�   : %s\n", gameinfo2.company);

	//����ü �迭
	struct gameinfo gamearray[2] = {
		{"��������", 2017, 50, "����ȸ��"},
		{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}
	};
	//����ü ������
	// ->�� ����ü �����͵��� ����� ����
	struct gameinfo * gameptr; //�̼Ǹ� ���� ��Ȱ
	gameptr = &gameinfo1;
	printf("\n\n--�̼Ǹ��� ���� ��� ����--\n");
	/*printf("���Ӹ�   : %s\n", (*gameptr).name);
	printf("�߸ų⵵ : %d\n", (*gameptr).year);
	printf("����     : %d\n", (*gameptr).price);
	printf("���ۻ�   : %s\n", (*gameptr).company);*/
	printf("���Ӹ�   : %s\n", gameptr->name);
	printf("�߸ų⵵ : %d\n", gameptr->year);
	printf("����     : %d\n", gameptr->price);
	printf("���ۻ�   : %s\n", gameptr->company);

	
	// ���� ��ü ���� �Ұ�
	gameinfo1.friendgame = &gameinfo2;
	printf("\n\n-- ���� ��ü�� ���� ��� ����--\n");
	printf("���Ӹ�   : %s\n", gameinfo1.friendgame->name);
	printf("�߸ų⵵ : %d\n", gameinfo1.friendgame->year);
	printf("����     : %d\n", gameinfo1.friendgame->price);
	printf("���ۻ�   : %s\n", gameinfo1.friendgame->company);

	//typedef
	//�ڷ����� ���� ����
	// int i = 3�� ���� �츮�� �˰� �ִ� ǥ���ε�
	typedef int ����; //�� �ϸ� i���� �����̶�� ���ڷ� ����ȴ�
	typedef float �Ǽ�;
	���� ������ = 3; // int i = 3; �� �Ȱ��� ��
	�Ǽ� ������ = 3.23f; // float f = 3.23f �� ���� ��
	printf("�������� : %d\n �Ǽ����� %.2f\n\n", ������, ������);

	typedef struct gameinfo ��������;//���������� �������� ����
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 2020;

	GAME_INFO game2;
	game2.name = "�ѱ۰���2";
	game2.year = 2014;

	/*struct gameinformation game3;
	game3.name = "�ѱ۰���3";*/

	return 0;
}

