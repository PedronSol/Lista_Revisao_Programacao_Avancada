#include <iostream>

using namespace std;

const int MAX = 30;

/* Q: Crie uma função que receba como parâmetro um array de float, definido de tal forma que o último número seja zero. Esta função deve retornar a diferença entre a média dos números contidos nesse array e o menor dos números, não contando com o zero final. Exemplo: (1, 7, 4, 0); Média: 4; Menor: 1; Retorno = média - menor = 3;*/

float retornaMedia(float array[], int n){

    float media = 0, diferenca = 0, menorValor = array[0];

    int i;

    for(i = 0; i < n-1; i++){
        if(array[i] < menorValor){
            menorValor = array[i];
        }

        media += array[i];
    }

    media /= i;

    cout << "Media: " << media << endl;

    cout << "Menor valor: " << menorValor << endl;

    diferenca = media - menorValor;

    return diferenca;
}

int main()
{

    int n;

    cout << "Insira o tamanho do vetor: ";
    cin >> n;

    float array[MAX], diferenca = 0;

    for(int i = 0; i < n - 1; i++){
        cout << "Insira o " << i+1 << " valor do array: ";
        cin >> array[i];
    }

    array[n - 1] = 0;

    diferenca = retornaMedia(array, n);

    cout << "A diferenca entre a media dos valores do array e o menor valor eh: " << diferenca << endl;

    return 0;
}
