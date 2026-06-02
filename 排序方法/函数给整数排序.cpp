#include<stdio.h>
void swap(int *x,int *y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
int main()
{
	int a,b,c;
	printf("输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		swap(&a,&b);
	}
	if(a<c)
	
	{
		swap(&a,&c);
	}
	if(b<c)
	{
		swap(&b,&c);
	}
	printf("排序后的数：%d %d %d",a,b,c);
	return 0;
 } 
