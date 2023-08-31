#include <stdio.h>









                int main(){
                    int idade;

                    printf("Digite sua idade:  ");
                    scanf("%d", &idade);


                    if(idade >= 5 && idade <= 7){
                        printf("Infanto A");
                    }
                    else if(idade <= 10){
                        printf("Infanto B");
                    }else if(idade <= 13){
                        printf("Juvenil A");
                    }else{
                        printf("Juvenil B");
                    }
                }