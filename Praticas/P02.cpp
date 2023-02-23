/*Códigos básicos de Inserção, remoção e 
Pre-ordem de uma árvore biária*/

#include<stdio.h>
#include<stdlib.h>

struct no{
    int info;
    struct no *esq;
    struct no *dir;
};

struct no *inserir(struct no *raiz, int info){
    struct no *novo = (struct no *)malloc(sizeof(struct no));

    novo->info = info;
    novo->esq = 0;
    novo->dir = 0;

    if(raiz == 0){
        return novo;
    }
    else if(novo ->info < raiz->info){
        raiz ->esq = inserir(raiz->esq, info);
    }
    else if(novo->info > raiz->info){
        raiz->dir = inserir(raiz->dir, info);
    }

    return raiz;
}

struct no *maior(struct no *raiz){
    struct no *aux = raiz;

    while(aux->dir != 0){
        aux = aux->dir;
    }

    return aux;
}

struct no *remover(struct no *raiz, int info){

    if(raiz == 0){
        return raiz;
    }
    else if(info < raiz->info){
        raiz->esq= remover(raiz->esq, info);
    }
    else if(info > raiz->info){
        raiz->dir= remover(raiz->dir, info);
    }
    else{
        if(raiz->esq == 0){
            struct no *aux = raiz->dir;
            free(raiz);
            return aux;
        }
        else if(raiz->dir == 0){
            struct no *aux = raiz->esq;
            free(raiz);
            return aux;
        }

        struct no *aux = maior(raiz->esq);
        raiz->info = aux->info;
        raiz->esq = remover(raiz->esq, aux->info);
    }
    return raiz;
}

void pre_ordem(struct no *raiz){

    if(raiz != 0){
        printf("%d ", raiz->info);

        pre_ordem(raiz->esq);
        pre_ordem(raiz->dir);
    }
}

int main() {
struct no *raiz = 0;


raiz = inserir(raiz, 10);
raiz = inserir(raiz, 20);
raiz = inserir(raiz, 5);
raiz = inserir(raiz, 40);
raiz = inserir(raiz, 35);
raiz = inserir(raiz, 18);
raiz = inserir(raiz, 12);
pre_ordem(raiz);
printf("\n");
raiz = remover(raiz, 35);
pre_ordem(raiz);
printf("\n");
}
