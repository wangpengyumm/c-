#include<stdio.h>
int main()
{
	const int a=20;   //指定a的值20不能修改 
	
	//但是在一些编译器里用指针可以实现翻窗户
	//int *p =&a;
	//*p = 10;
	//printf("%d\n",a); 
	
	
//const指定下面指针对应接受，否则会报错 
//const修饰指针变量
    //1.const放在*左边，意思是p指向的对象不能通过p来改变了 ，*p = 10写法就错了 ,但是p变量本身的值可以改变---但是不知道为什么输出p时是随机值 
	
	const int*p=&a;
	int num=100;
	p=&num;
	printf("%d\n",a); 
	
	
	//2.const放在*右边,意思是p指向的对象能通过p来改变了，p = &num写法就错了 ,p变量本身的值不可以改变
	int *const p1 =&num;
	*p1=0;
	 
	printf("%d\n",p1);
	//const int *const p  这样写就什么都不能改变了 
	return 0;
}
