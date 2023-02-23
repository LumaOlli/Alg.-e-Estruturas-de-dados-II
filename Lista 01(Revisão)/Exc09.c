/*Escreva um programa para converter e imprimir os caracteres
para os valores ASCII de 0 a 127. O programa deve imprimir 10 caracteres
por linha.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    char ch;

    printf("\nDigite os caracteres: ");
    scanf("%c", &ch);
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);

    return 0;
}