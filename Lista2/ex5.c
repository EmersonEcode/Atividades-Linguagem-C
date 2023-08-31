#include <stdio.h>
#include <stdlib.h>




            int main(){
                float altura;
                char sexo;

                printf("Digite seu sexo (M para masculino /F para feminino): ");
                scanf("%c", &sexo);
                printf("Digite sua altura: ");
                scanf("%f", &altura);

                

                switch (sexo)
                {
                case 'm':
                    printf("Seu peso ideal e = %.1f",(72.7*altura)-58);
                    break;
                
                default:
                    printf("Seu peso ideal e = %.2f",(62.1*altura)-44.7);
                    break;
                }
            }
            