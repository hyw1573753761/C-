//1. 给定两个整形变量的值，将两个值的内容进行交换。
//
//5.求两个数的最大公约数。
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
//	//2. 不允许创建临时变量，交换两个数的内容（附加题）
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//异或：二进制数相同为1，相异为0；
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//Swap(&a, &b);
//
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//3.求10 个整数中最大值。
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
//4.将三个数按从大到小输出。
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