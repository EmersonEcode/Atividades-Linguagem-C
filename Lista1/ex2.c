#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main(){
        
            float n1, n2 , n3;

            printf("Digite a primeira nota: ");
            scanf("%f",&n1);
            printf("Digite a segunda nota: ");
            scanf("%f",&n2);
            printf("Digite a terceira nota: ");
            scanf("%f",&n3);

            printf("a media do aluno = %.1f", (n1+n2+n3)/3);
            return 0;
}      