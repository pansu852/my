#include <stdio.h>

//����
void p(int num);

void function_without_return();

int function_return();

void shin(int num1, int num2, int num3);

int apple(int total, int ate); //��ü total ������ ate���� �԰� ���� ��

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_finish(void)
{
	//����

	//int num = 2;
	//printf("num �� %d �Դϴ�\n", num);
	//p(num);

	// 2 + 3��?
	//num = num + 3;
	//printf("num �� %d �Դϴ�\n", num);
	//p(num);
	// 5 - 1��?
	//num -= 1; // num = num - 1
	//printf("num �� %d �Դϴ�\n", num);
	//p(num);
	// 4 x 3 ��?
	//num *= 3;
	//printf("num �� %d�Դϴ�\n", num);
	//p(num);
	// 12 / 6 ��?
	//num /= 6;
	//printf("num �� %d �Դϴ�\n", num);
	//p(num);

	//��ȯ���� ���� �Լ�(void) / return 0;

	void function_without_return();

	//��ȯ���� �ִ� �Լ��� ������ �ް�ʹٸ� int �Ǽ��� float,double
	//���ڴ� char�� ��ȯ ������ �ȴ�
	//printf���� ����̵ǰ� ��ȯ�Ǵ� ��Ҵ� return �ڿ� return 10;
	//return ����;, return 10.5; �̷� ��
	int ret = function_return();
	p(ret);

	//���ް��� ���� �Լ� 
	//fucntion_without();

	//���ް��� �ִ� �Լ�
	shin(35, 27, 15);

	//�Ķ����(���ް�)�� �ް� ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); //��� 5���߿� 2���� ������?
	printf("��� 5���߿� 2���� ������? %d�� ���ƿ�");
	printf("��� %d �� �߿� %d���� ������? %d���� ���ƿ�\n", 10, 4, apple(10, 4));

	//���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
	return 0;

}
	

	//���ް�, ��ȯ���� ���� �Լ�
	//p();
	/*shin(42.51, 17, 5);
	int ret = params();
	printf("���ڴ� %d�Դϴ�", ret);

	return 0;
}


/*void p()

{
	printf("p�� ���ھ�\n"); 
}*/

//����
void p(int num) // �Ұ�ȣ ���� ���ް�
{
	printf("num�� %d �Դϴ�\n", num);
}

// ���ް� : 36
// �Լ� : �� + 4
// ��ȯ�� : ?
//int �Լ��̸�(num) //(int num1, int num2, char c) �� �������� ���ް��� ���� �� ���� ���� ���ʿ� ������ �ؾ���
//�Լ��̸� ���� ��ȯ��(������ int ���ڸ� char~~~)
//{
//	return num + 4;
//}
void function_without_return()
	{
		printf("��ȯ���� ���� �Լ�");
	}

int function_return()
{
	printf("��ȯ���� �ִ� �Լ�");
	return 10;
}

void shin(int num1, int num2, int num3)// -> ���ް�
{
	printf("���ް��� �ִ��Լ� %d %d %d\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}