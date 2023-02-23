/*Escreva um programa para calcular e imprimir uma lista de
todos os números primos de 1 a 100.*/

#include<stdio.h>
#include<stdlib.h>

int Primo(int l){
    int i, divisor = 0;
    for(i=1; i<=l; i++){
        if(l % i == 0){
            divisor++;
        }
    }
    if(divisor==2){
        return 1;
    } else{
        return 0;
    }
}

int main(void){
    int i;

    for(i=1; i<=100; i++){
        if (Primo(i) == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}