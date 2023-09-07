#include <stdio.h>






            int main(){
               float media,n1,n2,n3;
               int aluno = 1;
               while(aluno > 0){
                printf("Digite o codigo: ");
                scanf("%d", &aluno);
                if(aluno == 0){
                    break;
                }
                printf("Digite a primeira nota do aluno: ");
                scanf("%f", &n1);
                printf("Digite a primeira nota do aluno: ");
                scanf("%f", &n2);
                printf("Digite a primeira nota do aluno: ");
                scanf("%f", &n3);
                media = (n1+n2+n3)/3;
                printf("A media do aluno é = %.2f \n",media);
                
               }


            




            }