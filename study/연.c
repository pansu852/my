#include <stdio.h>
struct Person {    // ����ü ����
    char name[20];        // ����ü ��� 1
    int age;              // ����ü ��� 2
    char address[100];    // ����ü ��� 3
};
int main_practice(void)
{

    /*struct Person * p1 = malloc(sizeof(struct Person));    // ����ü ������ ����, �޸� �Ҵ�

       // ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� �Ҵ�
     strcpy(p1->name, "ȫ�浿");
     p1->age = 30;
     strcpy(p1->address, "����� ��걸 �ѳ���");

     // ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� ���
     printf("�̸�: %s\n", p1->name);       // ȫ�浿
     printf("����: %d\n", p1->age);        // 30
     printf("�ּ�: %s\n", p1->address); */   // ����� ��걸 �ѳ���
	
     /*
     char string1[6] = {'H', 'e', 'l', 'l', 'o' '\0'};
     char string2[6] = "world";
     char string3[10];

     printf("�̸��� �Է��ϼ���: ");
     scanf("%s", &string3);

     printf("%s\n", string1);
     printf("%s\n", string2);
     printf("%s %s %s�� �ȳ��ϼ��� \n", string1, string2, string3);*/
    
    //ǥ���� : 2�����迭
    // char name[3][2];
    
    /*int num1;
replay:
    scanf_s("%d", &num1);

    if (num1 != 0) {
        printf("%d\n", num1);
    }goto replay;*/
    /*sizeof(int);
     int num1;
    sizeof(num1);
     sizeof num1;*/

    /*int num1 = 5;
    int num2;
 //num2�� ��/������ �Ǵ��� ����
 //100�� ���϶� ����Ұ�
 //200�� �����϶� ����Ұ�
    num2 = num1 ? 100 : 200;    // num1�� ���̸� num2�� 100�� �Ҵ�, �����̸� num2�� 200�� �Ҵ�
 
    printf("%d\n", num2);*/    // 100: num1�� 5�̹Ƿ� ��. num2���� 100�� �Ҵ��
    // �Լ� �ȿ��� ���� ������ ���
    //printf("%s\n", num1 == 10 ? "10�Դϴ�." : "10�� �ƴմϴ�.");

	/*unsigned char num1 = 32;
	num1 = num1 >> 4 << 1;
		printf("%u\n", num1);*/

		//printf�ۿ��� ������ =���� �Ҵ��� �������
		/*unsigned char num1 = 3;
		unsigned char num2 = 24;
		num1 <<= 3;
		num2 >>= 2;
		printf("%u\n", num1);
		printf("%u\n", num2);*/

		/*int num1;
		int num2 = 3;
		num1 = 10 + 2 / (5 - 3) * ++num2;
		// 2/(5 - 3) = 1
		// ++num2 = 4
		// 1 * 4
		// 10 + 4 = 14
		printf("%d\n", num1);*/

		// &&(AND)���ʸ�� ���϶� ��
		// ||(OR) ���� �� ���ʸ� ���̿��� ��
		// !(NOT) ���� ������ ������
		//bool b1;
		//b1 = (false || true);
		//printf("%d\n", b1);
		// a : 97, A : 65 0 : 48 
		// ������ ������ % ������
		// �������� / ������

		/*switch (num1)
		{
		case 1:    // 1 �Ǵ�
		case 2:    // 2�� �� �ڵ� ����
			printf("1 �Ǵ� 2�Դϴ�.\n");
			break;*/

			/*if (num1 == 1 || num1 == 2)
			printf("1 �Ǵ� 2�Դϴ�.\n");
			else if (num1 == 3 || num1 == 4)
			printf("3 �Ǵ� 4�Դϴ�.\n");*/

			/*char c1;
			scanf_s("%c", &c1);
			switch (c1)
			{
			case 'a':
				printf("a\n");
				break;
			case 'b':
				printf("a\n");
				break;
			default:
				printf("default\n");
				break;

			}*/
			//�ֱٹ��, ������ ��� ���� �ȿ����� ��� ����
			/*for (int i = 0; i < 100; i++)    // for �ݺ��� �ʱ�Ŀ��� ������ ����. C99 ���
			{
				printf("Hello, world!\n");
			}

			printf("%d\n", i); */   // ������ ����: i�� for �ݺ��� �ٱ����� ����� �� ����
			//�������
			/*int i;    // for �ݺ��� �ٱ��� ���� ����
			for (i = 0; i < 100; i++)
			{
				printf("Hello, world!\n");
			}

			printf("%d\n", i); */   // for �ݺ��� �� or �ٱ����� ����� �� ����

			/*int i;
			for (i = 0; i < 10; i++) //0���� 9���� 10���ݺ�
			{
				printf("Hello\n");
			}
			{
				printf("%d\n", i);
			}
			printf("%d\n", i);*/// �ݺ����� ������ i�ǰ��� 10�̴� �ֳ��ϸ�
			//i < 10 �̹Ƿ� 10�� ����, �� ���ǿ� ���� �����Ƿ� ������ Ż���ϰ� %d <- i�� �Էµȴ�
			//10�� �������� �������Ƿ� ���� ������ ��������

			//for �ݺ����� ���� �ΰ� ���
			/*for (int i = 0, j = 0; i < 10; i++, j += 2)
			{
				printf("i : %d, j : %d\n", i, j);
			}*/

			// i *= 2�Ӹ� �ƴ϶� �پ��� ������ ����� ����!!! 
			/*for (int i = 2, j = 5; i <= 32; i *= 2, j--)
			{
				printf("%d %d\n", i, j);
			}*/

			//j�� ������ �������� �ʴ� ���� : i�� ������ 5���� ���̱⶧���� i�� ������ ������ j�� ���굵 ���� ����
			// for (int i = 2, j = 5; i <= 32 || j >= 1; i *= 2, j--) �̷������� i�� j�� ���� �˻��Ҽ�������


			/*char i;
		scanf_s("%c", &i);
		{
			for (; i <= 'z'; i++) //�ʱⰪ���� scanf���� ���� ������ ����
				printf("%c", i);
		}*/

		//++�� --�� ���� ���� ++�� ���� �Է¹����� �ʱⰪ���� ������ �ö󰡾� ���� ���ϱ� ����⶧���� ������ 
		/*int count;

			scanf("%d", &count);    // ���� �Է¹���

			int i = 0;
			while (i < count)                      // i�� count���� ���� �� �ݺ�
			{
				printf("Hello, world! %d\n", i);   // Hello, world!�� i�� ���� �Բ� ���
				i++;                               // i�� 1�� ������Ŵ
			}*/

			// --�� �ؿ� �İ� ���� ������ �ڵ尡 ���� ���������� 0�̶�� �Ѱ����� �־ ���� 
			/*int count;

				scanf("%d", &count);    // ���� �Է¹���
				//
				while (count > 0)    // count�� 0���� Ŭ �� �ݺ�
				{
					printf("Hello, world! %d\n", count); //
					count--;         // count�� 1�� ���ҽ�Ŵ
				}*/

				/*unsigned char i = 1;
				while (i != 0) // i�� 0�� �ٸ��� ��� �����̹Ƿ� 0�̵Ǹ� ��� ����
				{
					printf("%u\n", i);
					i <<= 1; // i�� ��Ʈ�� 0000 0001���� �������� ��ĭ�� �̵�
				} */           // ��ĭ�� �и��ٰ� 0000 0000�� �Ǹ� ���� ����

				//1200���� �����ϴ� �Լ�
				/*int i;
				scanf_s("%d", &i); //10000���Է�
				while (i > 1200) // 400���̵Ǹ� 0���� ũ�Ƿ� -1200���� �ٽ� ���ҵ� �׷��Ƿ� �ּ� i > 1200�� �Ǿ�� ���� ���
				//���ҵ��� �ʱ⶧���� ���ǽ��� �̷��� ����
				{
					i -= 1200; // ���ʱݾ��� ������� �ʱ����� printf ���� ��ġ
					printf("%d\n", i);
				}*/
    
    return 0;
}