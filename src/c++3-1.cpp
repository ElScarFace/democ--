#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <cmath>

using namespace std;
int main(){
	int i,num,con,a,e,ga=0;
	srand(time(NULL));
	cout<<"ingrese numero que desea encontrar: "<<endl;
	cin>>num;
	
	int array[12];
	int rep[13];
	for (i=1; i<=12; i++)
	{
	   array[i]=(rand()%100)+50;
	   cout<<"pocicion "<<i<<": "<<array[i]<<endl;
	   rep[i]=i;
	   	
	}

for (e=1; e<=13; e++){
		
		if(array[e]==num){
			cout<<"su numero se encuentra en la pocicion: "<<rep[e]<<endl;
			ga=1;
		}
	}
	if(ga==0){
		cout<<"su numero no se encuentra en el arreglo y tampoco el amor de ella :("<<endl;
	}
}