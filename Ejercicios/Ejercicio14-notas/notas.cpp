#include <iostream>


using namespace std;


int main(int argc, char** argv)
{
  int nota=0;
  
  cout<<"Ingrese la nota que obtuvo:";
  cin>> nota;

       if (nota>=95 && nota<=100) {
        cout<<"obtuvistes una A";
        }else{
            if (nota>=85&& nota<=94){
            cout<<"obtuvistes una B";
            }else{
         	    if (nota>=75 && nota<=84){
                cout<<"obtuvistes una C";
                }else{
                	if (nota>=65 && nota<=74){
                    cout<<"obtuvistes una D";
                    }else{
                    	if (nota>=60 && nota<=64){
                        cout<<"obtuvistes una E";
                        }else{
                        	if (nota>=0 && nota<=60){
                            cout<<"obtuvistes una F";
                            }else{
                            	cout<<"Ingrese una nota entre 0-100";
							}
						} 
					}
				}
		    }
	   }
        
  return 0;
} 

   