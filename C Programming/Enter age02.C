#include<stdio.h>
int main()
{
int age,weight;
float height;
clrscr();


printf("Enter your age : ");
scanf("%d",&age);
printf("Enter your weight : ");
scanf("%d", &weight);
printf("Enter your height : ");
scanf("%f",&height);

printf("My age is : %d\n", age);
printf("My weight is %d\n", weight);
printf("My height is : %2.2f\n",height);



getch();

return 0;
}