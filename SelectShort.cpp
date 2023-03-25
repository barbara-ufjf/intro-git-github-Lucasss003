#include <iostream> 
using namespace std;

void SelectSort(int vet[], int n)
{
    int aux1, minimo,i;
    int comparacoes = 0, trocas = 0;
    for (int c = 0; c < n; c++)
    {
        minimo = c;
        for (i = c+1 ; i < n; i++)
        {
            comparacoes++;
            if (vet[minimo] > vet[i])
                minimo = i;
        }
        if(minimo != c)
        {
            aux1 = vet[minimo];
            vet[minimo] = vet[c];
            vet[c] = aux1;
            trocas++;
        }
    }
    cout << "---------------------------------------------------" << endl;
    cout << "Metodo SelectSort: " << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl
         << "Numero de comparacoes: " << comparacoes << " ---- Numero de trocas: " << trocas << endl;
    cout << "---------------------------------------------------" << endl;
}

int main()
{
    int vet[] = {2, 1, 3, 4, 0, -2, -5, 35};
    int n = 8;
    cout << "Antes da ordenacao:" << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl;
    SelectSort(vet, n);
    cout << endl;
    return 0;
}