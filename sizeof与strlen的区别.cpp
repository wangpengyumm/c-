#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello bit";
	//[h e l l o _ b i t \0]--数组长度10 
	printf("%d %d\n",sizeof(str),strlen(str));
//sizeof是一个操作符用来计算变量（类型）所占内存空间的大小，不关注内存中存放的具体内容 
	
//strlen是一个库函数，是专门求字符串长度的，只能针对字符串，从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数

    char a[]={'a','b','c','s','d'}; 
//和上面str不同的是，a[]的末尾没有\0
//同时注意里面是单引号不是双引号，要是双引号就是所谓的字符串了和str一样有\0，并且只能有一个双引号  
    printf("%d %d\n",sizeof(a),strlen(a)); 
	return 0;
}
