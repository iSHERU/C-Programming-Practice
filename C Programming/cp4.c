#include<stdio.h> 
int main(){
    int A,B,C,space;
    for (A = 0; A <= 6; A++)
    {
        for (B = 65; B <= 71-A; B++)
        {
            printf("%c",B);
        }
        for(space = 1; space<=A*2-1;space++)
        {
            printf(" ");
        }
        for (C = 71-A; C >= 65; C--)
        {
            if (C==71);

            else
            {
            printf("%c",C);
            }
        }
        printf("\n");
    }
    return 0;
    
}