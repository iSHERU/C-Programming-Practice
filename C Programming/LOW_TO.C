#include<stdio.h>
int main(){

char low_case;
clrscr();
printf("Enter lower case letter: ");
scanf("%c",&low_case);
printf("Upper case letter: %c",low_case-'a'+'A');





getch();
return 0;
}