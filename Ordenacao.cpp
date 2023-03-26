#include <iostream>
using namespace std;

void BubbleSort(int vet[], int n)
{
    int aux1;
    int comparacoes = 0, trocas = 0;
    for (int c = n - 1; c != 0; c--)
        for (int i = 0; i < c; i++)
        {
            comparacoes++;
            if (vet[i] > vet[i + 1])
            {
                aux1 = vet[i + 1];
                vet[i + 1] = vet[i];
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

void SelectSort(int vet[], int n)
{
    int aux1, minimo, i;
    int comparacoes = 0, trocas = 0;
    for (int c = 0; c < n - 1; c++)
    {
        minimo = c;
        for (i = c + 1; i < n; i++)
        {
            comparacoes++;
            if (vet[minimo] > vet[i])
                minimo = i;
        }
        aux1 = vet[minimo];
        vet[minimo] = vet[c];
        vet[c] = aux1;
        trocas++;
    }
    cout << "---------------------------------------------------" << endl;
    cout << "Metodo SelectSort: " << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl
         << "Numero de comparacoes: " << comparacoes << " ---- Numero de trocas: " << trocas << endl;
    cout << "---------------------------------------------------" << endl;
}

void InsertShort(int vet[], int n)
{
    int pivo, i;
    int comparacoes = 0, trocas = 0;
    for (int c = 1; c < n; c++)
    {
        pivo = vet[c];
        i = c - 1;
        comparacoes++;
        while (i >= 0 && vet[i] > pivo)
        {
            vet[i + 1] = vet[i];
            i--;
            trocas++;
        }
        vet[i + 1] = pivo;
    }
    cout << "---------------------------------------------------" << endl;
    cout << "Metodo InsertShort: " << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl
         << "Numero de comparacoes: " << comparacoes << " ---- Numero de trocas: " << trocas << endl;
    cout << "---------------------------------------------------" << endl;
}

void MergeShort(int vet[], int n)
{

    
}

int main()
{
    int vet[] = {2, 1, 3, 4, 200, -2, -5, -88};
    int n = 8;
    cout << "Antes da ordenacao:" << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl;
    BubbleSort(vet, n);
    int vet2[] = {2, 1, 3, 4, 200, -2, -5, -88};
    SelectSort(vet2, n);
    int vet3[] = {2, 1, 3, 4, 200, -2, -5, -88};
    InsertShort(vet3, n);
    int vet4[] = {2, 1, 3, 4, 200, -2, -5, -88};
    cout << endl;
    return 0;
}