#include <iostream>


using namespace std;

extern void productos(int opcion);
void menu()
 {
	
	int opcion=0;
	
	
	while(true){
		system("cls");
		cout<<"****"<<endl;
        cout<<"menu"<<endl;
        cout<<"****"<<endl;

        cout<<endl;
        cout<<"1-Bebidas calientes"<<endl;
        cout<<"2-Bebidas frias"<<endl;
        cout<<"2-Reposteria"<<endl;
        cout<<"0-salir"<<endl;

        
        cin>>opcion;

        
        if(opcion==0){
        
            break;
        }
		productos(opcion);
	}
	
}