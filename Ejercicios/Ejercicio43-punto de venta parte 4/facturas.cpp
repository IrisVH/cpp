#include <iostream>


using namespace std;

double subtotal;
string listarProductos;

void agregarProducto(string descripcion,int cantidad, double precio)
{
    listarProductos=listarProductos+descripcion+'\n';
    subtotal=subtotal+(cantidad*precio);
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
cout<<"Subtotal:"<<subtotal;
cout<<endl;
cout<<endl;
system("pause");

}