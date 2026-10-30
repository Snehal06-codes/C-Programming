#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d", &a,&b);

    printf("Addition=%d\n", a+b);
    printf("Subtraction=%d\n", a-b);
    printf("Multiplication=%\n", a*b);
    printf("Division=%d\n",a/b);
    printf("Modulus=%d", a%b);

    return 0;
}