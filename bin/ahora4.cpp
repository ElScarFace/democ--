#include <iostream>
 
using namespace std;
 
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int aux = 0;
 
    cout << "Inserte tres numeros enteros:\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
 
    if (a > b) {
        aux = b;
        b = a;
        a = aux;
    }
 
    if (a > c) {
        aux = c;
        c = a;
        a = aux;
    }
 
    if (b > c) {
        aux = c;
        c = b;
        b = aux;
    }
 
    cout << endl << a << ' ' << b << ' ' << c << endl;
 
    return 0;
}