#include<stdio.h>
int main(){
	int day = 10; //从第十天开始
	int p=1;  //第十天早上的数量
	
	while(day>1){
		//根据前一天桃子数量=（当天桃子数量+1）*2
		p = (p+1)*2;
		day--;
	}
	printf("猴子第一天共摘了%d个桃子\n",p);
	return 0;
}
