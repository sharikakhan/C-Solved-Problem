#include<stdio.h>
main()
/*{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    getch();
} */
/*{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2)    /*yaha even pe result 0 aayega to o false hoga jab condition false hogi tab else pe jayega */
  /*      printf("Odd Number");
    else
        printf("Even Number");
    getch();
}  */
/*{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num/2*2==num)
        printf("Even Number");
    else
        printf("Odd Number");
}
*/
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num&1)
        printf("Odd Number");
    else
        printf("Even Number");
}
