#include<stdio.h>
#include<math.h>
int main(){
    float BMI,weight,height;

    printf("Enter Person's Weight Kilograms: ");
    scanf("%f",&weight);

    printf("Enter Person's Height in Meters: ");
    scanf("%f",&height);

    BMI=(weight)/pow(height,2);

    if (BMI<15)
    {
        printf("Starvation.\n");
    }
    else if (BMI>=15.1 && BMI<=17.5)
    {
        printf("Anorexic.\n");
    }
    else if (BMI>=17.6 && BMI<=18.5)
    {
        printf("Underweight.\n");
    }
    else if (BMI>=18.6 && BMI<=24.9)
    {
        printf("Ideal.\n");
    }
    else if (BMI>=25 && BMI<=25.9)
    {
        printf("OverWeight.\n");
    }
    else if (BMI>=30 && BMI<=30.9)
    {
        printf("Obesse.\n");
    }
    else if(BMI>=40)
    {
        printf("Morbidly Obesse.\n");
    }
    return 0;
}