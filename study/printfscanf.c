#include <stdio.h>

int main_printfscanf(void)
{
	/*int age = 12; //���� 12�� age��� ���� �ִ´�
	printf("%d\n", age); //age�� ����� �ƴ� ����
	age = 13;
	printf("%d\n", age);// ������ age��� ������ ������ �����ص� ��, ó���� int�� ����ߴٸ� �� �������ʹ�
	//int���� ��� ����*/
	
	//�Ǽ��� float
	//float ����� f, double ����� lf
	/*float q = 46.5f; //float����Ҷ��� �׻� f 
	printf("% .1f\n", q);

	double w = 14.5; //double�� f�ȵ� but �Ǽ� ���� ���̿� �˾Ƽ� ���� ��ȯ(������ ���� ��ȯ)�� ���ֱ���
	printf("% .1lf\n", w);*/

	//float ���� double�� �� �����ϰ� �Ҽ��� ǥ���� �����ϴ�
	//float : 4bit�̰� double�� 8bit�� ũ�⸦ ������ �����̴�

	
	//����� const, %d�� ������ ��
	/*const int YEAR = 2000; //const�� ���Ծ��� �̶�� ������ ���� �տ� ���̸� ������ ������, ����x
	//YEAR = 3000;�� �ϸ� �����߻�
	printf("�¾���� : %d\n", YEAR);*/
	//������ �ʴ� ���� ����� ���� ��

	//printf 
	/*int add = 3 + 7; //	10
	//printf("3 + 7 = %d\n,", add);
	//printf("%d x %d = %d\n", 3, 7, add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);*/

	//scanf &ǥ�ô� ��ǲ�̶�� ������ ���ǵȰ��� ���� �Է¹ްڴ�
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("�ƹ��ų� �־�� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	//scanfȰ��
	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three); //�Է°�
	printf("ù��° �� : %d\n", one); //��°�
	printf("�ι�° �� : %d\n", two); //��°�
	printf("����° �� : %d\n", three); //��°�*/
	
	//����(�� ����)=%c�� ǥ��, ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/

	//���ڿ� ǥ�ô� %s, scanf_s���� ���ڿ��� �Է��Ҷ��� &ǥ�þ��� ��� ��� sizeof�� ũ�� ���
	//ũ���Էµ� ����� : sizeof = 256�̳��� ���ڿ��� �ްڴ�, 256�� ������ ���ڴ� �ƴ�
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);*/

	
	//������Ʈ
	// ������ ����
	// �̸�, ����, ������, Ű, ���˳���

	/*char name[12];
	printf("�̸��̹�����?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ���̿���?");
	scanf_s("%f", &weight); // ���� ���������ε� .2f�� �ϸ� ���� �߻�

	double height;
	printf("Ű�� �� cm����?");
	scanf_s("%lf", &height);

	char what[125];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));

	//�����������
	printf("\n\n----������ ����---\n\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %.2f\n", weight);
	printf("Ű : %.2lf\n", height);
	printf("���˱�� : %s\n", what);*/

	return 0;


}