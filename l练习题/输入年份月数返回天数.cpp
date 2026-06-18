#include<stdio.h>
int juest(int x)
{
	return(((x%4==0)&&(x%100!=0))||(x%400==0));
}
int main()
{
	int year=0;
	int month=0;
	int day=0;
	int days[13]={0,31,28,31,30,31,30,31,31,20,31,30,31};
	printf("输入年数和月数:");
	while(scanf("%d%d",&year,&month)==2)
	{
		int d=days[month];
		if((juest(year) == 1) && (month==2))
		{
			d++;
		}
		printf("%d\n",d);
	}
	
	 
	return 0;
}
