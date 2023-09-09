#include <stdio.h>





                int main(){
                    int numero_filhos, cont_pop = 0, cont_filhos = 0;
                    float salario = 1, percent,maior_salario,media_salario,cont_percent = 0;


                    while(1){
                        printf("Digite o salário (digite um valor negativo para sair para o resultado): ");
                        scanf("%f", &salario);
                        if(salario < 0){break;}
                        if(salario > maior_salario){
                            maior_salario = salario;
                        }
                        printf("Digite o numero de filhos: ");
                        scanf("%d", &numero_filhos);
                        
                        cont_pop++;
                        cont_filhos += numero_filhos;

                            media_salario += salario;
                        
                        

                        if(salario <= 100){
                            cont_percent++;
                        }
                        
                    }

                    printf("A media de salario da população População é = %g R$\n", media_salario/cont_pop);
                    printf("A media de filhos da população é = %d \n",cont_filhos/cont_pop);
                    printf("O maior salário é %g R$\n",maior_salario);
                    percent = (cont_percent/cont_pop)*100;
                    printf("o percentual de pessoa que recebem até 100R$ = %.2f%\n\n",percent);

                }