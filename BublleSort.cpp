#include <iostream>
using namespace std;

void BubbleSort(float vet[], int n)
{
    int aux1;
    int comparacoes = 0, trocas = 0;
    for (int c = 0; c < n; c++)
        for (int i = c + 1; i < n; i++)
        {
            comparacoes++;
            if (vet[c] > vet[i])
            {
                aux1 = vet[c];
                vet[c] = vet[i];
                vet[i] = aux1;
                trocas++;
            }
        }
    cout << "---------------------------------------------------" << endl;
    cout << "Metodo BubbleSort: " << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl
         << "Numero de comparacoes: " << comparacoes << " ---- Numero de trocas: " << trocas << endl;
    cout << "---------------------------------------------------" << endl;
}

int main()
{
    float vet[] = {2, 1, 3, 4, 0};
    int n = 5;
    cout << "Antes da ordenacao:" << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl;
    BubbleSort(vet, n);
    cout << endl;
    return 0;
}