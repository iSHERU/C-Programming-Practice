#include <stdio.h>
#include <string.h>

struct student
{
    char name[200];
    char roll_no[20];
    int marks[9];
    float cgpa;
    float Attendence;
};

struct subjects
{
    char name[20];
} sub[9];

int main()
{
    struct student s1 = {"Haseeb Ullah", "22MDBCS210", {21, 20, 19, 20, 20, 18, 29, 17, 15}, 3.65, 91.09},
                   s2 = {"Sher Shah Suri", "22MDBCS280", {21, 20, 19, 17, 21, 21, 22, 22, 10}, 3.65, 94.20},
                   s3 = {"Asad Ullah", "22MDBCS204", {20, 21, 20, 23, 20, 17, 19, 18, 20}, 3.65, 92.40};

    struct subjects sub[9] = {"Programming", "Programming Lab", "ICT", "ICT Lab", "English", "Islamiyat", "Pakistan Studies", "OHS", "Calculus"};

    int choice;
    char reg_number[20];

    do
    {
        printf("\nEnter your Choice:\n");
        printf("\n1.Marks of all Courses in Mid-Term Exam.\n");
        printf("2.CGPA.\n");
        printf("3.Attendence.\n");
        printf("4.Exit.\n\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number: ");
            fflush(stdin);
            scanf("%[^\n]%*c", &reg_number);

            if (!strcmp(reg_number, s1.roll_no))
            {
                printf("Name of Student: %s\n\n", s1.name);
                printf("Marks: ");
                for (int i = 0; i < 9; i++)
                    printf("%s marks: %d\n", sub[i].name, s1.marks[i]);
            }
            else if (!strcmp(reg_number, s2.roll_no))
            {
                printf("Name of Student: %s\n\n", s2.name);
                printf("Marks: ");
                for (int i = 0; i < 9; i++)
                    printf("%s marks: %d\n", sub[i].name, s2.marks[i]);
            }
            else if (!strcmp(reg_number, s3.roll_no))
            {
                printf("Name of Student: %s\n\n", s3.name);
                printf("Marks: ");
                for (int i = 0; i < 9; i++)
                    printf("%s marks: %d\n", sub[i].name, s3.marks[i]);
            }
            break;

        case 2:
            printf("Enter Roll Number: ");
            fflush(stdin);
            scanf("%[^\n]%*c", &reg_number);

            if (!strcmp(reg_number, s1.roll_no))
                printf("GPA of %s is: %.2f", s1.name, s1.cgpa);

            else if (!strcmp(reg_number, s2.roll_no))
                printf("GPA of %s is: %.2f", s2.name, s2.cgpa);

            else if (!strcmp(reg_number, s3.roll_no))
                printf("GPA of %s is: %.2f", s3.name, s3.cgpa);

            break;

        case 3:
            printf("Enter Roll Number: ");
            fflush(stdin);
            scanf("%[^\n]%*c", &reg_number);

            if (!strcmp(reg_number, s1.roll_no))
                printf("Attendence of %s is: %.2f%", s1.name, s1.Attendence);

            else if (!strcmp(reg_number, s2.roll_no))
                printf("Attendence of %s is: %.2f%", s2.name, s2.Attendence);

            else if (!strcmp(reg_number, s3.roll_no))
                printf("Attendence of %s is: %.2f%", s3.name, s3.Attendence);
            break;

        case 4:
            printf("Exited.");
            break;

        default:
            printf("Invalid Choice or Registration Number!");
        }
    } while (choice != 4);

    return 0;
}