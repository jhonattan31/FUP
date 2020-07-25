#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
int tecla_doida, i, aux = 0, aux2 = 0;
char numerica[102];
char vetor[102];
scanf("%d\n", &tecla_doida);
fgets(numerica, sizeof(numerica), stdin);

    for(i = 0; i < strlen(numerica) - 1; i++){
        if(tecla_doida != numerica[i] - '0'){
            vetor[aux] = numerica[i];
            aux++;
        }
    }
    for(i = strlen(vetor) - 1; i >= 0; i--){
    aux2 += (vetor[i] - '0') * pow(10,i);
    }
    printf("%d", aux2);
}
