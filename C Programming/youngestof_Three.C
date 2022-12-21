#include<stdio.h>
int main()
{
	int ram_age,shayam_age,ajay_age;

	printf("Enter age of Ram: ");
	scanf("%d",&ram_age);
	printf("Enter age of Shayam: ");
	scanf("%d",&shayam_age);
	printf("Enter age of Ajay: ");
	scanf("%d",&ajay_age);

	if(ram_age<shayam_age)
	{
		if(ram_age<ajay_age)
		{
			printf("Ram is youngest of all");
		}
		else 
		{
			printf("Ajay is youngest of all");
		}
	}
	else
	{
		if(shayam_age<ajay_age)
		{
			printf("Shayam is youngest of all");
		}
		else
		{
			printf("Ajay is youngest of ");
		}
	}
	return 0;
}