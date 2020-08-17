#include <stdio.h>

int main(){
    double num1, num2;
    double add_out, subtract_out, mul_out, div_out;

    printf("請輸入兩個數字:");
    scanf("%lf%lf", &num1, &num2);  //雙引號裡面不可以有空白

    add_out = num1 + num2;
    subtract_out = num1 - num2;
    mul_out = num1 * num2;
    div_out = (double)num1 / num2;
    printf("計算結果:\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add_out);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract_out);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, mul_out);
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, div_out);

    return 0;
}