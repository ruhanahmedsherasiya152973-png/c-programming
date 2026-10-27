//demonstrating nested struct
#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct student
{
    char name[20];
    int roll_no;
    struct date dob; // nested struct
};

void main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Date of Birth: %02d/%02d/%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);
}