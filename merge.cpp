#include <iostream>
#define n 8
using namespace std;

void intercala (int A[], int inicio, int fim, int meio)
{
    int i, aux[n], posLivre = inicio, inicioA1 = inicio, inicioA2 = meio + 1;

    while (inicioA1 <= meio && inicioA2 <= fim)
    {
        if (A[inicioA1] > A[inicioA2])
        {
            aux[posLivre] = A[inicioA2];
            inicioA2++;
        }
        else
        {
            aux[posLivre] = A[inicioA1];
            inicioA1++;
        }
        posLivre++;
    }

    for (i = inicioA1; i <= meio; i++)
    {
        aux[posLivre] = A[i];
        posLivre++;
    }

    for (i = inicioA2; i <= fim; i++)
    {
        aux[posLivre] = A[i];
        posLivre++;
    }

    for (i = inicio; i <= fim; i++)
    {
        A[i] = aux[i];
    }

}

void mergesort (int A[], int inicio, int fim)
{
    int meio;
    if(inicio < fim) //dividir o array recursivamente
    {
        meio = (inicio + fim)/2;
        mergesort(A, inicio, meio);
        mergesort(A, meio+1, fim);
        intercala(A, inicio, fim, meio);
    }
}


int main ()
{
    int A[n], i;

    for (i=0; i<n; i++)
    {
        cout << "Entre com o " << i+1 << " numero: " ;
        cin >> A[i];
    }
    mergesort(A, 0, 7);

    for (i=0; i<n; i++){
    cout << A[i] << "\t";
    }
}