//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
//
//5.�������������Լ����
#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
//
//int main1() {
//	int a = 10;
//	int b = 20;
//	//2. ����������ʱ���������������������ݣ������⣩
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//��򣺶���������ͬΪ1������Ϊ0��
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//Swap(&a, &b);
//
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//3.��10 �����������ֵ��
//int main() {
//	int arr[] = { 10, 3, 4, 89, -9, 8, 1, 3, 9, 0 };
//	int max = 0;
//	for (int i = 0; i < 10; ++i) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
//4.�����������Ӵ�С�����
int main(){
	int a = 15;
	int b = 2;
	int c = 3;
	if (b > a) {
		Swap(&a, &b);
	}
	if (c > a) {
		Swap(&a, &c);
	}
	if (c > b) {
		Swap(&b, &c);

	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}