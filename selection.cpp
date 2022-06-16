#include <iostream>
#define n 5
using namespace std;

int main (){
    int i, j, aux, A[5];

    for(i=0; i<n; i++){
        cout << "Digite um valor: ";
        cin >> A[i];
    }
    

    for (i=0; i<n-1; i++){
        int menor=i;

        for (j=i+1; j<n; j++){
            if (A[menor]>A[j]){
                menor=j;
            }
        }

        aux=A[i];
        A[i]=A[menor];
        A[menor]=aux;
    }

    for(i=0; i<n; i++){
        cout << A[i] << "\t";
    }

}