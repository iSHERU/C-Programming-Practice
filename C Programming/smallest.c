#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter values of A B C: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("%d",b);
        }
    }
    return 0;
}