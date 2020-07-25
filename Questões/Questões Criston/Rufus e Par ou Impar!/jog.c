#include <stdio.h>
int main()
{
    char op;
    int jog1, jog2, i, p;
    scanf("%c\n%d\n%d", &op, &jog1, &jog2);
    i = 1 || 3 || 5 || 7 || 9;
    p = 0 || 2 || 4 || 6 || 8;
        if ((op == 'p') && ((jog1 == 0) || (jog1 == 2) || (jog1 == 4) || (jog1 == 6) || (jog1 == 8))){
            printf("Venceu");}
            else
            if ((op == 'p') && ((jog1 == 1) || (jog1 == 3) || (jog1 == 5) || (jog1 == 7) || (jog1 == 9))){
                printf("Perdeu");}
                else
                if ((op == 'i') && ((jog1 == 1) || (jog1 == 3) || (jog1 == 5) || (jog1 == 7) || (jog1 == 9))){
                    printf("Venceu");}
                    else
                    if ((op == 'i') && ((jog1 == 0) || (jog1 == 2) || (jog1 == 4) || (jog1 == 6) || (jog1 == 8))){
                        printf("Perdeu");}
}