#include<stdio.h>
int main(){

    int i=0;
    while (i<=255)
    {
        printf("Character for ASCII Code %d is %c.\n",i,i);
        i++;
    }
    
    return 0;
}