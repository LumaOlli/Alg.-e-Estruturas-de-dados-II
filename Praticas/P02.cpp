/*Códigos básicos de Inserção, remoção e 
Pre-ordem de uma árvore biária*/

#include<stdio.h>
#include<stdlib.h>

struct no{  /*estrutura no*/
    int info;
    struct no *esq;
    struct no *dir;
};

/*Estrutura para ordenação por inserção(Sort), que consistem em percorrer
um vetor de elementos da esquerda para direita e a medida que avança vai
ordenando os valores para a esquerda.*/
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

/*Nestas linhas o codigo vai fazer visualizacao de arvores binarias, 
do tipo percurso de Pre-Ordem, onde primeiro ira percorrer as raizes e depois 
as folhas e Esq->Dir, em aspectos de uma arvore, por isso, 
que tal sequencia fica {10,5,20,18,12,40,35}.*/
struct no *maior(struct no *raiz){
    struct no *aux = raiz;

    while(aux->dir != 0){
        aux = aux->dir;
    }

    return aux;
}

/*A estrutura irá percorrer os vetores já ordenados e 
fazendo a comparação para fazer a remocao do numero informado, 
sem fazer modificar o lugar dos outros numeros.*/
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

/*Estrutura para imprimir a sequencia já ordenada*/
void pre_ordem(struct no *raiz){

    if(raiz != 0){
        printf("%d ", raiz->info);

        pre_ordem(raiz->esq);
        pre_ordem(raiz->dir);
    }
}

/*Função principal, a estrutura é utilizada para fazer a 
organização das outras funções e com isso apresentar o resulto final*/
int main() {
    struct no *raiz = 0;

    /*registrar numeros para a sequencia*/
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 35);
    raiz = inserir(raiz, 18);
    raiz = inserir(raiz, 12);
    pre_ordem(raiz);    /*imprimir sequencia definida*/
    printf("\n");
    raiz = remover(raiz, 35);  /*caso queremos trocar o numero 35 por outro que nao exista, nao mudara a sequencia*/
    pre_ordem(raiz);    /*imprimir sequencia redefinida*/
    printf("\n");

    return 0;
}
