#include<stdio.h>
main()
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}*/

{
    int lines,i,j;
    printf("Enter a number of lines: ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
