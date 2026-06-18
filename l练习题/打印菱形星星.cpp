#include<stdio.h>
int main()
{
	int line =0;
	printf("请输入行数:");
	scanf("%d",&line);
	//上半部分，包含最长的一行
	int i=0;
	for(i=0;i<line;i++)
	{
		//打印一行空格
		int j=0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
			
		 } 
		 //打印*
		 for(j=0;j<2*i+1;j++)
		 {
		 	printf("*");
		 	
		  } 
		  printf("\n");
	 } 
	 //下半部分
	 for(i =0;i<line-1;i++)
	 {
	 	int j=0;
	 	for(j=0;j<=i;j++)
	 	{
	 		printf(" ");
		 }
		 
		 for(j=0;j< 2*(line-1-i)-1;j++)
		 {
		 	printf("*");
		 }
	    printf("\n");
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 return 0;
}
