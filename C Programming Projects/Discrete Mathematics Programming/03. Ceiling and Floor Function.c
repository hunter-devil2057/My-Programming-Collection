#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main()
{
    float value, floor_value, ceiling_value;
    printf("Enter a float value:");
    scanf("%f", &value);
    floor_value=floor(value);
    ceiling_value=ceil(value);
    printf("Floor Value=%.2f", floor_value);
    printf("\nCeiling Value=%.2f", ceiling_value);
    return 0;
}
