#include<stdio.h>
int main()
{
    int rows,f_num=0,s_num=1,next=0;

    printf("Enter Number of Rows: ");
    scanf("%d",&rows);

    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",next);
            f_num=s_num;
            s_num=next;
            next=f_num+s_num;
        }
        f_num=0;
        s_num=1;
        next=0;
        printf("\n");
    }
    return 0;
}