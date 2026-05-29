#include<stdio.h>
int main(){
	int ID,math,chinese,english,total;
	float average;
	
	while(1){
		
		printf("请输入学号；");
	    scanf("%d",&ID);
	    printf("请输入成绩；数学、语文、英语");
	    scanf("%d %d %d",&math,&chinese,&english);
	    total = math + chinese + english;
	    average = total / 3.0;
		if(total > 270){
			if(math >95 && chinese >95 ){
				if(english >= 70){
					printf("学号；%d\n",ID);
					printf("平均成绩；%.2f",average);
					printf("三门成绩分别为；%d %d %d",math,chinese,english);
					break;
				}
			}
		}
		else{
		printf("不满足条件，请重新输入学号");
		continue;
		} 
	}
	return 0;
}
