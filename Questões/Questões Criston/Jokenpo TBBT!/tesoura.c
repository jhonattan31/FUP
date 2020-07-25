#include <stdio.h>
int main()
{
     char jog1, jog2, pedra, papel, tesoura, spock, lagarto;
     scanf("%c\n%c", &jog1, &jog2);
     pedra = 'R';
     papel = 'P';
     tesoura = 'S';
     lagarto = 'L';
     spock = 'K';
     spock > tesoura;
     spock > pedra;
     lagarto > spock;
     lagarto > papel;
     pedra > lagarto;
     pedra > tesoura;
     papel > pedra;
     papel > spock;
     tesoura > papel;
     tesoura > lagarto;
     
     if ((jog1 == 'R') && (jog2 == 'S')){
         printf("jog1");}
         else
         if ((jog1 == 'P') && (jog2 == 'R')){
             printf("jog1");}
             else
             if ((jog1 == 'S') && (jog2 == 'P')){
                 printf("jog1");}
                 else
                 if ((jog1 == 'S') && (jog2 == 'L')){
                    printf("jog1");}
                    else
                    if ((jog1 == 'R') && (jog2 == 'L')){
                        printf("jog1");}
                        else
                        if ((jog1 == 'P') && (jog2 == 'K')){
                            printf("jog1");}
                            else
                            if ((jog1 == 'K') && (jog2 == 'S')){
                                printf("jog1");}
                                else
                                if ((jog1 == 'K') && (jog2 == 'P')){
                                    printf("jog1");}
                                    else
                                    if ((jog1 == 'L') && (jog2 == 'K')){
                                        printf("jog1");}
                                        else
                                        if ((jog1 == 'L') && (jog2 == 'P')){
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
                                                        if ((jog2 == 'S') && (jog1 == 'L')){
                                                            printf("jog2");}
                                                            else
                                                            if ((jog2 == 'R') && (jog1 == 'L')){
                                                                printf("jog2");}
                                                                else
                                                                if ((jog2 == 'K') && (jog1 == 'R')){
                                                                    printf("jog2");}
                                                                    else
                                                                    if ((jog2 == 'P') && (jog1 == 'K')){
                                                                        printf("jog2");}
                                                                        else
                                                                        if ((jog2 == 'K') && (jog1 == 'S')){
                                                                            printf("jog2");}
                                                                            else
                                                                            if ((jog2 == 'K') && (jog1 == 'P')){
                                                                                printf("jog2");}
                                                                                else
                                                                                if ((jog2 == 'L') && (jog1 == 'K')){
                                                                                    printf("jog2");}
                                                                                    else
                                                                                    if ((jog2 == 'L') && (jog1 == 'P')){
                                                                                        printf("jog2");}
                                                                                        else
                                                                                        {printf("empate");}
}