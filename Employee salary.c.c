#include<stdio.h>
int main()
{
    float basic, hra, da, pt, it, gross, deduction, net;
    printf("Enter basic salary:");
    scanf("%f", &basic);
    hra= 10*basic/100;
    da= 152*basic/100;
    pt= 5*basic/100;
    it= 20*basic/100;
    
    gross= basic+hra+da;
    deduction= pt+it;
    net= gross-deduction;
    
    printf("Basic salary:%.2f", basic);
    printf("\n House rent allowance:%.2f",hra);
    printf("\n Dearness allowance:%.2f", da);
    printf("\n Professional tax:%.2f", pt);
    printf("\n Income tax:%.2f", it);
    printf("\n Gross salary:%.2f", gross);
    printf("\n Total deduction: %.2f", deduction);
    printf("\n Net salary:%.2f", net);
    return 0;
}