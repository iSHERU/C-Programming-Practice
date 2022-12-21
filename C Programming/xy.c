#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter value of  x and Y : ");

    scanf("%d %d",&x,&y);
/*    if (x>y)
    {
        z=x;
        printf("Z is %d",z);
    }
    else
    {
        z=y;
        printf("Z is %d",z);
    }
*/
    z=(x>y) ? x:y;  //printf("Z is %d",z=x) : printf("Z is %d",z=y);
    printf("%d",z);

    return 0;
}