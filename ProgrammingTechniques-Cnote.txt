//first program
#include<stdio.h>
#include<conio.h>
void main(){
    printf("hello world");
} 

//program for discount
#include<stdio.h>
#include<conio.h>
void main(){
    int a,q,total,dis;
    printf("enter sum ");
    scanf("%d",&a);
    printf("enter quantity ");
    scanf("%d",&q);
    total=a-(a*q);
    if (dis>1000)
    {
        dis=dis-(dis*15/100);
        printf("discount=%d",dis);
    }
    else
    {
        dis=dis-(dis*10/100);
        printf("discount=%d",dis);
    }
    getch();
}

//program to convert celsius to fahrenheit
#include<stdio.h>
#include<conio.h>
void main(){
    float c,f;
    printf("enter celsius ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("fahrenheit=%f",f);
    getch();
}

//program to convert fahrenheit to celsius
#include<stdio.h>
#include<conio.h>
void main(){
    float c,f;
    printf("enter fahrenheit ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celsius=%f",c);
    getch();
}


//program to find if num is even or odd
#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("enter sum ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    getch();
}

//program to check for leap year
#include<stdio.h>
#include<conio.h>
void main(){
    int year;
    printf("enter year ");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
    getch();
}

//program to find largest of 3 numbers
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("enter sum ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("largest=%d",a);
    }
    else if (b>a && b>c)
    {
        printf("largest=%d",b);
    }
    else
    {
        printf("largest=%d",c);
    }
    getch();
}

//program to find average
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,av;
    printf("enter sum ");
    scanf("%d%d",&a);
    printf("enter sum2 ");
    scanf("%d",&b);
    av=(a+b)/2;
    printf("average=%d",av);
    getch();
}

//program to check if 2 numbera are equal or not
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter sum ");
    scanf("%d%d",&a,&b);
    if (a==b)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    getch();
}

//program to to perform addition,subtraction,multiplication,division,modulus
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,add,sub,mul,div,mod;
    printf("enter sum ");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("addition=%d\n",add);
    printf("subtraction=%d\n",sub);
    printf("multiplication=%d\n",mul);
    printf("division=%d\n",div);
    printf("modulus=%d\n",mod);
    getch();
}

//program to find area of circle
#include<stdio.h>
#include<conio.h>
void main(){
    float r,area;
    printf("enter radius ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area=%f",area);
    getch();
}

//program to find area of rectangle
#include<stdio.h>
#include<conio.h>
void main(){
    float l,b,area;
    printf("enter length ");
    scanf("%f",&l);
    printf("enter breadth ");
    scanf("%f",&b);
    area=l*b;
    printf("area=%f",area);
    getch();
}

//program to calculate simple interest
#include<stdio.h>
#include<conio.h>
void main(){
    float p,r,t,si;
    printf("enter principal ");
    scanf("%f",&p);
    printf("enter rate ");
    scanf("%f",&r);
    printf("enter time ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest=%f",si);
    getch();
}

//program to count from 1 to 13
#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    for (i=1;i<=13;i++)
    {
        printf("%d\n",i);
    }
    getch();
}

//program to count from enven numbers to 20
#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    for (i=2;i<=20;i+=2)
    {
        printf("%d\n",i);
    }
    getch();
}

//program to count till n
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n;
    printf("enter n ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    getch();
}

//program to count 100 to 90
#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    for (i=100;i>=90;i--)
    {
        printf("%d\n",i);
    }
    getch();
}


