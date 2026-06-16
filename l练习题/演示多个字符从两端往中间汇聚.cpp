#include<stdio.h> 
#include<windows.h>  //引入Sleep函数
//#include<stdlib.h>   //引入库函数system 
int main(){
	char arr1[]="mm like me , i like mm ";
	char arr2[]="#######################";
	
	int left = 0;
	int right = strlen(arr2) - 1; //strlen(arr2)是其长度，但下标是从0开始，要减掉1
	//或者ringht = sizeof(arr1)/sizeof(arr1[0])-2 前面是计算的元素个数包括了\0，同时也是从0开始，所以减掉2
	while(left<=right){
		arr2[left] = arr1[left]; //替换元素
		arr2[right] = arr1[right]; 
		printf("%s\n",arr2);
		Sleep(1000);  //1000毫秒---1秒
		
		//清空屏幕
		//stytem("cls");
		left++;
		right--;
		
 	} 
 	//printf("%s\n",arr2); 
 	return 0;
} 
