#include <iostream>
 
using namespace std;
 
int main() {
    int a = 89;
    int b = 3;
    int c = 20;
    int aux = 0;
 
   
 
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