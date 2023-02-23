/*Escreva um programa que leia uma série de pares de números da seguinte
forma: Número do produto e Quantidade vendida por um dia. Seu programa
deve usar uma instrução switch para ajudar a determinar o preço de varejo
de cada produto. Seu programa deve calcular e exibir o valor total de varejo
de todos os produtos vendidos na semana passada.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

    int Opcao, P1, R1=0, P2, R2=0, P3, P4, P5, R5=0;
    float   R3=0,  R4=0;

    printf("Nº do produto |  Preco do Produto\n");
    printf("    1         |         R$ 3,00  \n");
    printf("    2         |         R$ 4,00  \n");
    printf("    3         |         R$ 2,80  \n");
    printf("    4         |         R$ 1,95  \n");
    printf("    5         |         R$ 5,00  \n");
    printf("\n");

    printf("Informe o numero do produto:\n");
    scanf("%d", &Opcao);

    switch (Opcao){
        case 1:
        printf("Informe quantos produto foram comprado:\n");
        scanf("%d", &P1);
        R1 = P1 * 3;
        printf("O valor do seu produto  eh %d\n", R1);
        break;
    
        case 2: 
        printf("Informe quantos produto foram comprado:\n");
        scanf("%d", &P2);
        R2 = P2 * 4;
        printf("O valor do seu produto  eh %d\n", R2);  
        break;


        case 3:
        printf("Informe quantos produto foram comprado:\n");
        scanf("%d", &P3);
        R3 = P3 * 2.80;
        printf("O valor do seu produto  eh %.2f\n", R3);  
        break;

        case 4:
        printf("Informe quantos produto foram comprado:\n");
        scanf("%d", &P4);
        R4 = P4 * 1.95;
        printf("O valor do seu produto  eh %.2f\n", R4);  
        break;

        case 5:
        printf("Informe quantos produto foram comprado:\n");
        scanf("%d", &P5);
        R5 = P5 * 5;
        printf("O valor do seu produto  eh %d\n", R5);  
        break;
    default:
        break;
    }

    printf("Tenha um bom dia!");
    return 0;
}