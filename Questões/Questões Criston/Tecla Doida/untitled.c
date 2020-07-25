#include <stdio.h>
#include <string.h>
int main()
{
int tecla_doida, i;
char numerica[102];
char vetor[102];
scanf("%d\n", &tecla_doida);
fgets(numerica, sizeof(numerica), stdin);

for(i = 0; i < strlen(numerica) - 1; i++){
if(tecla_doida != numerica[i] - '0'){
    vetor[i] = numerica[i];
//	printf("%c", vetor[i]); 
//for(i = 0; i < strlen(vetor) - 1; i++){
	if(vetor[i] == vetor[i + 1]){
		printf("%c", vetor[i]);
		break;
	}else
	if(vetor[i] == 0){
		printf("%c", vetor[i + 1]);
	}else
		{printf("%c", vetor[i]);}
	}else{
		printf("0");}
		break;
	}
}
