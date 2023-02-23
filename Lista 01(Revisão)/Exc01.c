/*Escreva um programa para somar uma sequência de inteiros e
calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
o número de valores a serem inseridos. Seu programa deve ler apenas um
valor cada vez que scanf é executado. Uma sequência de entrada típica pode
ser:*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, valores[num];
    int i, soma=0;
    float media=0;

    printf("Informe quantos numeros voce deseja informar: \n");
    scanf("%d",&num);

    printf("\nInforme valores maiores que zero\n");

    for(i=0 ; i<num ; i++){
        printf("Informe os valores:\n ");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    media = soma/num;
    printf("A media dos valores e igual %.1f\n", media);
    printf("A soma dos valores e igual %d\n", soma);
    return 0;
}