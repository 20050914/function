#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//用函数求一个数的n次方
int cf(int a, int n)
{
	if (n == 0)
		return 1;
	else
		return a * cf(a,n - 1);
}
int main()
{
	int a, n;
	scanf("%d%d", &a, &n);
	int sum = cf(a, n);
	printf("%d", sum);
	return 0;
}