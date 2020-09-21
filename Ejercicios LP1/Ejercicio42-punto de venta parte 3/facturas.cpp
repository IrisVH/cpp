#include <iostream>


using namespace std;

double subtotal;
string listarProductos;

void agregarProducto(string descripcion,int cantidad, double precio)
{
    listarProductos=listarProductos + descripcion + '\n';
    subtotal=subtotal+(cantidad*precio);
}