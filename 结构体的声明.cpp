#include<stdio.h>
struct student
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];  
} p; 
struct teacher
{
	struct student p;      //结构的成员可以是标量，数组，指针，甚至是其他结构体 
	float f;
	double c;
} ; 
int main()
{
	struct student p={"wang yu",20,"man","1234567"};
	 
	struct teacher q={{"meng meng",21,"weman","987654"},3.14f,6.666};
	
	printf("%s %d %s %s %.2f %.3   lf\n",q.p.name, q.p.age, q.p.sex, q.p.tele, q.f, q.c);
	return 0;
}
