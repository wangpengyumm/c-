#include<stdio.h>
#define N 5
int main()
{
	int arr[N]={4,4,4,4,4};
	int* p =arr;
	for(p = &arr[0]; p<&arr[5];  )
	{
		printf("%d ",*p);
		*p++;             //*p++是先*p再p++；  (*p)++是对*p指向的对象++ 
	}
	printf("\n");
	

    int* p2=arr;
	for(int i=0;i<N;i++) //将arr数组放进数据 
	{
		*p2=1;
		printf("%d ",*p2);   
		p2++;               //还可以写成*(p+i) = 1 
	}
	printf("\n");
	for(int i=0;i<N;i++)
	{
		*(p+i) = 1;
		printf("%d ",arr[i]); 
	}
	printf("\n");
	
	int *q;
	for(q = &arr[N-1]; q>=&arr[0];  ) 
	{
		*--q=9;
		printf("%d ",*q);
	
	}
	return 0; 
}
