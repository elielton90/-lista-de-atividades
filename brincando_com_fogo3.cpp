#include <iostream>
using namespace std;
 int valor(int num);
int main()

{
/*
Programa DIVISAO POR DOIS
O programa l� um n�mero e divide por dois (sucessivamente) at� que
o resultado seja menor que 1.
Mostra o resultado de cada divis�o e a quantidade de divis�es efetuadas.
Dicas: Voc� precisa enviar alguma informa��o para a fun��o?
Dicas: Quais informa��es precisam ser passadas? (N�o use vari�veis globais!)
*/

int quantidade=0;
int num;
cout << "Digite o numero que deseja dividir:" << endl;
cin >> num;
// ----- DIVIDE UM N�MERO POR DOIS SUCESSIVAS VEZES -----
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



