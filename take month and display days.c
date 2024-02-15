#include<stdio.h>
main()
/*{
    int month;
    printf("Enter a month: ");
    scanf("%d",&month);

    if (month>12)
    {
        printf("Invalid number");
    }
    else
    {
        switch(month)
        {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            printf("31 days");
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            printf("30 days");
            break;
    case 2:
            printf("28 days");
        }
    }
}
*/
{
    int month;
    printf("Enter a month: ");
    scanf("%d",&month);

    if (month>12)
    {
        printf("Invalid number");
    }
    else
    {
        switch(month)
        {
    case 1 || 3  || 5 || 7 || 8|| 10 || 12:
            printf("31 days");
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            printf("30 days");
            break;
    case 2:
            printf("28 days");
        }
    }
}
