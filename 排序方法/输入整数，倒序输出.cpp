#include <stdio.h>

int main() {
    int n; 
    int hundreds, tens, units; 
    printf("请输入一个不多于三位的正整数：");
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        printf("位数：1位\n");
        printf("各位数字：个位=%d\n", n);
        printf("逆序输出：%d\n", n);
    } else if (n >= 10 && n <= 99) {
        tens = n / 10;
        units = n % 10;
        printf("位数：2位\n");
        printf("各位数字：十位=%d，个位=%d\n", tens, units);
        printf("逆序输出：%d%d\n", units, tens);
    } else if (n >= 100 && n <= 999) {
        hundreds = n / 100;
        tens = (n / 10) % 10;
        units = n % 10;
        printf("位数：3位\n");
        printf("各位数字：百位=%d，十位=%d，个位=%d\n", hundreds, tens, units);
        printf("逆序输出：%d%d%d\n", units, tens, hundreds);
    } else {
        printf("输入错误！请输入1~999之间的正整数。\n");
    }

    return 0;
}
