/*declaracion de punteros
&n=la direccion de n
*n=la variable cuya dirreccion almacenada en n
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(void){
int num, *dir_num;
num=50;
cout<<"numero: "<<num<<endl;
cout<<"direccion del numero: "<<&num<<endl;
getch();
return 0;
}