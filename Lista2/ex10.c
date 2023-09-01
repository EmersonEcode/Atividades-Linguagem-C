#include <stdio.h>

            
            
            
            
            
            
            
            
            
            
            int main(){
                int idade_dias, anos, meses, dias;


                 
                 printf("Qual é a sua idade em dias?  ");
                 scanf("%d", &dias);
                
                anos = dias / 365 / 12;
                meses = dias / 365;
                printf("A sua idade em dias é %d dias\n", dias);
                printf("A sua idade em meses é %d meses \n", meses);
                printf("A sua idade em anos é %d anos \n", anos);

            }