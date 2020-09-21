#include <iostream>


using namespace std;


int main(int argc, char** argv) {
	
	double subtotal=0;
	double total=0;
	double impuesto=0; 
	char  estaexenta;
	double calculoImpuesto=0;
	int descuento=0;
	double calculoDescuento=0;
	
	cout <<"Ingrese el valor de la factura:";
	cin >>subtotal;
	cout <<"Ingrese el descuento (0,10,15,20):";
	cin >>descuento;
	
	cout <<"Factura exenta (s/n)";
	cin >>estaexenta;
	
	
	if (estaexenta== 's'||estaexenta== 'S'){
	   calculoDescuento=(subtotal* descuento)/100;
	   total=subtotal-calculoDescuento;
	   cout <<"Total a pagar es:"<<total;  
	   
      } else{
	     calculoImpuesto=(subtotal*0.15);
	     calculoDescuento=(subtotal* descuento)/100;
	     total=subtotal-calculoDescuento+calculoImpuesto;
		 cout <<"Total a pagar es:"<<total;  
	}
	cout <<endl;
	
	
	
	return 0;
}