#include<stdio.h>
int main(void)
{
	int n;
	long sum = 0;
	long p = 1;
	scanf("%d",&n);
	for(int i=1;i<=n; i++)
	{
		p = 1;
		for (int j=1; j<=i;j++)
		{
			p = p*j;
		}
		sum = sum + p;
	}
	printf("sum=%1d\n",sum);   //以长整型格式输出n的阶乘值 
	return 0;
}
