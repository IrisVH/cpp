#include <iostream>


 using namespace std;

 
 
    bool login () {
    
	    
         string passward=" ";
         int intentos=0;

         while (intentos<=3)
         {
         	system("cls");
            if(intentos==3)
			{
                cout<<"Passward incorrecto"<<endl;
                cout<<"Contacte al administrador"<<endl;
                cout<<endl;

                return false;
            }
            cout<<"Ingrese su passward:";
            cin>>passward;
            

             if (passward=="Administrador")
             {
              system("cls");
              return true;
             }
                     
               intentos++;
          }
         
         return false;
   
        }


    
	
     
 