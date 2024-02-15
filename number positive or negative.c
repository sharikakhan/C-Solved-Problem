#include<stdio.h>
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num<=0)
    {
        printf("This is non-positive number");
    }
    else{
        printf("This is positive number");
    }
}
