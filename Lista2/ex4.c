#include <stdio.h>





            int main(){
                int codigo, quantidade;
                float valor;




                printf("digite o codigo  do  item: ");
                scanf("%d",&codigo);

                printf("Digite a quantidade do item: ");
                scanf("%d", &quantidade);

                if(codigo == 100 || codigo == 103){
                    valor = quantidade * 1.20;
                    printf("O valor a pagar é %.2f",valor);
                }else if(codigo == 101 || codigo == 104 ){
                    valor = quantidade * 1.30;
                    printf("O valor a pagar é %.2f",valor);
                }
                else if(codigo == 102){
                    valor = quantidade * 1.50;
                    printf("O valor a pagar é %.2f",valor);
                }
                else if(codigo == 105){
                    valor = quantidade * 1.00;
                    printf("O valor a pagar é %.2f",valor);
                }
            }
