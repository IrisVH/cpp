#include <iostream>
#include "clientes.h"


 using namespace std;


 void menu(){
  bool salir=false;

  while(salir==false){
      int opcion=0;
       cout<<"MENU PRINCIPAL"<<endl;
       cout<<"***********************"<<endl;
       cout<<"1-Clientes"<<endl;
       cout<<"2-libro diario"<<endl;
       cout<<"3-libro mayor"<<endl;
       cout<<"4-libro de inventarios"<<endl;
       cout<<"5-reportes"<<endl;
       cout<<"6-Transaccion"<<endl;
       cout<<"7-Salir"<<endl;

       cout<<endl;
       cout<<endl;
       cout<<"Seleccione una opcion:";
       cin >>opcion;


       switch (opcion)
       {
           case 1:
                  mostrarClientes();
                  system("pause");
                  break;
                  

           case 2:
                  system("pause");
                  break;
                  



           case 3:
                  system("pause");
                  break;
                  



           case 4:
                  system("pause");
                  break;
                  




           case 5:
                  system("pause");
                  break;
                  




           case 6:
                  
                  system("pause");
                  break;



           case 7:
                  
                  salir=true;
                  system("pause");
                  break;
                

     
          default:
                  
                  system("pause");
                  break;


       
          system("cls");




       }


  }


 }