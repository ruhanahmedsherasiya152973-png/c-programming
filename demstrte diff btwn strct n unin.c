//demonstrate difference between struct and union
#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};

union student1
{
    int roll;
    float marks;
};

void main()
{
    struct student s1;
    union student1 s2;

    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    // Assigning values to union members
    s2.roll = 101;
    printf("\nUnion Roll Number: %d\n", s2.roll);

    s2.marks = 95.5;
    printf("Union Marks: %.2f\n", s2.marks);

    // Note that the value of roll is overwritten by marks
    printf("Union Roll Number after assigning marks: %d\n", s2.roll);
}