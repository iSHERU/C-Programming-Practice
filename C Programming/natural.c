#include<stdio.h>
int main(){
    int i,j,n;

    printf("Enter Last Natural number: ");
    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
        for(j=0; j<=i-1;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}