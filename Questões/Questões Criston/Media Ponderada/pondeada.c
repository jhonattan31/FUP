#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Programa: Media ponderada. \n\n");
    printf("Insira o valor da primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Insira o valor da segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("Insira o valor da terceira nota: ");
    scanf("%f", &nota3);
    printf("Insira o peso da terceira nota: ");
    scanf("%f", &peso3);
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
    printf("A media e: %.2f \n\n", media);
    return 0;
}
