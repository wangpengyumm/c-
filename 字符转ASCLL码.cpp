#include<stdio.h>
int main() {
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	int s = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)计算的是数组的总大小，单位是字节
	//sizeof(arr[0])计算的是数组元素的大小


	//while (i < s) {
	//	printf("%c", arr[i]);
	//	i++;
	//}
	for ( i = 0; i < s; i++)
	{
		printf("%c", arr[i]);
	}
	
	return 0;


}