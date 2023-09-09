#include <stdio.h>










            int main(){
                float num;
                int cont_interval1 = 0, cont_interval2 = 0,cont_interval3 = 0,cont_interval4 = 0;



                do{
                    printf("Digite um numero (ou um numero negativo para sair): ");
                    scanf("%f", &num);
                    if(num < 0){
                        break;
                    }
                    if(num <= 25){
                        cont_interval1++;
                    }else if(num <= 50){
                        cont_interval2++;
                    }else if(num <= 75){
                        cont_interval3++;
                    }else if(num <= 100){
                        cont_interval4++;
                    }
                    

                }while (1);
                printf("quantidade de numeros no intervalo [1,25] = %d , [26,50] = %d , [51,75] = %d, [76,100] = %d \n",cont_interval1,cont_interval2,cont_interval3,cont_interval4);
            }