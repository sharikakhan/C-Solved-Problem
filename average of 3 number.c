#include<stdio.h>
main()
{
    float num1,num2,num3;
    printf("Enter a three numbers: ");
    scanf("%f %f %f",&num1,&num2,&num3);
    printf("Average of 3 number is : %f ",(num1+num2+num3)/3);
    getch();
}
