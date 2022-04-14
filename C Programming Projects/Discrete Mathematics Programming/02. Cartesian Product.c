#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10], b[10], m, n, i, j;
    printf("How many elements do you want in Set A?\n");
    scanf("%d", &m);
    printf("Enter %d elements in Set A: ", m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("How many elements do you want in Set B?\n");
    scanf("%d", &n);
    printf("Enter %d elements in Set B:", n);
     for(j=0; j<n; j++)
    {
        scanf("%d", &b[j]);
    }

    printf("\nCartesian Product:");
    printf("{");
     for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
    {
        printf("%d, %d", a[i], b[j]);
        printf(",");
    }
    }
    printf("}");
}
