#include <stdio.h>







            int main(){
                int i;
                float a, b, c;

                printf("Digite um numero de 1 a 3 sendo (1 numeros na ordem crescente, 2 na ordem decrescente,3 o numero do meio é o maior entre os outros dois): ");
                scanf("%d", &i);
                printf("Digite p primeiro numero: ");
                scanf("%f", &a);
                printf("Digite o segundo: ");
                scanf("%f", &b);
                printf("Digite o terceiro: ");
                scanf("%f", &c);

                if(i == 1){
                    if(a < b && b < c){
                        printf("A ordem é crescente %.1f, %.1f,%.1f",a,b,c);
                    }else if(b < c && b < a){
                        printf("A ordem é crescente %.1f, %.1f,%.1f",b,c,a);
                    }else if(c < b && c < a){
                        printf("A ordem é crescente %.1f, %.1f,%.1f",c,b,a);
                    }else if (a > c && b > a){
                        printf("A ordem é crescente %.1f, %.1f,%.1f",a,c,b);
                    }
                    }else if(i == 2){
                        if(a > b && b > c){
                        printf("A ordem é decrescente %.1f, %.1f,%.1f",a,b,c);
                    }else if(b > c && b > a){
                        printf("A ordem é decrescente %.1f, %.1f,%.1f",b,c,a);
                    }else if(c > b && c > a){
                        printf("A ordem é decrescente %.1f, %.1f,%.1f",c,b,a);
                    }else if (a < c && b < a){
                        printf("A ordem é decrescente %.1f, %.1f,%.1f",a,c,b);
                    }
                    }else{
                        if(a > b && b > c){
                        printf("o maior numero esta entre os dois %.1f, %.1f,%.1f",b,a,c);
                    }else if(b > c && b > a){
                        printf("o maior numero esta entre os dois %.1f, %.1f,%.1f",a,b,c);
                    }else if(c > b && c > a){
                        printf("o maior numero esta entre os dois %.1f, %.1f,%.1f",a,c,b);
                    }else if (a < c && b < a){
                        printf("o maior numero esta entre os dois %.1f, %.1f,%.1f",b,c,a);
                    }
                    }
                
            }
                
            
            