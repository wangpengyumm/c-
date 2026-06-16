#include<stdio.h>
int main()
{
	int n=0;
	printf("接收几个数？");
	scanf("%d",&n);
	int arr[n];
	//接收n个数
	printf("输入%d个整数：",n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]); 
	 } 
	 int del =0;
	 //接收删除的值
	 printf("想要删除谁？");
	 scanf("%d",&del);
	 int j=0;
	 //j作为下标锁定的位置用来存放不删除的数据
	 for(i=0;i<n;i++)
	 {
	 	if(arr[i] != del)
	 	{
	 		arr[j] = arr[i];
	 		j++;
		 }
	  } 
	  printf("删除后：");
	  for(i=0;i<j;i++)
	  {
	  	printf("%d ",arr[i]);
	  }
	  return 0;
}
