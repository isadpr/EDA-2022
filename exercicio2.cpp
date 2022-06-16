//SLIDE 1
//exercicio 2
//letra a
//metodo utilizado: insertion sort
#include <iostream>
#define n 15
using namespace std;

int main (){
    int i,j,aux,A[15];
    int soma=0;

    for (i=0; i<n; i++){
        cout << "Insira os valores dos salarios dos funcionarios: ";
        cin >> A[i];
    }

    for (i=0; i<n-1;i++){
        int menor=i;
        for (j=i+1; j<n; j++){
            if (A[menor]<A[j]){
                menor=j;
            }
        }
    aux=A[i];
    A[i]=A[menor];
    A[menor]=aux;
    }

    for (i=0; i<n; i++){
        cout << A[i] << "\t";
        soma=soma+A[i];
    }

    cout << endl; 
    cout << "A soma dos salarios dos funcionarios e: " << soma << "\n";
}

