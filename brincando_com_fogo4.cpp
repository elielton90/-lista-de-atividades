#include <iostream>
using namespace std;
int main()
{
/*
Programa AREA DO TRIANGULO
Calcula a �rea de um Tri�ngulo.
A �rea do Tri�ngulo � dada por: (base * altura) / 2.
Dicas: Voc� precisa enviar alguma informa��o para a fun��o?
Dicas: Quais informa��es precisam ser passadas? (N�o use vari�veis globais!)
Dicas: A fun��o retorna alguma informa��o para voc�?
Dicas: Se sim, ent�o a fun��o deve ter um tipo de retorno e um 'return' ao final.
*/
float area;
float base = 5, altura = 6;
// ----- CALCULA A AREA DE UM TRIANGULO -----
area = (base * altura) / 2;
// O bloco termina aqui.
cout.precision(3);
cout << "Triangulo possui Base " << fixed << base << endl;
cout << "Triangulo possui Altura " << fixed << altura << endl;
cout << "Area do Triangulo: " << fixed << area << endl;
}

