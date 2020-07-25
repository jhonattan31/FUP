#include <stdio.h>
int main()
{
    char jog1, jog2, pedra, papel, tesoura;
    scanf("%c\n%c", &jog1, &jog2);
    pedra = 'R';
    papel = 'P';
    tesoura = 'S';
    pedra > tesoura;
    papel > pedra;
    tesoura > papel;
    if ((jog1 == 'R') && (jog2 == 'S')){
        printf("jog1");}
        else
        if ((jog1 == 'P') && (jog2 == 'R')){
            printf("jog1");}
            else
            if ((jog1 == 'S') && (jog2 == 'P')){
                printf("jog1");}
                else
                if ((jog2 == 'R') && (jog1 == 'S')){
                    printf("jog2");}
                    else
                     if ((jog2 == 'P') && (jog1 == 'R')){
                        printf("jog2");}
                        else
                         if ((jog2 == 'S') && (jog1 == 'P')){
                            printf("jog2");}
                            else
                            {printf("empate");}
}