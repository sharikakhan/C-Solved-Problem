#include<stdio.h>
main()
/*{
    int i=1,count=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i)
    {
        printf("%d ",i);
        i=i+2;
        count=count+1;
        if(count==n)
            break;
    }
}
*/
/*{
    int i=1,count=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            i=i+2;
            count=count+1;
        }
        if(count==n)
            break;
    }
}
*/
{
    int i,count=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
    }
}
