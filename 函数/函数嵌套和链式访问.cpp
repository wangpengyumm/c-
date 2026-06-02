#include<stdio.h>
#include<string.h>
void new_line()
{
	printf("hhhhh\n");
	
} 
void three_line()
{
	int i=0;
	for(i=0;i<3;i++)
	{
		new_line();
	}
}
//int main()
//{
//	three_line();
//	return 0;               //函数可以嵌套调用，但是不能嵌套定义 （把函数放到另一个函数里面不行） 
//}


void test(int n=1)
{
	while(n<3)
	{
		printf("hhhee\n");
		n++;
	}
	
	
} 

#define N 5
int main()
{
	int len = strlen("abcde");
	printf("%d\n",len);
	//链式访问
	printf("%d\n",strlen("abcde"));
	
	
	printf("%d\n",printf("%d",printf("%d",124)));  //输出12431-->第一次是123，第二次输出3代表123有三位数，第三次输出1代表3是一位数 
	
    test();
//	test(10);  //不推荐这样写 
	return 0; 
	
	
} 

