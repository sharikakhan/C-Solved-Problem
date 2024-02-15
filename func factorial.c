#include<stdio.h>
int main()
{
    int result=factorial(3);
    printf("%d",result);
}

int factorial(int n)
{
    int f=1;
while(n)
{
    f=f*n;
    n--;
}
return f;
}
