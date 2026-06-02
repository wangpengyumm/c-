#include<stdio.h>

int* test()
{
	int x=10;
	return &x;
}
//野指针就是指针指向的位置时不可知的 
int main()
{
//	int *p;        //原因1；局部变量指针未初始化，默认为随机值 
//	*p=10;
//	printf("%d\n",p);



    int arr[6]={2,2,2,2,2,2};
    int* p=arr;    //&arr[0]
    for(int i=0;i<6;i++)  //原因2；当指针指向的范围超过数组arr的范围的时候，p就是野指针 
    
    {
    	*p = arr[i];
    	printf("%d\n",*p);
    	p++ ;
	}
	


    int* c=test();   //原因3：*c可以接收到x的地址，但是在函数调用完之后，&x地址会被销毁，即使*c保存了地址，但是访问不到原内容,是随机的 
	printf("%d\n",*c);
	
	
	int* p2=NULL;    //可以用NULL初始化指针 
//	*p2=188;          但是不能直接赋值，因为NULL不是有效的地址

 
	int a=1;
	int* n = &a;
	*n=100; 
	printf("%d\n",a);
	return 0; 
}


