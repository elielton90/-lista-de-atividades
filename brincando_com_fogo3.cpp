#include <iostream>
using namespace std;
 int valor(int num);
int main()

{
/*
Programa DIVISAO POR DOIS
O programa lê um número e divide por dois (sucessivamente) até que
o resultado seja menor que 1.
Mostra o resultado de cada divisão e a quantidade de divisões efetuadas.
Dicas: Você precisa enviar alguma informação para a função?
Dicas: Quais informações precisam ser passadas? (Não use variáveis globais!)
*/

int quantidade=0;
int num;
cout << "Digite o numero que deseja dividir:" << endl;
cin >> num;
// ----- DIVIDE UM NÚMERO POR DOIS SUCESSIVAS VEZES -----
quantidade = valor(num);
return num;
}

int valor(int num){

int quantidade = 0;
while (num > 0)
{
num /= 2;
cout << "Resultado divisao: " << num << endl;
quantidade++;
}
cout << "Foram feitas um total de " << quantidade << " divisoes" << endl;
// O bloco termina aqui.
return num;
}



