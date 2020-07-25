#include <stdio.h>
int main()
{
    int dia, dom, seg, ter, qua, qui, sex, sab, hora, min;
    scanf("%d\n%d\n%d", &dia, &hora, &min);
    dom = 1;
    seg = 2;
    ter = 3;
    qua = 4;
    qui = 5;
    sex = 6;
    sab = 7;
    if (dia == dom){
        printf("NAO");}
    else
    if ((dia == sab) && (8 <= hora) && (hora <= 11)){
        printf("SIM");}
        else
    if (((dia == seg) || (dia == ter) || (dia == qua) || (dia == qui) || (dia == sex)) && ((8 <= hora) && (hora <= 11) || (14 <= hora) && (hora <= 17))){
        printf("SIM");}
        else
        {printf("NAO");}
}