#include <stdio.h>

int main(){
int linha_1, misto, coluna_2;
scanf("%d\n%d\n%d", &linha_1, &misto, &coluna_2);
int m1[linha_1][misto], m2[misto][coluna_2];
int i,j,k;
    for(i=0; i < linha_1;i++){
        for(j=0; j < misto;j++){
            scanf("%d", &m1[i][j]);
        }
    }
   
    for(j=0; j < misto;j++){
        for(k=0; k < coluna_2;k++){
            scanf("%d", &m2[j][k]);
        }
    }
    int prod[linha_1][coluna_2];
    
    for(i=0; i < linha_1;i++){
        prod[i][k] = 0;
        for(j=0; j < misto;j++){
             prod[i][j]=0;
            for(k=0; k < coluna_2;k++){
            prod[i][k] += m1[i][j] * m2[j][k];
            }
        }
    }
    
    
    for(i=0; i < linha_1;i++){
        for(k=0; k < coluna_2;k++){
        printf("%d ", prod[i][k]);
        }
        printf("\n");
    }
}
