#include<stdio.h>
int main()
{
	int n=0;
	printf("输出第几行？");
	while(scanf("%d",&n) != EOF)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i == j)
				   printf("*");
				else if(i + j == n-1)
				    printf("*");
				else
				    printf(" ");
			}
			printf("\n");
		}
	}
	
	return 0;
}
