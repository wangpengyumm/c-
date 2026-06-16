#include<stdio.h>

void reverse(int arr[],int s);
 
int main()
{
	int a[]={1,3,5,7,9}; //数组长度相同，不同的还不会 
	int b[]={2,4,6,8,10};
	int s=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<s;i++)
	{
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
    for(int i=0;i<s;i++)
	{
		printf("%d ",a[i]);
	
	}
	printf("\n");
	for(int i=0;i<s;i++)
	{
		printf("%d ",b[i]);
	}
	
	
	//逆序输出
	reverse(b,s);
	printf("\n");
	for(int i=0;i<s;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
void reverse(int arr[],int s)
{
	int left = 0;
	int right = s-1;
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		
		left++;
		right--; 
	}
}

