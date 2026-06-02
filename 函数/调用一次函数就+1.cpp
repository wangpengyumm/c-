#include<stdio.h>
void add(int *p)
{
	(*p)++;
}
int main()
{
	int num=0;
	add(&num);
	printf("%d ",num);
	add(&num);
	printf("%d ",num);
	add(&num);
	printf("%d ",num);
	return 0;
}
