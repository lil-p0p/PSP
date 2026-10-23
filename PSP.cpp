#include <iostream>
using namespace std;
int main(){
	int A;
	int B;
	int Area;
	bool valid1=false;
	bool valid2=false;
	cout<<"Escribe el valor del lado A: ";
	while(valid1==false){
		cin>>A;
		if (A==0){
			cout<<"Ninguno de los valores puede ser 0"<<endl;
		}else{
			valid1=true;
		}
	}
	cout<<"Escribe el valor del lado B: ";
	while(valid2==false){
		cin>>B;
		if (B==0){
			cout<<"Ninguno de los valores puede ser 0"<<endl;
		}else{
		valid2=true;
		}
	}
	Area= A*B;
	if (A==B){
		cout<<"\nEl resultado del área es: "<< Area << " y es un cuadrado";
	}else{
		cout<<"\nEl resultado del área es: "<< Area;
	}
	return 0;
}

