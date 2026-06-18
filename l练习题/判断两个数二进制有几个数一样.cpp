#include<stdio.h>
//int num(int n,int m)
///{
//	int i=0;
//	int count=0;
//	for(i=0;i<32;i++)
//	{
//		if(((n >> i)) & 1 != ((m >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
// }

int num(int m,int n)
{
	int count=0;
	int ret=m^n;
	while(ret)   //统计ret中二进制有几个1 
	{
		ret= ret&(ret-1);
		count++;
	}
	return count;
}
int main()
{
	int m=0;
	int n=0;
	scanf("%d %d",&m,&n);
	int ret=num(m,n);
	printf("%d\n",ret);
	return 0;
}
