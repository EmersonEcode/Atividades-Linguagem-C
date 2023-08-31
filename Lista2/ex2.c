#include <stdio.h>






            int main(){
                int a, b, m;

                printf("Digite o maior valor: ");
                scanf("%d", &a);
                printf("Digite o menor valor: ");
                scanf("%d", &b);

                if(a % b == 0){

                    printf("São multiplos.");

                }else{
                    printf("Não São multiplos.\n\n");
                }
            }
