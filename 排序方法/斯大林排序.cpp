#include <stdio.h>

// 斯大林排序函数
// arr: 原始数组, n: 原始数组长度, result: 存放结果的数组
// 返回值: 排序后剩余的元素个数
int stalin_sort(int arr[], int n, int result[]) {
    if (n == 0) 
	    return 0;

    int count = 0;
    int current_max = arr[0];
    
    // 第一个元素总是合格的
    result[count++] = current_max;

    for (int i = 1; i < n; i++) {
        // 如果当前元素 >= 之前的最大值，保留它并更新最大值
        if (arr[i] >= current_max) {
            current_max = arr[i];
            result[count++] = arr[i];
        }
        // 否则，该元素就被“送去古拉格”（直接跳过，不放入结果数组）
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 5, 3, 8 ,5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n]; // 结果数组最大长度不会超过原数组

    int sorted_len = stalin_sort(arr, n, result);

    printf("原始数组: ");
    for (int i = 0; i < n; i++) 
	    printf("%d ", arr[i]);
    printf("\n");

    printf("斯大林排序后: ");
    for (int i = 0; i < sorted_len; i++) 
	    printf("%d ", result[i]);
    printf("\n");

    return 0;
}
