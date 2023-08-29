#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
       int n1, n2;
       float d1, d2;

            
        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        printf("Digite O segundo numero numero: ");
        scanf("%d", &n2);

        printf("o resultado da soma de %d + %d = %d \n",n1,n2,(n1+n2));
        printf("A subtração de %d - %d = %d \n",n1,n2,(n1-n2));
        printf("A subtração de %d - %d = %d  \n",n2,n1,(n2-n1));
        printf("A multiplicação de %d x %d = %d  \n \n",n1,n2,(n1*n2));
        
        d1 = n1;
        d2 = n2;

        printf("Divisao de %d / %d = %f  \n",n1,n2,(d1 / d2));
        printf("Divisao de %d / %d = %f \n\n ",n2,n1,(d2 / d1));
        
        printf(" o quociente da primeira divisão  é %d \n",n1/n2);
        printf(" o quociente da segunda divisão  é %d\n\n",n2/n1);
        printf("O resto da primeira divisão é = %d\n",n1%n2);
        printf("O resto da primeira divisão é = %d\n\n",n2%n1);




            return 0;
}      