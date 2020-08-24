#include <iostream>
int num1=10;
int num2=10;
int suma;

using namespace std;

int sumar(int a, int b){
    return (a)+(b);
}

int main(){
    suma=sumar(num1, num2);
    cout<< suma <<endl;
    cin.get();
    return 0;

}
