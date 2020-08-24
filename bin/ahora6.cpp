#include <iostream>
 
using namespace std;
 
int main(void) {
    int prom;
    cout <<"ingrese promedio: ";
    cin >>prom;
    if (prom<0 || (prom>20))
    cout <<"datos eeroneos";
else if (prom<=5 )
cout <<"rendimiento pesimo";
else if (prom<=10 )
cout <<"rendimiento deficiente";
else if (prom<=15 )
cout <<"rendimiento regular";
else
{
    cout<<"rendimiento bueno";
}
return 0;

}