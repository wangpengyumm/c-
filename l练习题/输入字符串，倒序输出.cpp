#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={0};
	printf("输入一串字符：");
//	scanf("%s",arr);      //scanf输入的时候遇见空格就结束接收，有缺陷
    gets(arr);
    int left=0;
    int right=strlen(arr)-1;
    
    while(left<right)
    {
    	char tmp=arr[left];
    	arr[left]=arr[right];
    	arr[right]=tmp;
    	
    	left++;
    	right--;
	}
    
	printf("%s\n",arr);
	 
	
	return 0;
}
