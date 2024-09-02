#include <iostream>

using namespace std;

void inverterVetor(int a[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio < fim) {

        int temp = a[inicio];
        a[inicio] = a[fim];
        a[fim] = temp;
        
        inicio++;
        fim--;
    }
}

void imprimirVetor(const int a[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        cout << a[i] << " ";
    }
    cout<<endl;
}

int main() {

    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); 
    
    cout << "Vetor original: ";
    imprimirVetor(vetor, tamanho);

    inverterVetor(vetor, tamanho);
    
    cout << "Vetor invertido: ";
    imprimirVetor(vetor, tamanho);
    
    return 0;
}
