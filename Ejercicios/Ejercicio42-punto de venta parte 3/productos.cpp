#include <iostream>


using namespace std;  
void agregarProducto(string descripcion,int cantidad, double precio)
  

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
     cin>>opcionProducto;
      
        
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("Capuchino",1,40);
                break;
            
            case 2:
                agregarProducto("Expresso",1,30);
                break;
            default:
            cout<<"Opcion no valida";
                break;
            }
        
        
     
    }
    case 2:
    {
     cout<<"Bebidas frias"<<endl;
     cout<<"*******************"<<endl;
     system("pause");
     break; 
    }
    case 3:
    {
     cout<<"Reposteria"<<endl;
     cout<<"*******************"<<endl;
     system("pause");
     break; 
    }
        
    
    default:
        break;
    }
}