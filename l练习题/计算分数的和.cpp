#include<stdio.h>
int main()
{
	int i=0;
	double sum;
	int A=1;
	for (i=1;i<=100;i++)
	{
		sum =sum+A*(1.0/i);         //要写成1.0除i是因为1除i输出的整型不会出现小数，比如1/2输出0不是0.5
		A=-A; 
	}
	printf("%lf\n",sum);
	return 0;
 } 
