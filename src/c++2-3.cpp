#include <iostream>
#include <cstdlib>
using namespace std;


int main (void)
{
    int cantidades_cero, i, mayores_a_cero, menores_a_cero, n;
    float cantidad;
    cantidades_cero = 0;
    menores_a_cero = 0;
    mayores_a_cero = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cin.get();
    for (i=1; i<=n; i++)
    {
        cout << "PROCESO " << i << endl;
        cout << "Ingrese el valor de cantidad: ";
        cin >> cantidad;
        cin.get();
        if(cantidad==0)
            cantidades_cero=cantidades_cero+1;
        if(cantidad<0)
            menores_a_cero=menores_a_cero+1;
        if(cantidad>0)
            mayores_a_cero=mayores_a_cero+1;
        cout << endl;
    }
    cout << "Valor de cantidades cero: " << cantidades_cero << endl;
    cout << "Valor de menores a cero: " << menores_a_cero << endl;
    cout << "Valor de mayores a cero: " << mayores_a_cero << endl;
    
    return 0;
}