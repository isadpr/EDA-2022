#include <iostream>
using namespace std;

struct no{
    int info;
    struct no * prox;
};

typedef struct no * noPtr;
noPtr topo = NULL;

bool listaVazia(){
    return (topo==NULL); //lista vazia(verdadeiro)->retorna 1 //lista cheia(falso)->retorna 0
}

void enqueue(){ //enfileirar
    noPtr aux, p=new no;
    cout << "\nDigite o valor do elemento: ";
    cin >> p->info;
    p->prox=NULL;
    if(listaVazia()){
        topo=p;
    }
    else{
        aux=topo;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=p;
    }
}

void dequeue(){ //desenfileirar
    noPtr p;
    if(listaVazia()){
        cout<<"\nFila Vazia!";
    }
    else{
        p=topo;
        topo=p->prox;
        delete p;
        cout << "\nO elemento foi retirado da fila!\n";
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

int main(){
    int op;
    do{
        cin>>op;
        switch(op){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: listar(); break;
        }
    }
    while (op!=0);
}