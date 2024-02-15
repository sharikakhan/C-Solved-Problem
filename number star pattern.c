#include<stdio.h>
main()
{
    int lines,i,j,k;
    printf("Enter a number of lines: ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        k=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                printf("%d ",k);
                if(j<lines)
                    k=k+1;
                else
                    k=k-1;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
