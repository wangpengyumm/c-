#include<stdio.h>
//int fun(int n)
//{
//	if(n==5)
//	{
//		return 2;
//	}else
//	{
//		return 2*fun(n+1);
//	}
// } 
// int main()
// {
// 	int ret=fun(2);
// 	printf("%d\n",ret);
// 	return 0;
// }

int sum(unsigned int n) 
{
	if(n>9)
	   return sum(n/10)+n%10;
	else
	return n;
}

int main()
{
	unsigned int n=0;    //非负整数的定义 
	printf("请输入一个数："); 
	scanf("%u",&n);
	int s=sum(n);
	printf("%d\n",s);
	
	return 0;
}












