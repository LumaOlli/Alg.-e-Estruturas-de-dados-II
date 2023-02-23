/*Arvore Binaria*/

#include<stdio.h>
#include<stdlib.h>

struct  mes{
    char *nome;
    unsigned num;
};

struct no{
    mes info;
    struct no *esq;
    struct no *dir;
};


int main(void){
    struct  mes Mes[12];
    Mes[0].nome = (char*) "Janeiro";
    Mes[0].num = 1;
    struct no N[12];
    N[0].info = Mes[0];
    N[0].esq = 0;
    N[0].dir = 0;
    
    Mes[1].nome = (char*) "Fevereiro";
    Mes[1].num = 2;
    N[1].info = Mes[1];

    Mes[2].nome = (char*) "Marco";
    Mes[2].num = 3;
    N[2].info = Mes[2];

    N[0].esq= &N[1];
    N[0].dir= &N[2];

    Mes[3].nome = (char*) "Abril";
    Mes[3].num = 4;
    N[3].info = Mes[3];

    N[1].esq= &N[3];
    N[1].dir= 0;

    Mes[4].nome = (char*) "Maio";
    Mes[4].num = 5;
    N[4].info = Mes[4];

    Mes[5].nome = (char*) "Junho";
    Mes[5].num = 6;
    N[5].info = Mes[5];

    N[4].esq= &N[5];
    N[4].dir= 0;

    Mes[6].nome = (char*) "Julho";
    Mes[6].num = 7;
    N[6].info = Mes[6];

    N[5].esq= &N[6];
    N[5].dir= 0;

    Mes[7].nome = (char*) "Agosto";
    Mes[7].num = 8;
    N[7].info = Mes[7];

    N[3].esq= 0;
    N[3].dir= &N[7];

    Mes[8].nome = (char*) "Setembro";
    Mes[8].num = 9;
    N[8].info = Mes[8];

    N[2].esq= &N[4];
    N[2].dir= &N[8];

    Mes[9].nome = (char*) "Outubro";
    Mes[9].num = 10;
    N[9].info = Mes[9];

    N[8].esq= &N[9];
    N[8].dir= 0;

    Mes[10].nome = (char*) "Novembro";
    Mes[10].num = 11;
    N[10].info = Mes[10];

    N[9].esq= &N[10];
    N[9].dir= 0;

    Mes[11].nome = (char*) "Dezembro";
    Mes[11].num = 12;
    N[11].info = Mes[11];

    N[7].esq= 0;
    N[7].dir= &N[11];


}