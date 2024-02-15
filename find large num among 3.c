#include<stdio.h>
main()
/*{
    int n1,n2,n3;
    printf("Enter a three number: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if((n1>=n2)&&(n1>=n3))
        printf("%d",n1);
    else if((n2>=n1)&&(n2>=n3))
        printf("%d",n2);
    else if ((n3>=n1)&&(n3>=n2))
        printf("%d",n3);

}*/
/*
{
    int a,b,c;
    printf("Enter a three number: ");
    scanf("%d %d %d",a,&b,&c);
    if(a>b)
    {
        if (a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else
    {
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }
}
*/
{
    int a,b,c;
    printf("Enter a three number: ");
    scanf("%d %d %d",a,&b,&c);
    if(a>b)
    {
        if (a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else
    {
        b>c?printf("%d",b):printf("%d",c);
    }
}

