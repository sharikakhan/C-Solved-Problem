#include<stdio.h>
int main()
{
int result=combination(5,2);
printf("%d",result);
}
int fact(int n)
{
    int f=1;
while(n)
{
    f=f*n;
    n--;
}
return f;
}

int combination(int n,int r)
{
    r=fact(n)/(fact(n-r)*fact(2));
}
