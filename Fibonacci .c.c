#include<stdio.h>
int main()
{
    int n, t1=1, t2=1, t3, i;
    printf(" How many terms to display:");
    scanf("%d", &n);
    printf("%d %d", t1,t2);
    for(i=3; i<=n; i++ )
    {
        t3=t1+t2;
        printf(" %d",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}