#include <stdio.h>
int count=0;
long long fibonacciRecursive(int n) {
    // 基础情况
   
    count++; 
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    return count;
}

int main() {
//    int num = 15; // 假设我们要打印前15项
//   printf("斐波那契数列的前 %d 项:\n", num);
    int num=0;
    scanf("%d",&num);
   
    printf("%d ", fibonacciRecursive(num));
    
    return 0;
}
