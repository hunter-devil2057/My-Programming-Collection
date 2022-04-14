#include<stdio.h>
#include<conio.h>
int main()
{
    float num1, num2, sum;
    // Float is a keyword used to read or write decimal number
    printf("Enter First Number: ");
    scanf("%f", &num1);
    //reads the value required in variable num1
    printf("Enter Second Number: ");
    scanf("%f", &num2);
    //reads the value required in variable num2
    sum=num1+num2;
    printf("Therefore, the sum of two numbers is: %.2f", sum);
    return 0;
}