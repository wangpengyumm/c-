#include<stdio.h>
#include<string.h> 
int me(char* str)  //迭代函数 
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int me_strlen(char* str)  //指针减指针 
{
	char* start=str;
	while(*str != '\0')
	{
		str++;
	}
	return (str-start);
}

void test(int arr[],int s)
{
	int i=0;
	for(i=0;i<s;i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[10]={0};
	printf("%d\n",&arr[9]-&arr[0]);  //指针减去指针的绝对值得到的是指针和指针之间元素的个数
	                                 //不是所有的指针都能相减，指向同一块空间的2个指针才可以  
	
	int len = me_strlen("abcdef");
	printf("%d\n",len);
	
	
	int aee[6]={1,2,3,4,5,6};
	//arr 是首元素的地址  &arr[0]
	int * p = aee;  //通过指针来访问数组
	for(int i=0;i<6;i++)
	{
		printf("%d ",*(p+i));
	 } 
	
	
	printf("\n");
	test(aee,6);
	
	return 0;
}

