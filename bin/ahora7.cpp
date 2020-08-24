#include <iostream> 
using namespace std;
int main(){
int consumo=0,descuento,monto_pagar;
cout<<"Ingresa numero de articulos: "<<endl;
cin>>consumo;
if (consumo>=100)
descuento=consumo*0.4;
else if (consumo>=25 || consumo<=100 )
descuento=0.2*consumo;
else if (consumo>=10 || consumo<25)
descuento=0.1*consumo;
 monto_pagar=consumo-descuento; 
cout<<"monto final a pagar es: "<<monto_pagar<<endl;
return 0;
}