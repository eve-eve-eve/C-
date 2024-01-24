#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//计算两个整数的和
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化
	scanf("%d %d", &num1, &num2);//输入
	int sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}