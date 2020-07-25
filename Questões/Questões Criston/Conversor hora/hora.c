#include <stdio.h>

int main()
{
    int hora;
    scanf("%d", &hora);
    
    
    printf("%d\n", hora / 3600);
    hora = hora % 3600;
    printf("%d\n", hora / 60);
    hora = hora % 60;
    printf("%d\n", hora);
}