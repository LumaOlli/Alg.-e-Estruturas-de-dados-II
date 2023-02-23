/*Escreva uma função que exibe um retângulo sólido de asteriscos cujos
lados são especificados nos parâmetros inteiros lado1 e lado2.*/

#include <stdio.h>

int main(void){
    int lado1, lado2, x, y;
    printf("Informa a quatidades de linha: ");
    scanf("%d",&lado1);

    printf("Informe a quantidades de coluna: ");
    scanf("%d",&lado2);

    printf("\n");
    
    y = 0;
    while(y < lado1){
        x = 0;
        while(x < lado2){
            printf("*");
            x++;
        }
        printf("\n");
        y++;
    }
}