#include<iostream>

using namespace std;

int main(){

//operacion AND NOT OR 
//condicionales AND las dos deben ser verdaderas
///true 1 (verdadero )
//bool resultado = true && true ;
///false 0 (falso )
bool resultado1 = true && false ;

//verdadero or cualquiera de las variables debe ser 
//verdadero 
//bool resultado = true || true ;
bool resultado2 = true || true ;
//invierte el valor 
bool resultado3 =! true ;
cout << resultado1 << endl;
cout << resultado2 << endl;
cout << resultado3 << endl;

//ejemplo : 
//condicional if
int edad =0;

cout<< "ingrese su edad: " ;
cin >> edad;

if(edad<18){
	cout<<"no puedes votar"<< endl;
}else if(edad>40){
		cout<<"no puedes votar"<< endl;
}

else{
	cout<<" puedes votar "<< endl;
}

//ejemplo switch
int  Opcion=0;

cout<< "ingrese una opcion valida:(1-2-3) " ;
cin>>Opcion;

 switch(Opcion){
	case 1:
		cout << "Opcion 1" << endl;
		break;
	case 2:
		cout << "Opcion 2" << endl;
		break;
	case 3:
		cout << "Opcion 3" <<endl;
		break;
	default:
		cout << "Esto no existe" <<endl;
}

///ejemplo for con limite 

int limite=10;
cout<<"limite:";
cin>>limite;
   for(int i=0; i<limite; i +=1){
   	cout <<i <<endl;
   }
//ejemplo de listas 

int lista[]={100,200,300};
int limite1=sizeof(lista)/sizeof(lista[0]);


   for(int i=0; i<limite1; i +=1){
   	cout <<lista[i]<<endl;
   	if(lista[i]==200){
   		break;
	   }
   }   
   
}	