#include <iostream>
#define T 7
using namespace std;

void binaria (int A[], int x, int inicio, int fim){
    int meio=(inicio+fim)/2;
    bool achei = false;

    if(x==A[meio]){
        achei=true;
    }
    else{
        if(x<A[meio]){
            binaria(A,x,inicio,meio);
        }
        else{
            binaria(A,x,meio+1,fim);
        }
    }
}

int main (){
    int num, A[7]={15,30,25,12,50,10,9};
    cout << "Insira o numero a ser buscado: ";
    cin >> num;
    binaria(A,num,0,T);
}