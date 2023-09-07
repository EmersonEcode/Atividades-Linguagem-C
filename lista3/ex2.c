#include <stdio.h>






            int main(){
                int n1,n2,n3,contagem;
                float media,soma;
               while(1){
                printf("Digite o primeiro numero: ");
                scanf("%d", &n1);
                if(n1 == 0){
                    break;
                }
                
                if(n1 % 2 == 0){
                soma += n1;
                contagem += 1;
                }



                if(contagem > 0){
                    media = soma/contagem;
                    printf("os numeros são pares e a media é %g\n",media);
                }else{
                    printf("os numeros não são pares \n");
                }
               }
            }
