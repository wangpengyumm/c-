//打印1000--2000年之间的闰年
#include<stdio.h>

//是闰年返回1，不是返回0 
int is_leap_year(int x)
{
	if((x%4 == 0) && (x%100 != 0) || (x%400 ==0))
	
		return 1;
	else 
	
		return 0; 
}


int main()
{
	
	for(int year=1000;year<=2000;year++)
	{
		if(is_leap_year(year))
		{
			printf("%d ",year);
		}
	}
	
	
	
//  int year=0;
//	for(year=1000;year<=2000;year++)
//	{
		//判断闰年
//		if(year%4 == 0 && year%100 != 0) 
//		{
//			printf("%d ",year);
//		}
//		if(year%400 ==0)
//		{
//			printf("%d ",year);
//		}
		
//	}

	return 0;
} 
