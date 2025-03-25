#include <iostream>

using namespace std;

/* Q: Desenvolver a função INVERTE que recebe um inteiro como parâmetro e retorna este número invertido. Ex: 431 retorna 134, -13 retorna -31.*/

int inverte(int valor)
{

    int valorInvertido = 0;

    if (valor > 0)
    {

        while (valor > 0)
        {

            valorInvertido *= 10;

            valorInvertido += (valor % 10);

            valor /= 10;
        }
    }
    else if (valor == 0)
    {
        return 0;
    }
    else
    {

        valor *= -1;

        while (valor > 0)
        {
            valorInvertido *= 10;

            valorInvertido += (valor % 10);

            valor /= 10;
        }

        valorInvertido *= -1;
    }

    return valorInvertido;
}

int main()
{

    int valor = 0, valorInvertido = 0;

    cout << "Insira o valor a ser invertido: ";
    cin >> valor;

    valorInvertido = inverte(valor);

    cout << "O valor invertido de " << valor << " eh: " << valorInvertido << endl;

    return 0;
}
