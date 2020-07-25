#include <stdio.h>
int main()
{
    float ch1, ch2;
    char esc;
    scanf("%f\n%c\n%f", &ch1, &esc, &ch2);
if ((esc == 'm') && (ch2 < ch1)){
    printf("segundo");}
    else
    if ((esc == 'M') && (ch2 > ch1)){
        printf("segundo");}
        else
        {printf("primeiro");}
}
