#include<stdio.h>
#include<assert.h>

int s_strlen(const char*str)
{
	int count =0;
	assert(str);
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
 } 
 
 int main()
 {
 	char arr[]="hello mm";
 	int len = s_strlen(arr);
 	printf("%d\n",len);
 	return 0;
 }
