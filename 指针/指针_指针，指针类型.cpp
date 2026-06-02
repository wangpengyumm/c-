#include<stdio.h>
//指针是内存中一个最小单元(一个字节)的编号，也就是地址; 平时口语中说的指针，通常指的指针变量，是用来存放内存地址的变量 
//指针变量是用来存放地址的，地址是唯一标示一块地址空间的
//指针大小在32位平台(x86)上是4个字节，在64位平台(x64)上是8个字节 
int main()
{
	char* pc = NULL;   //NUll在定义里是0的意思 
	short* ps = NULL;
	int* pi = NULL;
	double pd = NULL;
	float* c =NULL;
	//sizeof返回的类型是无符号整型  unsigned int 
	printf("%u\n",sizeof(pc));
	printf("%u\n",sizeof(ps));
	printf("%zu\n",sizeof(pi));
	printf("%zu\n",sizeof(pd));
	printf("%zu\n",sizeof(c));
	
	
	//虽然不同类型前缀指针大小都是4或8个字节，但前缀不是没有作用 
	int a=0x1223344; //44 33 22 11四个字节 (32位) 
//	char* b = &a;  地址a是以int* 提取的，用char*接收会有警告或报错，但是地址能够一样 ，解引用的时候会有问题 
    int *n = &a;
    printf("%p\n",n);
    char*b = (char*)&a; // 强转换类型不会报问题
    printf("%p\n",b);    //地址一样 
//   *b = 0;      在这也不会将新的数据据正常的写进a的地址，写进00 33 22 11 

//结论一： 这是因为指针类型决定了指针在被解引用的时候访问几个字节，int->4  char->1  shor->2  double->8  float->4  
   	
   	printf("%p\n",n+1);  //加了4个字节 
   	printf("%p\n",b+1);  //加了1个字节 
   	
//结论二： 指针类型决定了指针加一减一操作时跳过几个字节 (步长) 


    float* p = &a;  //float类型解引用访问4个字节，p+1也是跳过4个字节，那int*和float*是不是可以通用----不能 
	return 0; 
}
