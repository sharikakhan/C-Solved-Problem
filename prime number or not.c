#include<stdio.h>
main()
{
    int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            count=count+1;
    }s
    if(count==2)
        printf("rime number");
    else
        printf("not");
}
