#include<stdio.h>
int main()
{
//////方法一 
//{
//	char ch = 0;
//	printf("输入字母："); 
//	while(scanf("%c",&ch) != EOF)
//	{
	
//		if(ch>='a' && ch<='z')
//		   printf("%c\n",ch-32);
//		else
//		   printf("%c\n",ch+32);
		   
//		getchar();
//	}
	
	
//////方法二 
	char ch=0;
	printf("输入字母：");
	while(scanf("%c",&ch)==1)  //scanf在成功读取的时候会返回读取的数据的个数，读取失败 的话会返回EOF 
	{
		if(ch>='a' && ch<='z')
		    printf("%c\n",ch-32);
		else if(ch>='A' && ch<='Z')
		    printf("%c\n",ch+32);
		    
	}


///////方法三
//#include<ctype.h>  c++的编译器可能不能用 

//    char ch =0;
//    printf("输入字母：");
//   while(scanf("%c",&ch) != EOF)
//	{
//		if(islower(ch))                 //判断是否为小写 
//		   printf("%c\n",toupper(ch));  //转换为大写 
//		else if(isupper(ch))            //判断是否为大写 
//		   printf("%c\n",tolower(ch));  //转换为小写 
//		   
//	 } 
 
	
	
	return 0;
}
