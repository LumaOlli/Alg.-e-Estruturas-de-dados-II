/*Escreva um programa que imprima a soma, a soma dos quadrados e a soma dos cubos de todos os números naturais de 1 até qualquer
número inserido pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i, num ;
    float soma, sQdd, sCb;

    printf("Informe o numero de numeros que voce deseja efetuar o somatorio: \n");
    scanf("%d", &num);

    float valor[num];

    for(i=0; i<num; i++){
        printf("Informe os valores:\n ");
        scanf("%f", &valor[i]);
        soma += valor[i];
    }

    sQdd = soma * 2;
    sCb = soma * 3;

    printf("\tSoma: %.1f\n\tSoma do Quadrado: %.1f\n\tSoma do Cubo: %.1f\n\t", soma, sQdd, sCb);
    return 0;
}