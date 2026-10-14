#include <stdio.h>
int main(){
    float num1,num2;
    printf("Enter 1st Number: ");
    scanf("%f",&num1);
    printf("Enter 2nd Number: ");
    scanf("%f",&num2);

    printf("=====result====\n");
    printf("Addition:%.2f\n",num1 + num2);
    printf("Subtraction:%.2f\n",num1 - num2);
    printf("Multiplication:%.2f\n",num1 * num2);
    printf("Division:%.2f",num1 / num2);
    
}