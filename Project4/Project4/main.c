#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
//{
//	srand(time(NULL));
//	int dice = rand() % 6 + 1;
//	printf("�ֻ��� �� : %d\n", dice);
//
//	double value = (double)rand() / (double)RAND_MAX;
//	printf("%17.15f", value);


// 1. ������ ��ȣ�� �Ǵ� ("���", "����", "0") �Է� �ȹް� ���
{	int num = -5;
	printf("%s\n", num > 0 ? "���" : num < 0 ? "����" : "0")
	/*int a = 3;
	printf("%s\n",a > 0 ? "���" : (a < 0 ? "����" : "0"));*/

	// 2. ������ ���� �������� 3�� ����̸鼭 5�� ������� �Ǵ�
	
	*printf("%s\n", num % 3 == 0 && num % 5 == 0 ? "3�� ��� �̸鼭 5�� ���" : "3�� ��� �̸鼭 5�� ����� �ƴ�" 0);

	// 3. ���� ������ �������� �ִ밪 ���

	int num1 = 10;
	int num2 = 30;
	int num3 = 20;

	int max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;

	printf("�ִ밪 : %d\n", max);

	// 4. �ΰ��� ������ ���̸� �׻� ����� ǥ��
	// ex) 10 30 >>> 20   // 30  10  >>> 20  �׻� �����̴� ����� ��������
	
	int result = num1 - num2;
	printf("%d\n", result < -? -result : result);

	// 5. �� ������ ���� ��ȯ
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	printf("num1 : %d, num2 : %d\n", num1, num2);


	// 4,5���� �Ҹ��� �������� �������� 1,3�� ��ư� 2���� ���������� 2���� 3�� ��� 5�� ��� �����غ��� .. 
	
	return 0;
}