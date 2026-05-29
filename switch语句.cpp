#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	switch(n)
	{
		default:
			printf("hhh\n");
			break;          //default字句可以放在任意位置 
		case 1:
			printf("1\n"); 
			break;         //要是没有break会继续运行下一个语句  
		case 2:
			printf("2\n");
	                       // 最后一条语句可以不写break 
		
	}
}
//switch语句中case后的表达式只能是整型常量表达式，char--也属于整形家族，因为字符存储的时候存的是ASCLL码值 
