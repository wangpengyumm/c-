#include<stdio.h>
int num(int n)
{
	int i=0;
	int count=0;
	for(i=0;i<32;i++)
	{
		if(((n >> i)) & 1 == 1)
		{
			count++;
		}
	}
	return count;
	
}
int main()
{
	int a=0;
	printf("想求谁的二进制1的个数：\n");
	scanf("%d",&a);
	printf("%d\n",num(a));
	return 0;
}
