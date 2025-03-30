#include <stdio.h>
int main(void){
    int num1, num2, num3;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    num3 = num1 + num2;
    printf("The sum of the two numbers is %d", num3);
    return 0;
}