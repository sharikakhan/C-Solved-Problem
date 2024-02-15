#include<stdio.h>
float area(int r);
main()
{
    int radius;
    printf("Enter a radius: ");
    scanf("%d",&radius);

    float result=area(radius);
    printf("%f",result);
}
float area(int r)
{
    float result=3.14*r*r;
    return result;
}
