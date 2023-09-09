#include <stdio.h>






            int main(){
                char sexo;
                int i,idade,maior_idade = -1,menor_idade = 100,quant_salarioF,contF = 0;
                float salario,total_salario;
                

                for(i = 0;i <= 3;i++){

                     
                     printf("Digite o seu Sexo (M/F): ");
                     scanf(" %c", &sexo);
                     if(sexo == 'F' && salario <= 100){
                        contF++;
                     }
                     

                     printf("Digite sua idade: ");
                     scanf("%d", &idade);

                    if(idade > maior_idade){
                        maior_idade = idade;
                    }
                    

                   if(idade < menor_idade){
                        menor_idade = idade;
                   }
                    
                    
                  
                     printf("Digite seu salário: ");
                     scanf("%f", &salario);

                   
                    
                    total_salario += salario;
                    
                    

                }
                    printf("A media de salário do grupo é %g \n",total_salario/i);
                    printf("A quantidade de mulheres que recebem até 100 é: %d \n",contF);
                    printf("A maior idade do grupo é: %d \n",maior_idade);
                    printf("A menor idade do grupo é: %d \n",menor_idade);

                
            }