#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
            float salario, ir;

            printf("Digite seu salario: ");
            scanf("%f",&salario);
            ir = salario * 0.05;
            printf("O imposto de renda a ser pago é %.2f R$",ir);
            return 0;
}      