//ISABELE DE PAULA ROCHA - 2121963BCC
//EDA - INSERTION SORT

#include <iostream> 
using namespace std;
#define N 10

int main (){

    int i, j, aux, A[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(i=0;i<N;i++){

        for (j=i+1;j>0;j--){

            if (A[j]<A[j-1]){
                aux=A[j];
                A[j]=A[j-1];
                A[j-1]=aux;
            }
        }        
    }

    for (i=0;i<N;i++){
        cout << A[i] << "\t";
    }

    return 0;
}
