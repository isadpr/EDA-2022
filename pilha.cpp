#include <iostream>
#include <cstddef> //NULL
using namespace std;

struct No {
    int info;
    struct No * prox; //ponteiro para o proximo nó
};

typedef struct No * noPtr; //apelido para as estruturas nó
noPtr topo = NULL; //ponteiro para o nó no topo

bool listaVazia(){
    return (topo==NULL); //lista vazia(verdadeiro)->retorna 1 //lista cheia(falso)->retorna 0
}

void push(){ //inserir
    noPtr p;
    int valor;

    p=new No; 
    cout << "Digite o valor do elemento: ";
    cin >> valor;
    p->info=valor; // seta pq é ponteiro
    p->prox=topo;
    topo=p;
}

void pop(){ //remover
    noPtr p=topo; //nó temporario
    if(!listaVazia()){
        topo=topo->prox;
        delete(p);
        cout <<"\nO elemento foi retirado da pilha." << endl;
    }
    else{ 
    cout << "\nLista vazia!" << endl;
    }
}

void listar(){
    noPtr p=topo;
    while(p!=NULL){
        cout << p->info << "\t";
        p=p->prox;
    }
    cout << endl;
}

void menu(){
    int opcao;
    cout << "========MENU========\nInsira o numero de acordo com o que deseja fazer:\n";
    cout << "0 - Fechar programa.\n";
    cout << "1 - Adicionar um elemento no topo da lista.\n";
    cout << "2 - Remover um elemento do topo da lista.\n";
    cout << "3 - Listar todos os elementos.\n";

    do{
        cin >> opcao;
        switch(opcao){    
            case 1: push(); break;
            case 2: pop(); break;
            case 3: listar(); break;
        }
    }
    while (opcao!=0);
}

int main (){
    menu();
}
