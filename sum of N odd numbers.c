#include<stdio.h>
main()
/*{
    int sum=0,n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=2*n;i=i+2)
    {
        sum=sum+i;
        printf("%d ",i);
    }
    printf("\n%d",sum);
}
*/
/*{
    int sum=0,n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<2*n;i++)
    {
        if(i%2!=0)
            sum=sum+i;
    }
    printf("%d",sum);
}
*/
{
    int sum=0,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
        printf("%d ",sum);
    }
    printf("\n%d",sum);
}
