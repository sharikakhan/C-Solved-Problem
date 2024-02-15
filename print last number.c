#include<stdio.h>
main()
{
    int number;
    printf("Enter a numbers: ");
    scanf("%d",&number);
    printf("last number is : %d",number%10);
    getch();
}
