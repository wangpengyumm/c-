#include<stdio.h>
void test1(int arr[]);
void test2(char ch[]);
//数组名确实能表示首元素的地址，但有两个例外
//1、sizeof(数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位字节
//2、&数组名，这里的数组名表示整个数组，取出的是 整个数组的地址 
int main()
{
	int arr[10];
	printf("%p\n",&arr);        //是整个元素的地址 
	printf("%p\n",arr);        //数组名 ,就是首元素的地址 
	printf("%p\n",&arr[0]);    //数组首元素的地址 
	printf("%p\n",&arr[1]); 
	printf("------------------------\n") ;
	printf("%p\n",&arr+1);      //此刻就已经不是原来的arr[10]了，是下一个数组了，地址加了 10*4的长度 
	printf("%p\n",&arr[0]+1);   //长度加4 
	printf("%p\n",arr+1);       //长度加4 
	
	int n=sizeof(arr[0]);     //计算的是一个整型的长度--4字节 
	int s=sizeof(arr);        //计算的是整个数组（10个整型）的长度--40字节 
	
	printf("%d %d\n",n,s);
	
	//二维数组和一维数组一样但sizeof计算有不同
	
	int aee[3][4]={0};
	int a= sizeof(aee)/sizeof(aee[0]);   //计算行数 
	int b= sizeof(aee[0])/sizeof(aee[0][0]); //计算列数 
	printf("%d  %d\n",a,b); 
	
	printf("------------------------\n") ;
    //注意在函数中传数组参时，是以指针形式接收，并且接收的是数组首元素的地址 
	 
	int au[10]={0}; 
	char c[10]={0};
	printf("%d\n",sizeof(au));
	printf("%d\n",sizeof(c));	
	
	test1(au);
	test2(c);    //这是以指针形式接收的大小都为4或8 
	
	
//有时会将逗号表达式加入数组
    int p[9]={1,2,3,(5,6),8};  //(5,6)是逗号表达式，所以p[3]=6不是(5,6) 
	printf("%d\n",sizeof(p)); 
	
//数组也是有类型的取决于前面的定义int[n] ,char[n] 
    printf("%d\n",sizeof(int [9]));
	 
	return 0;
}


void test1(int arr[])     //虽然看着形参是数组，但其实是指针 
{
	printf("%d\n",sizeof(arr));  
 } 
 
void test2(char ch[])
{
	printf("%d\n",sizeof(ch));
}


