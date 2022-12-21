#include<stdio.h>
int main(){
    int num,count=1,remainder,sum;

    while(count <= 500)
    {
        num=count;
        sum=0;
        while (num)
        {
            remainder=num%10;
            sum = sum + (remainder*remainder*remainder);
            num/=10;
        }
        if (count==sum)
        {
            printf("%d\n",count);
        }
        count++;
    }
    return 0;
}