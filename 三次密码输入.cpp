#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	char password[20]={0};  //建立空数组储存密码
	for(i=0;i<3;i++)
	{
		printf("请输入密码：");
		scanf("%s",password);  //数组本来就是地址，不用&
		if(strcmp(password,"abcdef")==0)  //比较两个字符串是否相等，不能用== ，用库函数strcmp,返回值为0就相等 
		{
			printf("登录成功！");
			break;
		}else{
			printf("输入错误！"); 
		}
	} 
	if(i==3)
	{
		printf("三次密码输入错误，退出程序\n");
	}
	return 0;
} 
