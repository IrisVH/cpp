#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	
	int a=1000;
	int b=5000;
	int c=7000;
	
	
	if (a>b){
     	if (a>c){
		 cout<< " a es el mayor";
		 } else{
		 cout<<"c es el mayor";
		 }
	
	}else{
	   if (b>c){
	      cout<<"b es el mayor";
	   }else{
	   	cout<<"c es el mayor";
	   	}
	}
	

	
	return 0;
}