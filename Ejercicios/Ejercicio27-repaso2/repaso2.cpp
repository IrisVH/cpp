#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int opcion;
    while(true){
		system("cls");
		cout<<"****"<<endl;
        cout<<"menu"<<endl;
        cout<<"****"<<endl;

        cout<<endl;
        cout<<endl;

        cout<<"1-Bebida caliente"<<endl;
        cout<<"2-Bebidas heladas"<<endl;
        cout<<"3-Reposteria"<<endl;
        cout<<"0-salir"<<endl;

        cout<<endl;
        cout<<endl;

        cout<<"Ingrese una opcion 1-3:";
        cin>>opcion;

        if(opcion==1){
            cout<<"*****************"<<endl;
            cout<<"Bebidas Calientes"<<endl;
            cout<<"*****************"<<endl;
            system("pause");
        }

        if(opcion==2){
            cout<<"*****************"<<endl;
            cout<<"Bebidas Heladas"<<endl;
            cout<<"*****************"<<endl;
            system("pause");
        }

        if(opcion==3){
            cout<<"*****************"<<endl;
            cout<<"Reposteria"<<endl;
            cout<<"*****************"<<endl;
            system("pause");
        }
        
        
        if(opcion<0|| opcion<3)
           {
            system("cls");
            cout<<"Ingrese una opcion valida(0,1,2)";
            system("pause");
            break;

       }
        
   }


    return 0;
}
