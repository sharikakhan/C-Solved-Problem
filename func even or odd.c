#include<stdio.h>

evenodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);

    int result=evenodd(num);
    printf("%d",result);
}

