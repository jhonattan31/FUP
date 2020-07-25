#include <stdio.h>
int main()
{
    int ap, pri, seg, v1, v2;
    scanf("%d\n%d\n%d\n", &ap, &pri, &seg);
    v1 = pri - ap;
    v2 = seg - ap;
    if (v1 < 0)
      v1 = v1 * (-1);
      if (v2 < 0)
      v2 = v2 * (-1);
      
     if (v1 > v2){
        printf("segundo");}
        
     else if (v2 > v1){
        printf("primeiro");}
    else 
        {printf("empate");}
    }