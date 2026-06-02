#include<stdio.h>
int main()
{
	int aee[]={2,3,4,'a'};
	char arr[]="abcdef"; 
	int s=sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = s-2;    //有\0所以要多减去1 
	while(left<right)
	{
		char tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		
		left++;
		right--; 
	}
	
	printf("%s\n",arr);
	printf("%d\n",aee[3]);
	
	
	return 0;
 } 
