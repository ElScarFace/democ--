#include <iostream> 
using namespace std;
int main(){
float consumo=0,descuento,monto_pagar;
cout<<"Ingresar monto de Consumo"<<endl;
cin>>consumo;
if (consumo>=100)
descuento=consumo*0.3;
else if (consumo>=60 )
descuento=0.2*consumo;
else if (consumo<=30 )
descuento=0.15*consumo;
else if (consumo<=30 )
descuento=0.1*consumo;
 monto_pagar=consumo-descuento; 
cout<<"monto final a pagar es: "<<monto_pagar<<endl;
return 0;
}
