#include<iostream>
 
using namespace std;
 
int main(){
         int arr[10];
        string ar[10];
       int mayor=0;
      int i=0;
    for(int i=0;i<10;i++){
        cout<<"nombre"<<endl;
       cin >> ar[i];
        cout <<"edad" << endl;
        cin >> arr[i];
         }
 
         mayor =arr[0];
    for(i=0;i<10;i++){
         if(arr[i]>mayor){
             mayor= arr[i];
         cout <<" alumno con mayor edad" <<ar[i]<<" "<< mayor<<endl;
    }
return 0;
}