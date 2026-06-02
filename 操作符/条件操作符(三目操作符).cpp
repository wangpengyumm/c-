#include<stdio.h>

// exp1 ? exp2 : esp3 
//表达式1为真，表达式2计算，表达式3就不算了，结果为表达式2的结果 
//表达式1为假，表达式2不计算，表达式3计算，结果为表达式3的结果 

//逗号表达式，从左往右依次执行，整个表达式的结果是最后一个表达式的结果 
int main()
{
	int a=3;
	int b=1;
	int d=(a<5) ? (b=4) : (b=-4);
	int c=(a>5) ? (b=4) : (b=-4);

	printf("%d  %d\n",d,c);
	
	int e=( b+10,1,b=a+9);
	printf("%d\n",e); 
	//在循环里可以用到逗号表达式
	while(b-1,b=a-3,c=1)
	{
		printf("再见！");
		break;
	} 

	
	return 0;
}
