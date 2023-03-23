#include <iostream>
using namespace std;

float *BubbleSort(float vet[], int n)
{
    int aux1;
    for (int c = 0; c < n; c++)
        for (int i = c + 1; i < n; i++)
            if (vet[c] > vet[i])
            {
                aux1 = vet[c];
                vet[c] = vet[i];
                vet[i] = aux1;
            }
    return vet;
}

int main()
{
    float vet[] = {2, 1, 3, 4, 0};
    int n = 5;
    cout << "impressao antes da ordenacao:" << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl;
    BubbleSort(vet, n);
    cout << "depois da ordenacao:" << endl;
    for (int c = 0; c < n; c++)
        cout << vet[c] << " ";
    cout << endl;
    return 0;
}