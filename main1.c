1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
˼·����������ֱ�Ϊarr1&arr2,ʹ��ѭ�������������е�ֵ�������룬����һ���м����������ʱ�洢���飬��ʹ��forѭ���������������ÿһ��Ԫ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 7

int main() {
	int arr1[N], arr2[N];
	int i, temp;
	printf("������arr1��ֵ");
	for (i = 0; i < N; ++i) {
		scanf("%d", &arr1[i]);
		}
	printf("������arr2��ֵ");
	for (i = 0; i < N; ++i) {
		scanf("%d", &arr2[i]);
	}
	//�����������ֵ���н���
	for (i = 0; i < N; ++i) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	//������������������Ԫ��
	printf("���������������Ԫ��\n");
	for (i = 0; i < N; ++i) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < N; ++i) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
˼·������һ��flag��1��-1֮��ת��
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, f = -1;
	double n = 0.0, t = 0.0;
	for (i = 1; i <= 100; ++i) {
		f *= -1;
		t += f * (1 / i);
		n = t;
	}
	printf("%f\n", t);
	system("pause");
	return 0;
}
3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
int main() {
	int count = 0;
	int i;
	for (i = 1; i < 101; ++i) {
		if (i % 10 == 9)
			++count;
		if (i / 10 == 9)
			++count;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
�ܽ�:��ʵϸ�Ĺ۲첻�ѷ���0��9ÿ��������1��100֮����ֵĴ�������20��
9 19 29 39 49 59 69 79 89 99 ��λ����10��9
90 91 92 93 94 95 96 97 98 99 ʮλ����10��9
