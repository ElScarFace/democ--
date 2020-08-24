#include <iostream> 
using namespace std;
int main(){
float monto_pagar;
int hijos, sueldo=850,au,condi;
char contrato; 
cout<<"indique su tipo de contrato"<<endl;
cout<<"a) secundaria"<<endl;
cout<<"b) tecnico"<<endl;
cout<<"c) profesional"<<endl;
cin>>contrato;
cout<<"Ingrese condicion:"<<endl;
cout<<"1) casado"<<endl;
cout<<"2) con hijos"<<endl;
cout<<"3) sin vivienda"<<endl;
cin>>hijos;

 switch (contrato)
 {
  case 'a': case 'A': 
  au= sueldo+0.05;
  break;
  case 'b': case 'B': 
  au= sueldo+0.1;
  break;
  case 'c': case 'C': 
  au= sueldo+0.2;
  break;
  default:
  cout<<"Opcion no valida";
 }
  switch (hijos)
 {
  case 1: 
  condi= sueldo+0.03;
  break;
  case 2:
  condi= sueldo+0.02;
  break;
  case 3:
  condi= sueldo+0.05;
  break;
  default:
  cout<<"Opcion no valida";
 }
 cout<<"Su nuevo salario sera: "<<au+condi<<endl;
return 0;
}