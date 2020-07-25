#include <stdio.h>
#include <string.h>
int main()
{
char valor[22];
int aux = 0, aux2 = 0, comp, i;
fgets(valor, sizeof(valor), stdin);

    for(i=0; i < strlen(valor) - 2;i++){
        if(valor[i] / 2 == 0){
            aux += valor[i]; 
        } else{
            aux2 += valor[i]; 
        }
    }
     comp = aux - aux2;
        if(comp < 0){
        comp *= (-1); 
        }
        
if(comp == 0){
    printf("sim");
    }else
    if(comp == 1){
        printf("nao");
        }else{
                printf("sim");
            }
}
