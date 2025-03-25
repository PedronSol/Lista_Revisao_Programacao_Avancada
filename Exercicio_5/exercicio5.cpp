#include <iostream>

using namespace std;

/* Q: Fazer uma função que recebe um dia, um mês e um ano como parâmetros e retorna o número de dias desde o início daquele ano. Para o dia 1º de janeiro de qualquer ano, a função deve retornar 1. Para o dia 31 de dezembro, ela deve retornar 365 ou 366, dependendo de o ano ser ou não bissexto. Um ano é bissexto quando é múltiplo de 400 ou também quando é múltiplo de 4 e não múltiplo de 100. */

int retornaDiasPassados(int dia, int mes, int ano)
{

    int dias_passados;

    if (dia == 1 && mes == 1)
    {
        return 1;
    }

    dias_passados += dia;

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        if (dia == 31 && mes == 12)
        {
            return 366;
        }

        switch (mes)
        {
        case 1:
            dias_passados += 0;
            break;
        case 2:
            dias_passados += 31;
            break;
        case 3:
            dias_passados += 60;
            break;
        case 4:
            dias_passados += 91;
            break;
        case 5:
            dias_passados += 121;
            break;
        case 6:
            dias_passados += 152;
            break;
        case 7:
            dias_passados += 182;
            break;
        case 8:
            dias_passados += 213;
            break;
        case 9:
            dias_passados += 244;
            break;
        case 10:
            dias_passados += 274;
            break;
        case 11:
            dias_passados += 305;
            break;
        case 12:
            dias_passados += 335;
            break;
        }
    }
    else
    {
        if (dia == 31 && mes == 12)
        {
            return 365;
        }
        switch (mes)
        {
        case 1:
            dias_passados += 0;
            break;
        case 2:
            dias_passados += 31;
            break;
        case 3:
            dias_passados += 59;
            break;
        case 4:
            dias_passados += 90;
            break;
        case 5:
            dias_passados += 120;
            break;
        case 6:
            dias_passados += 151;
            break;
        case 7:
            dias_passados += 181;
            break;
        case 8:
            dias_passados += 212;
            break;
        case 9:
            dias_passados += 243;
            break;
        case 10:
            dias_passados += 273;
            break;
        case 11:
            dias_passados += 304;
            break;
        case 12:
            dias_passados += 334;
            break;
        }
    }

    return dias_passados;
}

int main()
{
    int dia = 0, mes = 0, ano = 0;

    cout << "Insira um dia, um mes (1 - 12) e um ano: " << endl;

    cin >> dia >> mes >> ano;

    cout << "Dias passados: " << retornaDiasPassados(dia, mes, ano);

    return 0;
}
