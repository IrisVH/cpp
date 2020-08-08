#include <iostream>


using namespace std;

double subtotal;
double impuesto;
double totalPagar;
string listarProductos;

void agregarProducto(string descripcion,int cantidad, double precio)
{
    listarProductos=listarProductos+descripcion+'\n';
    subtotal=subtotal+(cantidad*precio);
    impuesto=subtotal*0.15;
    totalPagar=subtotal+impuesto;
}

void imprimirFactura()

{
system("cls");
cout<<"********"<<endl;
cout<<"Factura"<<endl;
cout<<"********"<<endl;
cout<<endl;

cout<<"Productos"<<endl;
cout<<listarProductos;
cout<<endl;


cout<<"**************************************"<<endl;
cout<<"Subtotal          :L."<<"  "<<subtotal;
cout<<endl;
cout<<"Impuesto del 15%  :L."<<"  "<<impuesto;
cout<<endl;
cout<<"Total a Pagar     :L."<<"  "<<totalPagar;
cout<<endl;
cout<<"**************************************"<<endl;
cout<<"        Gracias por su compra        "<<endl;
system("pause");

}