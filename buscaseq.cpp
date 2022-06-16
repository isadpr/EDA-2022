#include <iostream>
using namespace std;

void sequencial (int A[], int x)
{
    bool achei = false;
    int i = 0;
    
    while (!achei && i<10) // achei = 0
    {
        if(A[i] == x)
        {
            achei = true; // achei = 1
        }

        else i++;
            
    }
    
    if (achei == true)
    {
        cout << "Elemento encontrado na posicao: " << i+1 << endl;
    }
    else 
    {
        cout << "Elemento nao encontrado em nenhuma posicao." << endl;
    }
}


int main()
{ 
    int num, A[10] = {88, 56, 14, 5, 1, 22, 6, 17, 13, 66};
    cout << "Insira o elemento a ser buscado: ";
    cin >> num;
    sequencial(A, num);

}