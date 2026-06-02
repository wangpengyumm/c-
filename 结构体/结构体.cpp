#include<stdio.h>
struct student
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];    //结构体类型 
	
}w ,w2;  //这里有 ; 不要忘记   在这可以定义变量一个或多个 

 //函数调用写法 
void print1(struct student* p)  
{
	printf("%s %d %s %s\n",(*p).name,(*p).age,(*p).sex,(*p).tele);
	//或者用 ->  
	printf("%s %d %s %s\n",p->name, p->age , p->sex , p->tele);
}

void print2(struct student w)     //传参方法，不能用->，用 . ;但是要是结构体过大，这种方法需要重新开辟大的空间，传参也需要长时间 
{
	printf("%s %d %s %s\n",w.name,w.age,w.sex,w.tele);
}
int main()
{
	struct student w={"wang yu",20,"man","1234567"};    //w是结构体变量 
	printf("%s %d %s %s\n",w.name,w.age,w.sex,w.tele);  //直接调用 ,不能用->,只有指针能用 
	
	print1(&w);
	print2(w);
	
	return 0;
}
