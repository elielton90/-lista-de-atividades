#include <iostream>
using namespace std;
void maior();
int valor1, valor2;
int main()

{
/*
Programa MAIOR VALOR.
O usu�rio digita dois valores e o programa diz qual � o maior.
Dicas: Voc� precisa enviar alguma informa��o para a fun��o?
Dicas: Quais informa��es precisam ser passadas? (N�o use vari�veis globais!)
*/

cout << "Digite o primeiro valor:" << endl;
cin >> valor1;
cout << "Digite o segundo valor:" << endl;
cin >> valor2;
void maior();

}
void maior(){

if (valor1 > valor2) cout << "O primeiro valor � maior que o segundo" << endl;
else if (valor2 > valor1) cout << "O segundo valor � maior que o primeiro" << endl;
else cout << "Os valores s�o iguais" << endl;

}
