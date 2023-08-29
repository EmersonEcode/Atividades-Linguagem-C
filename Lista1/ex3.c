#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
            float deposito,juros, rd;
            printf("Digite o Valor do deposito:");
            scanf("%f", &deposito);
            printf("Digite o Valor do juros:");
            scanf("%f", &juros);
            rd = (juros / 100)*deposito;
            
            printf("O valor do rendimento é %.2f e o valor total depois do redimento é %.2f ",rd, rd + deposito);

            return 0;
}      