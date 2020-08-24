#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <cmath>

using namespace std;
int main(){
	int i,num,con,a,e,ga=0,ra,p;
	srand(time(NULL));
	cout<<"ingrese numero que desea encontrar: "<<endl;
	cin>>num;
	
	int array[18];
	int rep[19];
	
	
	for (i=1; i<=18; i++)
	{
	   array[i]=(rand()%60)+35;
	   cout<<"pocicion "<<i<<": "<<array[i]<<endl;
	   rep[i]=i;
	   	
	}

for (e=1; e<=19; e++){
		
		if(array[e]==num){
			cout<<"su numero se repite en la pocicion: "<<rep[e]<<endl;
			ga=1;
		}
	}
	if(ga==0){
		cout<<"tu numero no  se repite:("<<endl;
	}
	int j=array[0];
	for (p=1; p<=19; p++)
	{
		
		j+=array[p];
	}
	cout<<"la suma es "<<j<<endl;
}                 