#include<stdio.h>
int main()
{
    int sal1=6000,sal2=10000,sal3=18000,grade,exp;
    float salary;
    // clrscr();
    printf("Enter Grade of Employee(1 - 21): ");
    scanf("%d",&grade);

    switch(grade)
    {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		    printf("Enter Experience of Employee: ");
	    	scanf("%d",&exp);

	    	if(exp<=10)
	    	{
				salary=(6000)+(6000 * 0.10);
	       		printf("The salary is %.2f",salary);
	    	}
	    	else if(exp<=25)
	    	{
				salary=(6000) + (6000 * 0.50);
				printf("Salary is %.2f",salary);
	    	}
	    	else if(exp>25)
	    	{
				salary=(6000) + (6000 * 0.75);
				printf("Salary is %.2f",salary);
	    	}
	    	break;

	    case 9:
	    case 10:
	    case 11:
	    case 12:
	    case 13:
	    case 14:
	    case 15:
			printf("Enter Experience of Worker: ");
			scanf("%d",&exp);

			if(exp<=10)
			{
		    	salary=(10000)+(10000 * 0.10);
		    	printf("Salary is %.2f",salary);
			}
			else if(exp<=25)
			{
		    	salary=(10000)+(10000 * 0.50);
		    	printf("Salary is %.2f",salary);
			}
			else if(exp>25)
			{
		    	salary=(10000)+(10000 * 0.75);
		    	printf("Salary is %.2f",salary);
			}
			break;

		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
	    case 21:
			printf("Enter Experience: ");
			scanf("%d",&exp);
			if(exp<=10)
			{
			    salary=(18000)+(18000 * 0.10);
			    printf("Salary is %.2f",salary);
			}
			else if(exp<=25)
			{
			    salary=(18000)+(18000 * 0.50);
			    printf("Salary is %.2f",salary);
			}
			else if(exp>25)
			{
			   salary=(18000)+(18000 * 0.75);
			   printf("Salary is %.2f",salary);
			}
			break;
		default:
			printf("Invalid Grade Selected.\nChoose between 9 and 21.\n");
    }
    // getch();
    return 0;
}