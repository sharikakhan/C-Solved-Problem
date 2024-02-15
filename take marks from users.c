#include<stdio.h>
main()
{
    int marks;
    printf("Enter a marks: ");
    scanf("%d",&marks);
    if(marks>100)
        printf("Invalide Marks");
    else
        switch(marks)
    {
        case 91 ... 100:
            printf("Grade A");
            break;

        case 81 ... 90:
            printf("Grade B");
            break;

        case 71 ... 80:
            printf("Grade C");
            break;

        case 61 ... 70:
            printf("Grade D");
            break;

        case 51 ... 60:
            printf("Grade E");
            break;

        case 0 ... 50:
            printf("Grade F");
            break;
    }
}
