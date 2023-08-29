#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

        int main(){
            float raio, area;

            printf("Digite o raio do circulo:\n");
            scanf("%f",&raio);
            area = pi * pow(raio,2);
            printf("A area do tringulo é %.2f \n",area);


            return 0;
}      