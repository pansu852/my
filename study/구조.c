#include <stdio.h>
#include <string.h> //strcpy �Լ��� ����� �������

struct person { // ����ü ����
	char name[20];
	int age;
	char address[100];
}person; // ���������� ���Ǽ��� ���� �ٷ� �� �����ִ�

typedef struct { // ����ü �̸��� ���� �͸� ����ü
	char name[20];
	int age;
	char address[100];
}person;

int main_awtawtwe(void)
{
	/*struct person p1; //���Ǽ��� ���� �Լ������� ��������

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "�����");
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);*/

	person p1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����");
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);

	//N�� ������ �Է¹ް� X�� �������� ������ ���
	/*int N, X, input;

	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &input);
	}
		if (X > input)
			printf("%d ", input);*/
	
	person p1;
	strcpy(p1.name, "������");
	p1.age = 30;
	strcpy(p1.address, "����");
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address)

	return 0;
}


#include <stdio.h>
//����ü ���´� �䷸�� 3���� ����� �ֱ���
typedef struct {
	int speed;
	char fuel;
	float mileage;
	int engineTemp;
	int rpm;
}Dashboard;

int main_rmpatrt(void)
{
	//���ڿ�(�迭) ����� strcpy�� �����ؾ���
	Dashboard d1;

	d1.speed = 80;
	d1.fuel = 'F';
	d1.mileage = 5821.442871f;
	d1.engineTemp = 200;
	d1.rpm = 1830;

	printf("Speed: %dkm/h\n", d1.speed);
	printf("Fuel: %c\n", d1.fuel);
	printf("Mileage: %fkm\n", d1.mileage);
	printf("Engine temp: %d��\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);
	return 0;

}