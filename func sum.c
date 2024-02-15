#include<stdio.h>
main()
//Take Nothing Return Nothing
/*{
    sum();   //function call
}
void sum()    //return nothing so we are writing void
{              //function defination
    int c;
    int num1,num2;
    printf("Enter a month: ");
    scanf("%d %d",&num1,&num2);
    printf("%d",c=num1+num2);
}
*/
//Take Something Return Nothing
/*
{
    int num1,num2;
    printf("Enter a month: ");
    scanf("%d %d",&num1,&num2);
    sum(num1,num2);   //function call
}
void sum(int a,int b)    //return nothing so we are writing void
{              //function defination
    int c;
    printf("%d",c=a+b);
}*/
//Take Nothing Return Something
/*{
    int result=sum();   //function call
    printf("%d",result);
}
int sum()    //return nothing so we are writing void
{              //function defination
    int c;
    int num1,num2;
    printf("Enter a month: ");
    scanf("%d %d",&num1,&num2);
    return c=num1+num2;
}*/
//Take Something Return Something
{
    int result=sum(2,4);   //function call
    printf("%d",result);
}
int sum(int a,int b)    //return nothing so we are writing void
{
    int c=a+b;     //function defination
    return c;
}
