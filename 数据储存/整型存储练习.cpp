#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;

	printf("a=%d,b=%d,c=%d\n", a, b, c);

	//char只有一个字节也就是8个比特位所以它的范围是-128（10000000）~127（01111111），unsigned char类型的范围是0~255（11111111）
	//short有两个字节也就是16个比特位所以它的范围是-32768（10000000 00000000）~32767（01111111 11111111），unsigned short类型的范围是0~65535（11111111 11111111） 
	return 0;
}