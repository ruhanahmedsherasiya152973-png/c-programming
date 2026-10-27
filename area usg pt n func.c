//area of circle using pointer n function
#include <stdio.h>
void area(float *r, float *area)
{
    *area = 3.14 * (*r) * (*r);
}

void main()
{
    float radius, area_of_circle;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area(&radius, &area_of_circle);
    printf("Area of the circle: %.2f\n", area_of_circle);
}