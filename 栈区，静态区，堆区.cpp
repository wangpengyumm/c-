#include<stdio.h>
//全局变量，静态变量都是放在静态区的，在不给它初始化的时候默认为0
//局部变量是放在栈区，不初始化的时候是随机值 


//栈区--局部变量，形式参数，返回值
//堆区--动态内存分配，malloc,free,calloc,realloc
//静态区-- 全局变量，静态变量
int i;//0

int main()
{
	i--;//-1
	//sizeof操作符计算返回结果是size_t类型的，是无符号整型 的
	//-1在这里要变成unsign类型会以它的原码为准，是很大的正整数，会大于4 
	if(i>sizeof(i))
	{
		printf(">\n");
	}else
	{
		printf("<\n");
	}
	
	return 0;
	
 } 
