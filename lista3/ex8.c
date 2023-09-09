#include <stdio.h>








            int main(){
                int num, cont = 0,cont_num, media;


                for(num = 13; num < 73; num++){
                    cont_num += num;
                    cont++;
                }

                printf("A media dos numeros somados de 13 a 73 é %d\n",cont_num/cont);
            }