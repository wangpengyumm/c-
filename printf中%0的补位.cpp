#include<stdio.h>
int main() {
	int year, month, date;
	printf("请输入你的生日(年 月 日）：");
	scanf("%4d %d %2d", &year, &month, &date);
	if (year>1990 && year<2020 && month>=1 && month<=12 && date>=1 && date<=31)
	{
		printf("year=%d\n", year);
		printf("month=%02d\n", month); //%02当变量只有一位时，在其前面补一个0 
		printf("date=%02d\n", date);
	}
	else
	{
		printf("输入错误，重新输入！");

	}
	return 0;
}
