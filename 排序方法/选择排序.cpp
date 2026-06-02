#include<stdio.h>
void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len) 
{
    int i,j;

    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;
        for (j = i + 1; j < len; j++)     //走訪未排序的元素
            if (arr[j] < arr[min])    //找到目前最小值
                min = j;    //紀錄最小值
           swap(&arr[min], &arr[i]);    //做交換
    }
}
int main()
{
	int arr[]={2,5,4,8,1,3,2};
	int s=sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,s);
	for(int i=0;i<s;i++)
	{
		printf("%d ",arr[i]);
	} 
	 printf("\n");
	 return 0;
}
