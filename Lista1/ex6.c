#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
        int idade, meses, dias, horas;

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        meses = idade * 12;
        dias = meses * 30;
        horas = dias * 24;
        printf("Voce tem %d anos %d meses % d dias e %d horas",idade,meses,dias,horas);
            return 0;
}      