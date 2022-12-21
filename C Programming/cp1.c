#include<stdio.h>
int main(){
    int blanks,tabs,newlines,input;
    blanks=0;
    tabs=0;
    newlines=0;

    printf("Enter your text:");
    
    while ((input=getchar()) != EOF)
    {
        if (input==' ')
        {
            ++blanks;
        }
        else if (input=='\t')
        {
            ++tabs;
        }
        else if (input=='\n')
        {
            ++newlines;
        }
        break;
    }

    printf("Total Blanks: %d\nTotal Tabs: %d\nTotal NewLines: %d\n",blanks,tabs,newlines);

    return 0;
}