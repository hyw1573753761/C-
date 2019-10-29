//计算整数储存在内存中二进制1的个数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 0;
	printf("请输入一个整数");
	scanf("%d", &num);
	
	printf("二进制1的个数=%d\n", CountBit2(num));
	system("pause");
	return 0;
}
int CountBit(int num) {
	int count = 0;//用来计数
	int i;
	for (i = 0; i < 32; ++i) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}
//优化
int CountBit2(int num) {
	int count = 0;
	while (num) {
		++count;
		num = num & (num - 1);
	}
	return count;
}
