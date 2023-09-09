#include <stdio.h>






            int main(){
                int i = 1, num, cont_interval = 0,cont_fora = 0;



                do{
                    printf("Digite um numero: ");
                    scanf("%d", &num);
                    if(num > 10 && num < 20){
                        cont_interval++;
                    }
                    else{
                        cont_fora++;
                    }
                    i++;
                }while (i <= 10);
                
                printf("O numero de numeros que estao no intervalo de 10 a 20 são %d \n",cont_interval);
                printf("O numero de numeros que estao fora do intervalo de 10 a 20 são %d \n",cont_fora);

            }