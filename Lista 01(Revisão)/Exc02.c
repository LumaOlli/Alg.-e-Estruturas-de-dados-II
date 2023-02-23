/*Escreva um programa que converta temperaturas de 30 oC a
50 oC para a escala Fahrenheit espaçados de 1
oC. O programa deve imprimir
uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
F = C + 32]*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float i, F=0;

    for(i=30; i<=50; i++){
        printf("%.0f C = %.2f F \n", i, F = (i*9/5)+32);
    }
    return 0;
}