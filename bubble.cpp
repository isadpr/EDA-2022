#include <iostream>
#define n 10
using namespace std;

int main()
{
    int A[10], i, j, aux;

for (i=0; i<n; i++)
{
    cout <<"Digite o valor:";
    cin >> A [i];
}

for (i=0; i<n-1; i++)
{
    for(j=i+1; j<n; j++)
    {
       if(A[i]> A[j])
       {
            aux= A[i];
            A[i]= A[j];
            A[j]= aux;
       }
    }
}

for (int i = 0; i < n; i++)
{
    cout << A[i] << "\t";
}

}