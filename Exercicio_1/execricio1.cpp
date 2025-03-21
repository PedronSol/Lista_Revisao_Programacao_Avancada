#include <iostream>

using namespace std;

/*Q: Fazer um programa no qual o usuário vai entrando sucessivamente com valores (números reais) positivos ou nulos. Quando o usuário entrar com um valor negativo,
o programa para de pedir valores e calcula a média dos valores já fornecidos (excluindo o último número negativo)*/

int main()
{

    int n = 0;

    float media = 0;

    int contador = 0;

    while (n >= 0)
    {
        cout << "Insira um valor: " << endl;

        cin >> n;

        if(n>=0){

        media += n;

        contador++;
        }
    }

    media /= contador;

    cout << "A media dos valores fornecidos eh igual a: " << media;

    return 0;
}
