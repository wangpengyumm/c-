#include<stdio.h>

int pow(int n,int k)
{
	if(k>0)
	   return n*pow(n,k-1);
	else if(k==0)
	   return 1;
	else
	   return 1.0/pow(n,-k);
 } 






int main()
{
	int n=0;
	int k=0;
	scanf("%d %d",&n,&k);
	double ret =pow(n,k);
	
	printf("%.2lf\n",ret);
	
	return 0; 
}
