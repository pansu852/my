#include <stdio.h>

void swap(int a, int b);

void swap_array(int * a, int * b);

void changeArray(int* ptr);

int  main_pointer(void) 
{ //������ : ������ �ּ�(�޸��ּ�)�� �����ϴ� ����

	//[����] : 101ȣ --�޸� ������ �ּ�
	//[��ȣ] : 201ȣ
	//[����] : 301ȣ
	// �� �� �տ� ��ȣ�� �ɷ�����
	/*int ���� = 1; //��ȣ
	int ��ȣ = 2;
	int ���� = 3;
	
	printf("�����̳� �ּ� : %d, ��ȣ %d\n", &����, ����);
	printf("��ȣ�� �ּ� : %d, ��ȣ %d\n", &��ȣ, ��ȣ);
	printf("�����̳� �ּ� : %d, ��ȣ %d\n", &����, ����);

	//�̼Ǹ��� ����Ʈ ���� ���� ��ȣ Ȯ��
	int *�̼Ǹ�;
	�̼Ǹ� = &����;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	
	�̼Ǹ� = &��ȣ;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	
	�̼Ǹ� = &����;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�ι�° �̼� : �� ��ȣ�� 3�� ���ض�
	�̼Ǹ� = &����;
	*�̼Ǹ� = *�̼Ǹ� * 3;
		printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

		�̼Ǹ� = &��ȣ;
		*�̼Ǹ� = *�̼Ǹ� * 3;
		printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

		�̼Ǹ� = &����;
		*�̼Ǹ� = *�̼Ǹ� * 3;
		printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

		//������
		//�̼Ǹ��� �ٲ� ��ȣ���� 2�� ����
		int *������ = �̼Ǹ�;
		������ = &����;
		*������ = *������ - 2;
			printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

			������ = &��ȣ;
			*������ = *������ - 2;
			printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

			������ = &����;
			*������ = *������ - 2;
			printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

			int *ö��;
			printf("�̼Ǹ� �ּ� : %d\n", &ö��);
			printf("������ �ּ� : %d\n", &������);
			*/

	//ptr�� arr�� ���� �ּҸ� �޴� ����
	/*int arr[3] = { 5, 10, 15 };
	int * ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("������ptr[%d]�� �� : %d\n", i, ptr[i]);
	}
	// *ptr�� arr�� ���� �ּ��̹Ƿ� arr[0] or ptr[1] ���� �����ϰ� ����
	arr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i)); //arr��ü�� arr�� �迭�� ����ó���� �ش��ϴ� �ּҰ��� ������ �ִµ�, +i�� �������ν�
	}                                                      // i��°�� �ش��ϴ� ���� ������
	for (int i = 0; i < 3; i++)
	{
		printf("������ptr[%d]�� �� : %d\n", i, *(ptr + i));
	}
	// arr[i] == *(arr + i) ���� ǥ��
	// arr == arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
	printf("arr ��ü�� �� : %d\n", arr); //arr ù��° ���� �ּ�
	printf("arr[0] �� �ּ� : %d\n", &arr[0]); //0�� arr ù��°

	printf("arr ��ü�� ���� ������ �����ּ� : %d\n", *arr);
	printf("arr[0]�� ���� �� : %d\n", *&arr[0]);

	//*&�� �ƹ��͵� ���� �Ͱ� ���� &�� �ּ��̸� * �� �� �ּ��� ���̱� ������
	// *&�� ���� ���ȴ�
	printf("arr[0]�� ���� �� : %d\n", *&*&*&*&*&*&*&arr[0]);
	printf("arr[0]�� ���� �� : %d\n", arr[0]);*/

	//SWAP
	/* int a = 10;
	int b = 20;
	printf("a�� �ּ� : %d\n", &a);
	printf("b�� �ּ� : %d\n", &b);
	// a�� b�� ���� �ٲ۴�
	printf("swap �Լ� �� => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("swap �Լ� �� => a : %d, b : %d\n", a, b);
 
	// ���� ���� ����(Call by value) -> ���� �����Ѵٴ� �ǹ�
	//�ּҰ� ��ü�� �ѱ�ٸ�?

	printf("(�ּҰ�����)swap �Լ� �� => a : %d, b : %d\n", a, b);
	swap_array(&a, &b);  //�ּҰ��� �����ؾ� �ϹǷ� &ǥ��!!
	printf("(�ּҰ�����)swap �Լ� �� => a : %d, b : %d\n", a, b);*/

//�迭�� ��, arr2 -> �ּ�, �迭�� ������
int arr2[3] = { 10, 20, 30 };
//changeArray(arr2); // arr2�� �ּҸ� ������
changeArray(&arr2[0]); // &arr2[0]�� arr�ּ��� 0�迭���� �����ϴ� �ּҸ� �������� �� 10,20,30�� �ּҸ� �� ������
//��������� �� �� ��� �ð���
for (int i = 0; i < 3; i++)
{
	printf("%d\n", arr2[i]);
}




	return 0;
}
//���� ����
void swap(int a, int b)
{
	printf("(SWAP �Լ� ��) a�� �ּ� : %d\n", &a);
	printf("(SWAP �Լ� ��)b�� �ּ� : %d\n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("swap �Լ� �� => a : %d, b : %d\n", a, b);
}
//�ּҰ� ����
void swap_array(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(�ּҰ�����) swap �Լ� �� => a : %d, b : %d\n", *a, *b);
}
//�迭�� �����Ͱ� �ٲٱ�
void changeArray(int* ptr)
{
	ptr[2] = 50;
}