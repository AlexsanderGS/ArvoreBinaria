#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node {
    struct node *esq;
    int valor;
    struct node *dir;
} Node;

Node *criar(int valor);

Node *inserir(Node *raiz, int novoValor);

Node *remover(Node *raiz, int valorDesejado);

void inOrder(Node *raiz);
/*void preOrder(Node *raiz);*/
/*void posOrder(Node *raiz);*/

void buscar(int valorDesejado);

void remove(int valorDesejado);

#endif // NODE_H_INCLUDED
