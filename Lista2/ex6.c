#include <stdio.h>



            int main(){
                int cod, quantidade;
                float valor;

            printf("Digite o codigo do produto:");
            scanf("%d", &cod);

            printf("Digite a quantiadade a dever: ");
            scanf("%d",&quantidade);

            switch (cod)
            {
            case 1001:
                valor = quantidade * 5.32;
                printf("O valor total devido é =  %f",valor);              
                break;
            
            case 1324:
                valor = quantidade * 6.45;
                printf("O valor total devido é =  %f",valor);  
                break;
            case 6548:
                valor = quantidade * 2.37;
                printf("O valor total devido é =  %f",valor);
                break;
            case 7623:
            valor = quantidade * 6.45;
            printf("O valor total devido é =  %f",valor);
            break;
            default:
                valor = quantidade * 5.32;
                printf("O valor total devido é =  %f",valor);
                break;
            
            }
            
            }