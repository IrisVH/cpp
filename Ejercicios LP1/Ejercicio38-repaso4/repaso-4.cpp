#include<iostream>

using namespace std;


 int main(int argc, char const *argv[])

 {
     for (int i = 5;i<=100; i=i+5)
     {
        cout<<i<<endl;
        if (i==25){
           break;
        }
     }
    int i=5;
    while (i<=100)
    {
        cout<<i<<endl;
        i=i+5;

        if (i==25)
        {
           break;
        }
        
    }
     
     int a=5;
     int b=10;
    if (a==5 || b==7)
    {
      cout<<"a o b, es verdadero";
    }
    

     return 0;
 }
 