#include<stdio.h>
int main(){
    int n=4,i,j=1,num=1;
    // clrscr();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    // getch();
    return 0;
}
