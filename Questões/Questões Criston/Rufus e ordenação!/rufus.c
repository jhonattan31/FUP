#include <stdio.h>
int main()
{
    int r1, r2, r3;
    scanf("%d\n%d\n%d\n", &r1, &r2, &r3);
    if ((r1 > r2) && (r2 > r3)){
        printf("G M P");}
        else
        if ((r1 > r3) && (r3 > r2)){
            printf("G P M");}
            else
            if((r2 > r1) && (r1 > r3)){
                printf("M G P");}
                else
                if((r2 > r3) && (r1 < r3)){
                    printf("P G M");}
                    else
                    if((r3 > r2) && (r2 > r1))
                    {printf("P M G");}
                        else
                        {printf("M P G");}
}