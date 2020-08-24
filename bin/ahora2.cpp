#include<iostream>
using namespace std;
main(){
    int a,b,c;
    cout<<"\n ingrese numeros diferentes: \n";
    cout<<"ingrese el primer numero: ";cin>>a;
    cout<<"ingrese el segundo numero: ";cin>>b;
    cout<<"ingrese el tercer numero: ";cin>>c;
    if(a>b && a>c){
    cout<<"el numero mayor es: "<<a;
    }
    if(b>c && b>a){
    cout<<"el numero mayor es: "<<b;        
    }
    if(c>b && c>a){
    cout<<"el numero mayor es: "<<c;        
    }
    return 0;
}