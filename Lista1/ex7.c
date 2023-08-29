#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
            float area, base, altura;

            printf("Digite a base do tringulo:\n");
            scanf("%f",&base);
            printf("Digite a altura do tringulo:\n");
            scanf("%f",&altura);

            area = (base * altura)/ 2;
            printf("A area do tringulo é %.1f \n",area);


            return 0;
}      