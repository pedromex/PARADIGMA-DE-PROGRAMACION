// Programación Procedural: Cálculo de dos impuestos
//Mex Ucan Pedro Abraham Programación Procedural
#include <iostream>
using namespace std;
int main()
{
// Definiendo variables
double tasaISV;
double impuestoCalculadoISV;
double tasaIAN;
double impuestoCalculadoIAN;
double valor;
// Capturando valores
cout << "Tasa de Impuesto sobre ventas: ";
cin >> tasaISV;
cout << "Tasa de Impuesto al activo neto: ";
cin >> tasaIAN;
cout << "\nValor: ";
cin >> valor;
// Cálculos
impuestoCalculadoISV = valor * tasaISV;
impuestoCalculadoIAN = valor * tasaIAN;
// Mostrando resultados
cout << "Para un valor de : " << valor << " y una tasa de: " << tasaISV
<< " el valor de Impuesto sobre Ventas es:" << impuestoCalculadoISV << endl;
cout << "Para un valor de : " << valor << " y una tasa de: " << tasaIAN
<< " el valor de Impuesto al Activo Neto es:" << impuestoCalculadoIAN << endl;
system("pause");
return 0;
}
 
 