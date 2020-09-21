#include<iostream>
#include<string>


using namespace std;

string productos[5][3]={
    {"001","iphone x","0"},
    {"002","laptop Dell","5"}, 
    {"003","monitor","2"}, 
    {"004","mouse","100"},
    {"005","Headset","25"}
};

void listarProductos(){
    system("cls");
    cout<<endl;
    cout<<"Listado de productos"<<endl;
    cout<<"********************"<<endl;
    cout<<"codigo,descripcion y existencia"<<endl;
    

    for (int i = 0; i < 5; i++)
    {
       cout<<productos[i][0]<<"["<<productos[i][1]<<"["<<productos[i][2]<<endl;
    }
                  
}
void movimientoInventario(string codigo,int cantidad,string tipoMovimiento){
    for (int i = 0; i < 5; i++)
    {
        if (productos[i][0]==codigo){
            if (tipoMovimiento=="+"){
                productos[i][2]=to_string(stoi(productos[i][2])+cantidad);
            }else{
                productos[i][2]=to_string(stoi(productos[i][2])-cantidad);
            }
        }
    }
    
}
void ingresoDeInventario(){
    string codigo="";
    int cantidad=0;

    system("cls");
    cout<<endl;
    cout<<"ingreso de Productos al Inventario"<<endl;
    cout<<"***********************************"<<endl;
    cout<<"Ingrese el codigo del producto:";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto:";
    cin>>cantidad;
    cout<<endl;

    movimientoInventario(codigo,cantidad,"+");
}

void salidaDeInventario(){
    string codigo="";
    int cantidad=0;

    system("cls");
    cout<<endl;
    cout<<"salida de Productos al Inventario"<<endl;
    cout<<"***********************************"<<endl;
    cout<<"Ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto:";
    cin>>cantidad;
    cout<<endl;

    movimientoInventario(codigo,cantidad,"-");
}

void ajustePositivoDeInventario(){
    string codigo="";
    int cantidad=0;

    system("cls");
    cout<<endl;
    cout<<"Ajuste positivo de Inventario"<<endl;
    cout<<"***********************************"<<endl;
    cout<<"Ingrese el codigo del producto:";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto:";
    cin>>cantidad;
    cout<<endl;

    movimientoInventario(codigo,cantidad,"+");
}

void ajusteNegativoDeInventario(){
    string codigo="";
    int cantidad=0;

    system("cls");
    cout<<endl;
    cout<<"Ajuste negativo de Inventario"<<endl;
    cout<<"***********************************"<<endl;
    cout<<"Ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto:";
    cin>>cantidad;
    cout<<endl;

    movimientoInventario(codigo,cantidad,"-");
}
int main(int argc, char const *argv[])
{     
    
    int opcion=0;

    while(true)
    {
    system("cls");

    cout<<"Sistema de inventario";
    cout<<"*********************";
    cout<<endl;
    cout<<endl;
    cout<<"1-Productos"<<endl;
    cout<<"2-Ingreso deInventario"<<endl;
    cout<<"3-salida de inventario"<<endl;
    cout<<"4-Ajuste positivo de inventario"<<endl;
    cout<<"5-Ajuste negativo de inventario"<<endl;
    cout<<"Ingrese una opcion del menu:";
    cin>>opcion;

    cout<<endl;
    switch (opcion)
    {
        case 1:
            listarProductos(); 
            break;
              
        case 2:
              ingresoDeInventario();
              break;
        case 3:
              salidaDeInventario();
              break;
        case 4:
              ajustePositivoDeInventario();
              break;
        case 5:
              ajusteNegativoDeInventario();
              break;
        default:
        break;
    }
     system("pause");
     cout<<endl;

     if(opcion==0) {
         break;
     }
    }
    
    return 0;
}

