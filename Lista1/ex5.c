#include <stdio.h>
#include <stdlib.h>
#include <math.h>


        int main(){

            int num1, raiz, elevado;


            printf("digite um numero: ");
            scanf("%d", &num1);

            raiz = sqrt(num1);
            elevado = pow(num1,2);
            printf("a raiz de %d é %d \n e , %d elevado ao quadrado é %d",num1, raiz,num1, elevado);

            return 0;
}
