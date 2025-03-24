#include <iostream>

using namespace std;

/* Q: Descrever o que faz o programa e dizer o resultado caso o usuário digite 3 e 4 */

/* R: O programa lê do usuário 2 números (i1 e i2) e cria duas variáveis (j e k). A variável j é inicializada com 0 e k é inicializada com o valor de i2. Enquanto a variável k for maior do que zero, será incrementado a j o valor de i1 e, depois disso, será decrescido de k o valor de uma unidade, ou seja, será acrescido o valor de i1 a j i2 vezes. Em linhas gerais, o programa resulta no produto de i1 por i2. Dessa forma, o resultado do programa caso o usuário digite 3 e 4 será 12.*/

int main(void)
{
    int i1, i2, j, k;
    cout << "Informe dois números: ";
    cin >> i1;
    cin >> i2;
    j = 0;
    k = i2;
    while (k > 0)
    {
        j += i1;
        k--;
    }
    cout << "\nResultado: " << j << endl;
    return 0;
}