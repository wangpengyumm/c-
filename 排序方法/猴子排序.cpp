#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 检查数组是否已经有序
bool is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) 
		   return false;
    }
    return true;
}

// 随机打乱数组（洗牌算法）
void shuffle(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int r = rand() % n;
        int temp = arr[i];
        arr[i] = arr[r];
        arr[r] = temp;
    }
}

// 猴子排序
void miracle_sort(int arr[], int n) {
    while (!is_sorted(arr, n)) 
	{
        shuffle(arr, n);
    }
}

int main() {
    srand(time(NULL));
    int arr[] = {3, 1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    miracle_sort(arr, n);

    printf("奇迹排序后: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
