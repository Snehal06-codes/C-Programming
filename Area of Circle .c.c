#include<stdio.h>
int main()
{
    float r,area, circumference;
    printf("enter the radius(r):");
    scanf("%f", &r);
    
    area = 3.14*r*r;
    circumference= 2*3.14*r;

    printf("area=%.2f\n", area);
    printf("cirumference=%.2f\n",circumference);

    return 0;
}