#include<stdio.h>
main()
{
    int i,j,lines;
    printf("Enter a number of lines: ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        char a='A';
        for(j=1;j<=7;j++)
        {
            if(j<=lines+1-i ||j>=lines-1+i)
            {
                printf("%c",a);

                if(j<lines)
                    a=a+1;
                else
                    a=a-1;
            }

            else
            {
                printf(" ");
                if(j==1)
                    a--;
            }
        }
        printf("\n");
    }
}


