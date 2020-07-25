#include <stdio.h>

int main()
{
    int n1, n2;
    char op;
    scanf("%d\n %d\n %c\n", &n1, &n2, &op);
   if (op == '+'){
        printf("%d\n", n1 + n2);}
        else
        if (op == '-'){
           printf("%d\n", n1 - n2);}
          else
        if (op == '*'){
            printf("%d\n", n1 * n2);}
        else
        if ((op == '/') && (n2 != 0)){
           printf("%d\n", n1 / n2);}
       else
            {printf("invalida");}
}