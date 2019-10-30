1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
思路：两个数组分别为arr1&arr2,使用循环对两个数组中的值进行输入，定义一个中间变量用来临时存储数组，再使用for循环交换两个数组的每一个元素
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 7

int main() {
	int arr1[N], arr2[N];
	int i, temp;
	printf("请输入arr1的值");
	for (i = 0; i < N; ++i) {
		scanf("%d", &arr1[i]);
		}
	printf("请输入arr2的值");
	for (i = 0; i < N; ++i) {
		scanf("%d", &arr2[i]);
	}
	//对两个数组的值进行交换
	for (i = 0; i < N; ++i) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	//输出交换后两个数组的元素
	printf("交换后两个数组的元素\n");
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

2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
思路：建立一个flag在1和-1之间转换
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
3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
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
总结:其实细心观察不难发现0到9每个数字在1到100之间出现的次数都是20次
9 19 29 39 49 59 69 79 89 99 个位出现10次9
90 91 92 93 94 95 96 97 98 99 十位出现10次9
