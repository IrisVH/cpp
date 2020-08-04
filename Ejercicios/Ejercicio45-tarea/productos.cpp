#include <iostream>


using namespace std;  
extern void agregarProducto(string descripcion,int cantidad, double precio);
  
void productos(int opcion)
{
    system("cls");
    int opcionProducto=0;
    switch (opcion)
    {
    case 1:
    {
     cout<<"Bebidas calientes"<<endl;
     cout<<"*******************"<<endl;
     cout<<"1.Capuccino"<<endl;
     cout<<"2.Expresso"<<endl;
     cout<<"3.Chocolate"<<endl;
     cout<<endl;

     cout<<"Ingrese una opcion:";
     cin>>opcionProducto;
      
        
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1. Capuchino -L 40.00",1,40);
                break;
            
            case 2:
                agregarProducto("1. Expresso-L 30.00",1,30);
                break;
            case 3:
                agregarProducto("1. Chocolate-L 25.00",1,25);
                break;
            default:
               {
                cout<<"Opcion no valida";
                return;
                break;
                }
            }
        
        cout<<endl;
        cout<<"Producto agregado"<<endl<<endl;
        system("pause");
        break;
     
    }
    case 2:
    {
     cout<<"Bebidas frias"<<endl;
     cout<<"*******************"<<endl;
     cout<<"1.Refresco natural"<<endl;
     cout<<"2.Te"<<endl;
     cout<<"3.Licuado"<<endl;
     cout<<endl;
     cout<<"Ingrese una opcion:";
     cin>>opcionProducto;


     
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1. Refresco natural -L 25.00",1,25);
                break;
            
            case 2:
                agregarProducto("1. Te-L 30.00",1,30);
                break;

            case 3:
                agregarProducto("1. Licuado-L 35.00",1,35);
                break;
            default:
               {
                cout<<"Opcion no valida";
                return;
                break;
                }
            }
        
        cout<<endl;
        cout<<"Producto agregado"<<endl<<endl;
        system("pause");
        break;
    }
    case 3:
    {
     cout<<"Reposteria"<<endl;
     cout<<"*******************"<<endl;
     cout<<"1.Porcion de Pastel"<<endl;
     cout<<"2.Pan"<<endl;
     cout<<"3.Galletas"<<endl;
     cout<<endl;
     cout<<"Ingrese una opcion:";
     cin>>opcionProducto;


     
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1. Porcion de Pastel -L 35.00",1,35);
                break;
            
            case 2:
                agregarProducto("1. Pan-L 10.00",1,10);
                break;

            case 3:
                agregarProducto("1. Galletas-L 15.00",1,15);
                break;
            default:
               {
                cout<<"Opcion no valida";
                return;
                break;
                }
            }
        
        cout<<endl;
        cout<<"Producto agregado"<<endl<<endl;
        system("pause");
        break;
    }
        
    
    default:
        break;
    }
}