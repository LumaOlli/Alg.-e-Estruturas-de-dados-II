/*Escreva um programa para calcular e imprimir a soma de todos
os múltiplos de 7 partindo de 1 até 100.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i;

    printf("Os multiplos de 7 sao:\n ");
    for(i=7; i<=100; i+=7){
        printf("%d\n", i);
    }
    return 0;
}