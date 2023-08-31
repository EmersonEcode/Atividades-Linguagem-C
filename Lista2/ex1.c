#include <stdio.h>







            int main(){
                int a, b, c;

                printf("Digite o valor a:");
                scanf("%d",&a);

                printf("Digite um valor b:");
                scanf("%d",&b);

                 printf("Digite o valor c: ");
                scanf("%d",&c);


                if(a > b && a > c){
                    printf("%d é o maior",a);
                }
                else if(b > c){
                    printf("%d é o maior",b);
                }else{
                    printf("%d é o maior \n",c);
                }


            }