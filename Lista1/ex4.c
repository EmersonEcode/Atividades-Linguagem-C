#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
            float num;
            int inteiro;


            printf("Digite um número: ");
            scanf("%f", &num);
            inteiro = num;
            printf("A parte inteira do numero é %d\n", inteiro);
            printf("A parte fracionaria é %f\n",num);
            printf("Arredondado %.f\n\n",num);

            return 0;

}      