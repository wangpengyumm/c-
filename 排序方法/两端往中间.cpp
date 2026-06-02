#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    char arr1[] = "mm like me , i like mm ！";       // 原字符串
    char arr2[sizeof(arr1)];                         // 让 arr2 和 arr1 等长
    memset(arr2, '#', sizeof(arr2) - 1);             // 初始化 arr2
    arr2[sizeof(arr2) - 1] = '\0';                   // 补齐结尾\0

    int left = 0;
    int right = strlen(arr2) - 1;

    while (left <= right) {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(1000);
        system("cls");
        left++;
        right--;
    }
    return 0;
}
