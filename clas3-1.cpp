#include <iostream>
using namespace std;
int main(){
    string nombres [5];
    cout<<"ingrese sus nombres: "<<endl;
    int i=0;

    while (i<5)
    {
        cin>>nombres[i];
        i++;

    }
    cout<<"los nombres ingresados son:\n"<<endl;
    for (i=0; i<5; i++)
    {
        cout<<nombres[i];
    }
    return 0;
}