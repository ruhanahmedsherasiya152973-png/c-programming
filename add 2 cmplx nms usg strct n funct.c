//add 2 complex numbers using structure and function
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};

struct complex add(struct complex c1, struct complex c2)
{
    struct complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main()
{
    struct complex c1, c2, sum;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    sum = add(c1, c2);
    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}