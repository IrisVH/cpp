#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	//Datos de entrada 
	int numerosecreto=7;
	int numero=0;
	
	cout<<"Ingrese un numero:";
	cin>>numero;
	cout<<endl;

	if (numero==7){
	cout<<"Adivinastes el numero secreto";
	}
    else {
		cout<<"No adivinastes";
		}


	return 0;
}