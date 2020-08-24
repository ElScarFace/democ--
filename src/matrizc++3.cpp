#include <iostream>
#define MAXIMO 10
 
using namespace std;
 
 
int main() {
  string nombres[MAXIMO];
  int edades[MAXIMO];
  int posicion,i,mayor=0;
 
  for (i=0; i<MAXIMO; i++) {
    cout << "Nombre # " << i+1 << ": ";
    cin >> nombres[i];
    cout << "Edad # " << i+1 << ": ";
    cin >> edades[i];
  }
 
  for (i=0; i<MAXIMO; i++) {
    if (edades[i] > mayor) {
      mayor = edades[i];
      posicion = i;
    }
  }
 
  cout << "El alumno de mayor edad es " << nombres[posicion] << endl;
 
  return 0;
}