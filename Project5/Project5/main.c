#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int x;
	scanf("%d", &x);

	/*if (x > 0)
		printf("positive1\n");
		printf("positive2\n");
		printf("positive3\n");
 printf("always!");*/

	/*if (x % 3 == 0)
	{
		printf("%d = %d + %d\n", x, 3, x / 3);
	}
	if (x % 5 == 0)
	{
		printf("%d = %d + %d\n", x, 5, x / 5);
	}
	if (x % 7 == 0)
	{
		printf("%d = %d + %d\n", x, 7, x / 7);
	}*/

	/*if (x > 0)
	{
		printf("���");
		if (x % 2 == 0)
		{
			printf("¦��");*/
	/*	}
	}*/

	//������ ���� + 31���� ���� ���, �߸��� �Է��̶�� ���
	int range = 0;
	if (x >= 1 && x <= 31) {
		range = 1;
	}
	x %= 7; // x = x % 7 ��ȯ
	if (range) {
		if (x == 0 /*�Ͽ���*/ || x == 6 /*�����*/) {
			printf("�ָ�"\n);
			if (x == 0) {
				printf("�Ͽ���");
			}
			if (x == 0) {
				printf("�����");
			}
		}
		//if (!(x == 0 /*�Ͽ���*/ || x == 6 /*�����*/)) {
		else {
			printf("����\n");
		}
			
	}
	if (!range) {
		printf("�߸��� �Է�\n");
	}
	

	/*d %= 7;
	if (d == 0 || d == 6)
	{
		printf("weekend\n");
		if (d == 0)
			printf("sunday\n");
		if (d == 6)
			printf("saturday\n");
	}
	if (1 <= d && d <= 5)
	{
		printf("weekday\n");*/

	}

	// else : �ܵ���� �Ұ�, �ݵ�� ���� if�� �����ؾ���

}
