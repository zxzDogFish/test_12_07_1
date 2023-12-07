#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		return  fib(n - 1) + fib(n - 2);
//	}
//}
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n, ret;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}
