#include<stdio.h>
int main()
{
	int a=0;
	int *p = &a; //p是一个指针变量，以一级指针变量 ,此处*告诉p是指针，int告诉p指向的类型是int类型 
	int**qp = &p; //qp是一个二级指针，此时的第二个*说明qp是指针，int* 说明qp指向的类型是int*类型  
	**qp=30;
	printf("a=%d\n",a); 
	
	
	
//指针数组  - 存放指针的数组就是指针数组
    int b=10;
	int c=20;
	int d=30;
	
	int *p1=&b;
	int *p2=&c;
	int *p3=&d;
	
	int* parr[10]={&b,&c,&d};  //parr就是存放指针的数组
	for(int i=0;i<3;i++)
	{
		printf("%d ",*(parr[i]));
    } 
	 printf("\n");
	 
//二维数组	 
    int c1[3][4]={1,1,1,1,2,2,2,2,3,3,3,3}; 
	 
	for(int i=0;i<3;i++)
	{		
	    for(int j=0;j<4;j++)
	{
     	printf("%d ",c1[i][j]);
	}
	   printf("\n") ;
	}
	printf("\n") ;
	
	int arr1[4]={1,1,1,1};
	int arr2[4]={2,2,2,2};
	int arr3[4]={3,3,3,3};

	int *paee[3]={arr1,arr2,arr3};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",paee[i][j]);
		}
		printf("\n") ;
	}
	return 0; 
}
