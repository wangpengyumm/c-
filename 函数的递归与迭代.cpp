#include<stdio.h>
 //计算数的阶乘 ---递归方法     递归就是函数自己调用自己
// int fc(int x)
// {
// 	if(x<=1)
// 	{
//		return 1;
//	}else
//	{
//		return x*fc(x-1);
//	 } 
	 
// }
 
 
//迭代（非递归）方法
//int fc(int x)
//{
//	int i=0;
//	int y=1;
//	for(i=1;i<=x;i++)
//	{
//		y*=i;
//	}
//	return y; 

//}
 
// int main()
// {
// 	int n=0;
// 	printf("想计算谁的阶乘？\n");
//	scanf("%d",&n);
// 	int sum=fc(n);
//	printf("为%d",sum);
//	return 0; 
// }


//计算斐波那契数值--递归方法 
//int Fib(int n)
//{
//	if(n<=2)
//	   return 1;
//	else
//	   return Fib(n-1)+Fib(n-2);
	
// } 

//迭代方法

int Fib(int n)
{
	int a=1;
	int b=1;
	int c=0;
	if(n<=2)
	  {
	  	return 1;
	  }else if(n>2)
	{
	  while(n>=3)
	  {
		c=a+b;
		a=b;
		b=a;
		n--;
	  }
	   return c;
	}

 } 
 
int main()
{
	int sum=0;
	int n=0;
	printf("想计算第几位的斐波那契数？");
	scanf("%d",&n);
	int d=Fib(n);
	printf("为%d\n",d);
	
	for(int i=1;i<=n;i++)
	{
		sum += Fib(i);
		
	 } 
	 printf("总和为：%d",sum);
	
	return 0;
}



























