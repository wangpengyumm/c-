#include<stdio.h>
//int a=0;
//int b=0;
//void test(int *x,int *y)
//{
//	*x=9;
//	*y=8;
//} 
// int main()
// {
 //	test(&a,&b);
// 	printf("a=%d b=%d\n",a,b);
// 	return 0;
// }
#define N 5
int main()
{
	
	double a[20]={1,2,3,4,5,6,7,8,9,10};
	double b[12+3]={1.3,23.4,2.4};
	
	int arr[N]={1,2,3};  //不完全初始化，剩余元素默认初始化为0 
	
	char arr1[10]={'a','b','c'};  //剩余元素为0 
	char arr2[10]="abc";            //输出结果和arr1一样但是arr2的abc是一个元素剩下的9个都是0
	printf("%s\n%s\n",arr1,arr2);
	
	
//	[]--下标引用操作符，从零开始
    printf("%.3lf",b[0]) ;
	
//计算数组长度sizeof 
    int s=sizeof(a)/sizeof(a[0]);
    printf("\n%d",s);
    
    printf("\n%p\n",&a[1]);  //输出地址----& 
    
    
////////////////二维数组////////////////
    int c[3][4]={{3,6},8,1,1,1,1,2};           //{}可框定一行的元素，不足列数补0  
    int c1[][4]={{1,2},{2,3},{5,6}};          //二维数组初始化，行可以省，列不可以 
	char d[3][4];
	double e[3][3];
	for(int i=0;i<3;i++)
	{		
	    for(int j=0;j<4;j++)
	{
		printf("%d ",c[i][j]);
	}
	printf("\n") ;
	}
	
   
        
    
    
    
    
    
	return 0;

}
