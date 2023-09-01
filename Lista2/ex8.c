#include <stdio.h>






                int main(){
                    int  a, b, c;
                    printf("Digite p primeiro numero: ");
                    scanf("%d", &a);
                    printf("Digite o segundo: ");
                    scanf("%d", &b);
                    printf("Digite o terceiro: ");
                    scanf("%d", &c);

                    if(a > b && b > c){
                        printf("A ordem é decrescente %d, %d,%d",a,b,c);
                    }else if(b > c && b > a){
                        printf("A ordem é decrescente %d, %d,%d",b,c,a);
                    }else if(c > b && c > a){
                        printf("A ordem é decrescente %d, %d,%d",c,b,a);
                    }else if (a < c && b < a){
                        printf("A ordem é decrescente %d, %d,%d",a,c,b);
                    }
            }