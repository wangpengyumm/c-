#include <stdio.h>

int main() {
    double num1, num2, result = 0;
    char a ;
    printf("请输入第一个数字: ");
    scanf("%lf", &num1);

    printf("请输入运算符: ");
    scanf(" %c", &a);

    printf("请输入第二个数字: ");
    scanf("%lf", &num2);

    switch (a) {
        case '+':
            result = num1 + num2;
            printf("结果: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("结果: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("结果: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
        	
            if (num2 == 0) {
                printf("错误：除数不能为零！\n");
            } else {
                result = num1 / num2;
                printf("结果: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("错误：输入的运算符非法，请输入 +, -, * 或 /。\n");
            break;
    }

    return 0;
}
