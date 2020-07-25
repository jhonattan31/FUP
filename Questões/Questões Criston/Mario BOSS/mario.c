#include <stdio.h>
int main()
{
    int qt, i, cont = 0, aux = 0;
    scanf("%d", &qt);
    int fase[qt];
       for(i = 0; i < qt; i++){
         scanf("%d", &fase[i]);
        }
       for(i = 1; i < qt; i++){
         aux = fase[i - 1] - fase[i]; 
         if (aux > 1 || aux < -1)
			cont++;
        }
        printf("%d", cont);
        return (0);
}
