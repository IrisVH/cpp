#include <iostream>

using namespace std;


string arregloClientes[5][3]={
{"0001","Maria ramos","9900 1876"},
{"0002","Rosa Reyes","9801 1876"},
{"0003","Juan Perez","9905 3784"},
{"0004","Marcos Lopez","9877 4990"},
{"0005","Pedro Santos","9123 5677"},

};

void mostrarClientes(){
     system("cls");

    cout<<"Codigo, Nombre, Telefono"<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arregloClientes[i][0]<<" / ";
        cout<<arregloClientes[i][1]<<" / ";
        cout<<arregloClientes[i][2]<<" / ";
        cout<<endl;
    }

     system("pause");
}
