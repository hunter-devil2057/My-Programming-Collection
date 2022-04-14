#include<stdio.h>
int main()
{
    int i, j, k, p, ch, n1, n2, set1[10], set2[10], set3[20], flag;
    printf("Enter the size of Set 1:");
    scanf("%d", &n1);
    printf("\nEnter the elements of Set 1:\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("Enter the size of Set 2:");
    scanf("%d", &n2);
    printf("\nEnter the elements of Set 2:\n");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &set2[i]);
    }

    while(1)
    {
        printf("\nPress 1 for Union.");
        printf("\nPress 2 for Intersection.");
        printf("\nPress 3 for Difference.");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            printf("\nThe Union of two sets is:\n");
            k=0;
            for(i=0; i<n1; i++)
            {
                set3[k]=set1[i];
                k++;
            }
             for(i=0; i<n2; i++)
            {
                flag=1;
                for(j=0; j<n1; j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
            p=k;
            for(k=0; k<p; k++)
            {
                printf("%d\t", set3[k]);
            }
            break;
            case 2:
            printf("\nThe Intersection between two sets is:\n");
            k=0;
            for(i=0; i<n2; i++)
            {
                flag=1;
                for(j=0; j<n1; j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
               if(flag==0)
               {
                   set3[k]=set2[i];
                   k++;
               }
        }
        p=k;
        for(k=0; k<p; k++)
        {
            printf("%d\t", set3[k]);
        }
        break;
            case 3:
                printf("\nThe difference is:\n");
                k=0;
                for(i=0; i<n1; i++)
                {
                    flag=1;
                    for(j=0; j<n2; j++)
                    {
                        if(set1[i]==set2[j])
                        {
                            flag=0;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        set3[k]=set1[i];
                        k++;
                    }
                }
                p=k;
                for(k=0; k<p; k++)
                {
                    printf("%d\t", set3[k]);
                }
                break;
            default:
                printf("Invalid Choice!!!");
    }
}
}
