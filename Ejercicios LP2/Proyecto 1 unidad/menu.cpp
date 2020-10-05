#include <iostream>
#include "startShip.h"
#include "snake.h"

 using namespace std;


 void menu(){
  bool salir=false;

  while(salir==false){
      int opcion=0;

       cout<<"***********************"<<endl;
       cout<<"MENU DE JUEGOS"<<endl;
       cout<<"***********************"<<endl;
       cout<<"Seleccione un juego"<<endl;

       cout<<"1-starShip"<<endl;
       cout<<"2-snake"<<endl;
       
       

       cout<<endl;
       cout<<endl;
       cout<<"Ingrese un numero para seleccionar un juego:";
        cin >>opcion;


       switch (opcion)
       {
           case 1:
                   starShip();
                   system("pause");
                   break;
                  

           case 2: 
                   snake();
                   system("pause");
                   break;
           
           
          default:
                  
                  system("pause");
                  break;


       
          system("cls");




       }


  }


 }