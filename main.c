//���������������ڴ��ж�����1�ĸ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 0;
	printf("������һ������");
	scanf("%d", &num);
	
	printf("������1�ĸ���=%d\n", CountBit2(num));
	system("pause");
	return 0;
}
int CountBit(int num) {
	int count = 0;//��������
	int i;
	for (i = 0; i < 32; ++i) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}
//�Ż�
int CountBit2(int num) {
	int count = 0;
	while (num) {
		++count;
		num = num & (num - 1);
	}
	return count;
}
