#include<stdio.h>
main()
/*{
    int sum=1,n,i=1,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(sum)
    {
        sum=sum+i;
        printf("%d ",sum);
        i=i+2;
        count=count+1;
        if(count==n)
            break;
    }
}
*/
{
    int sum=1,n,i=1,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*i+1);
    }
}
