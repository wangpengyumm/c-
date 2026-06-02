#include<stdio.h>

//冒泡排序：两个相邻的元素进行比较 ，一趟排序让一个数据来到他最终应该出现的位置 

void bubble(int aee[],int s)   //形参是数组的形式 ,也可以是指针形 *aee 
{
	
	for(int i=0;i<s-1;i++)
	{
		for(int j=0;j<s-1-i;j++)
		{
			if(aee[j]>aee[j+1])
			{
				//交换
				int tep=aee[j];
				aee[j]=aee[j+1];
				aee[j+1]=tep;
			}
		}
	}
	 
}

int main()
{
	//把数组的数据排成升序
	int arr[]={2,5,6,8,1,7,4};
	
	//bubble(arr);          //数组名本质上是数组首元素的地址，地址应该让指针接收，所以上面 bubble(int aee[]，int s)看似数组，本质是指针变量 
	
	int s=sizeof(arr)/sizeof(arr[0]);  //计算趟数就不能在函数里算了，在主函数计算后传参 
	bubble(arr,s);
	for(int i=0;i<s;i++)
	{
		printf("%d ",arr[i]);
		
	}

	return 0; 
}
