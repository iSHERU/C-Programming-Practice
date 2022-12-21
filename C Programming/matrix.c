#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter Number of Columns: ");
    scanf("%d",&c);
    printf("Enter Number of Rows: ");
    scanf("%d",&r);
    for ( i = 1; i <= r ; i++)
    {
        printf("*");

        for (j = c; j > 1 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}