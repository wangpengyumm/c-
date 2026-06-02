#include<stdio.h>

//下标引用操作符[]，函数调用
int Add(int x,int y)
{
	return x+y;
}

int main()
{
	int arr[10]={0};
	
	arr[7]= 4;//还可以写成*(arr+7)，arr是数组首元素的地址，arr+7就是跳过7个元素，指向了第8个元素
	//那同样*(7+arr)也可以指向第8个元素，那就代表*(arr+7)-->*(7+arr)-->7[arr] 
	8[arr]=8;   //但一般不这样写，不好看，不易理解 
	printf("%d %d\n",arr[7],arr[8]);
	
	int aee[3][4]={0};
	
	aee[2][3]=6;//还可以写成*(aee[2]+3)或者*(*(aee+2)+3) 
	*(2[aee]+4)=3;
	*(*(aee+0)+3)=5;
	
	printf("%d %d %d\n",*(aee[2]+3),aee[2][4],aee[0][3]);


	//函数调用操作符--->() 
	
	int a=Add(aee[2][3],aee[0][3]);  //这里的()就是函数调用操作符，操作数:Add,aee[0][3],aee[2][3] 
	printf("%d\n",a); 
	return 0;
}
