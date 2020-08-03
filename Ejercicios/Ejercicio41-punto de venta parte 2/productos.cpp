#include <iostream>


using namespace std;

void productos(int opcion)
{
    system("cls");
    switch (opcion)
    {
    case 1:
    {
     cout<<"Bebidas calientes"<<endl;
     cout<<"*******************"<<endl;
     system("pause");
     break; 
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