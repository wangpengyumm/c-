#include<stdio.h>
int main()
{
	double a, b;
	a = 2;
	b = a + 3 / 2;    // 3/2是整数除法，结果为1,不管b是什么类型
	printf("%lf\n", b);

	return 0;
}