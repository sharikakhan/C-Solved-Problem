#include<stdio.h>
int main()
{
    float r;
    printf("Enter a radius: ");
    scanf("%f",&r);   /*%f is format specifier*/
    printf("area of circle %f",3.14*r*r);
    getch();
}
