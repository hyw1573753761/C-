#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
int main() {
	int num, i;
	for (num = 100; num <= 200; ++num) {
		for (i = 2; i <= num; ++i) {
			if (num%i == 0) {
				break;
			}
		}
		if (num == i){
			printf("%d\n", num); 
		}
	}
	system("pause");
	return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>

int leap(int year)
{
	int ret  = 0;;
	if (((year % 4 == 0)
		&& (year % 100 != 0))
		|| (year % 400 == 0))
	{
		return 1;
	}
	else
	{
	return - 1;
	}
}

int main()
{
	int Year = 0;
	for (Year = 1000; Year < 2001; ++Year) {
		int ret = leap(Year);/*将调用得到的函数值返回到ret中*/
		if (ret == 1)
		{
			printf("%d\t", Year);
		}
	}
	system("pause");
	return 0;
}