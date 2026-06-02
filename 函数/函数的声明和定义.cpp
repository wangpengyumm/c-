#include<stdio.h>

//函数的声明
//#include "1.cpp"
int Add(int,int);
int main()
{
	int a=0;
	int b=0;
	printf("输入两位整数："); 
	scanf("%d %d",&a,&b);
	int num=Add(a,b);
	printf("%d\n",num);
	return 0;
 }
 
 //函数的定义
 int Add(int x,int y)
 {                               //函数的定义应在主函数的前面，但若要是前面进行了函数声明就不用必须在主函数前面 
 	
 	return x+y;                 //形参是实参的一份临时拷贝，形参是在函数调用的时候才实例化，才开辟内存空间 
  } 
