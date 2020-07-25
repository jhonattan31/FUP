#include <stdio.h>

int main()
{
    float sal, sal_fin;
    scanf("%f", &sal);
    if (sal <= 1000){
    printf("%.2f", sal * 1.2);}
    else
    if ((sal > 1000) && (sal <= 1500)){
    printf("%.2f", sal * 1.15);}
    else
    if ((sal > 1500) && (sal <= 2000)){
    printf("%.2f", sal * 1.1);} 
    else
    {printf("%.2f", sal * 1.05);}
}