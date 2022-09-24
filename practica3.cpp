//el uso de whle y do-while

#include <iostream>

using namespace std;

int main(){
	
//ciclos for 
	for(int i=0; i<1000; i+=1){
		char respuesta='0';
		cout<<"Deseas terminar"<<endl;
		cin>>respuesta;
		if(respuesta=='y'){
			cout <<"bye bye"<<endl;
			break;
		}
	}
	
	///ciclo while 
		while(true){
		char respuesta;
		cout<<"Deseas terminar"<<endl;
		cin>>respuesta;
		if(respuesta=='y'){
			cout <<"bye bye"<<endl;
			break;
		
			}
		}
		
		
		///ciclo do while 
		do{
		char respuesta;
		cout<<"Deseas terminar"<<endl;
		cin>>respuesta;
		if(respuesta=='y'){
			cout <<"bye bye"<<endl;
			break;
		}
	

	}	while(true);
//ciclo do
	
}
