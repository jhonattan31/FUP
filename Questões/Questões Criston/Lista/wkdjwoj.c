#include <stdio.h>
int main()
{
int qtd = 0, i, cont = 0;
scanf("%d", &qtd);
int vet[qtd];	
	for(i=0; i < qtd; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i < qtd; i++){
		if(vet[i] < vet[i + 1]){
		cont++;
		}
	}	
if(cont == qtd){
	printf("sim");
	}else{
		printf("nao");
	}
	return (0);
}
