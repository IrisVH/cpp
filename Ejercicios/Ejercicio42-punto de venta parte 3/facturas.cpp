#include <iostream>


using namespace std;

double subtotal;
string listaProductos;

void agregarProducto(string descripcion,int cantidad, double precio)
{
    listarProductos=listaProductos+descripcion+'/n'
    subtotal=subtotal+(cantidad*precio);
}