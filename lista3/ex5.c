#include <stdio.h>
#include <string.h>





                int main(){
                    int idade = 1, maior_idade, contsexo = 0, contidade = 0;
                    char sexo, olhos[11], cabelos[11];

                    printf("Pesquisa de Habitantes suas caracteristicas\n");

                    while (1)
                    { 
                        printf("Digite sua Idade: ");
                        scanf("%d",&idade);
                        if (idade < 0){break;}

                         if(idade > maior_idade){
                            maior_idade = idade;
                        }
                        
                        printf("Digite seu Sexo: ");
                        scanf(" %c", &sexo);

                        printf("Digite a cor dos seus cabelos: ");
                        scanf("%11s", &cabelos);
                        
                        printf("Digite a cor dos seus olhos: ");
                        scanf("%11s", &olhos);

                        if(idade >= 18 && idade <= 35 && sexo == 'F' && strcmp(cabelos, "louro") == 0 && strcmp(olhos, "verdes") == 0){
                            contsexo++;
                            }
                        
                    }
                    printf("A maior idade dos habitantes: %d \n",maior_idade);
                    printf("A quantidade de mulheres com idade entre 18 a 35 que tenha olhos verdes e cabelo louros são = %d \n\n", contsexo);
                    return 0;
                }