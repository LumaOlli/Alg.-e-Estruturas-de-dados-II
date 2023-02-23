/*Uma aplicação interessante de computadores é desenhar gráficos e gráficos de barras. 
Escreva um programa que leia cinco números (cada 2 um entre 1 e 30). Para cada número lido, 
seu programa deve imprimir uma linha contendo aquele número de asteriscos adjacentes. 
Por exemplo, se seu programa lê o número sete, ele deve imprimir ∗ ∗ ∗ ∗ ∗ ∗ ∗.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int i, S=0,  num;

    printf("Informe um numero ente 1 e 30: ");
    scanf("%d", &num);

    while(S < num){
        printf("*");
        S++;
    }
    return 0;
}