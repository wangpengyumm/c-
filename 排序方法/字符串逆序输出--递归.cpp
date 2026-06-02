#include<stdio.h>
#include<string.h> 
int s_strlen(char *str)
{
	int count=0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


void revers(char* str)
{
	char tmp = *str;  //取出首位
	int len=strlen(str);
	
	*str=*(str+len-1); //将最后一位放到新的第一位 
	
	*(str+len-1)='\0';  //将新的最后一位变成\0 
	
	if(strlen(str+1)>=2)
	    revers(str+1);
	
	*(str+len-1)=tmp;
	
	
}


int main()
{
	char arr[]="abcdef";
	revers(arr);
	printf("%s\n",arr);
	
	return 0;
 } 
