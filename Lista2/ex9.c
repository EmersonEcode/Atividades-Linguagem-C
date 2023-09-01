#include <stdio.h>









            int main(){
                int idade_dias, anos, meses, dias;


                 printf("Qual é a sua idade em anos?  ");
                 scanf("%d", &anos);
                 printf("Qual é a sua idade em meses?  ");
                 scanf("%d", &meses);
                 printf("Qual é a sua idade em dias?  ");
                 scanf("%d", &dias);
                
                idade_dias = meses * 365;
                printf("A sua idade em dias é %d dias", idade_dias);

            }