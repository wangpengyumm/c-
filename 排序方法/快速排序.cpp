#include <stdio.h>
#include <stdlib.h>

// 比较函数：告诉qsort怎么比大小
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // 升序排列
}

int main() {
    int arr[] = {9, 3, 7, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 奇迹发生：直接调用库函数排序
    qsort(arr, n, sizeof(int), compare);

    printf("快速排序后: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
