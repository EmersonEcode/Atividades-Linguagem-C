#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
           float fracao, area, base_menor,base_maior,altura;

            printf("Digite o comprimento da base menor: ");
            scanf("%f", &base_menor);

            printf("Digite o comprimento da base maior: ");
            scanf("%f", &base_maior);
            printf("Digite a altura: ");
            scanf("%f", &altura);
        
            fracao = 1.0 / 2.0;
            area = fracao * (base_menor + base_maior) * altura;
            
            printf("A are do Trapezio é %.2f\n",area);
            return 0;
}      