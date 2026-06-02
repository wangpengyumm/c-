#include<stdio.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
	double score;
} ;

void set_stu(struct stu *p)
{
	strcpy ((*p).name,"wangpeng");
	(*p).age = 20;
	(*p).score=100.00;  //或者p->score=100.0;  结构体指针->成员 
}

void print_stu(struct stu x)
{
	printf("%s %d %lf\n",x.name,x.age,x.score);  //结构体对象.成员 
}
int main()
{
	struct stu s={0};
	set_stu(&s);
	
	print_stu(s);
	return 0;
}
