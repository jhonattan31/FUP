#include <stdio.h>
int main()
{
	int i, j, a_1, a_2, aux = 50;
	scanf("%d", &a_1);
	int batraquios[a_1];
	scanf("%d", &a_2);
	int anfibios[a_2];
	int iguais[aux];
	
		for(i = 0; i < a_1; i++){
		scanf("%d", &batraquios[i]);
		}		
		for(i = 0; i < a_2; i++){
		scanf("%d", &anfibios[i]);
		}
		for(i = 0; i <= a_2; i++){
			for(j = 0; j <= a_1; j++){
				if(batraquios[i] == anfibios[j]){
				iguais[aux] = batraquios[i];
				}	
			}	
			
		}
		if (anfibios[j] == iguais[aux]){
				printf("nao");
		}else
		{printf("sim");}
		return(0);
}
