#include<stdio.h>
int main(){
    char a;
    printf("Enter your Character: ");
    scanf("%c",&a);
    if(0<=a && a<=127)
    {
        printf("The Input is a Character of ASCII Code %d",a);
    }
    return 0;
}