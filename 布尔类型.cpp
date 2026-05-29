#include<stdbool.h>
#include<stdio.h>
#include<math.h> 
bool is_prime(int n)
{
	int j=0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int i=0;
	for(i=100;i<=200;i++)
	{
		if(is_prime(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}
