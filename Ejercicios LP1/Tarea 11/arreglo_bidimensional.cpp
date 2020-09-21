#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main(int argc, char const *argv[])
{

   //inicializa el numero random 
   int numero[5][5];  
   srand(time(NULL));
   int suma=0;

   cout <<"*****************************";
   cout <<endl;
   for (int i = 0; i < 5; i++)
   { 
       for (int j = 0; j < 5; j++)
   {
    
   numero[i][j]= rand() % 100+1;

   cout << " "<<"["<<numero[i][j] << "]"<<" ";  
   suma=numero[i][j]+suma;
   }
     cout <<endl;
   }
   cout <<endl;
   cout <<"*****************************";
   
   cout <<endl;
   cout <<endl;
   cout <<endl;
   cout<< "La suma de los numeros de la matriz es:"<<suma;



    return 0;
}
