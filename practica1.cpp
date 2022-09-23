///primer programa en C ++
//libreria de entrada y salida de datos propia de c++
#include<iostream>

//funcion principal 
//estandar de c++
using namespace std;

int main(){

	//variable entera 
	int edad=0;

	//imprime en consola cout
	edad=18;
	
	//variable caracter 
	char letra='A';
	
	//se usa la palabra reservada const para definir valores definidos.
	const char letra1='B';

///lastistas deben ser siempre del mismo tipo de dacto es decir se no se deben 
///combinar si son enteros son todos enteros 
int lista_edades[]={23,13,45,8} ;

//para cambiar algun valor de la lista de edades de lasiguiente manera 
 lista_edades[2]= 24 ;

//tipo de operadores 

int numA=2;
int numB=3;
//suma 
int resultado=numA+numB;
//resta
 resultado=numA+numB; 
//divicion 
resultado=numA/numB;
//multiplicacion 
resultado=numA*numB;
/*	Comentarios de multiples lineas 
*/
//entrada y salida de datos cout << entrar datos a la terminal 
int edad1=0;
cin >> edad1;
//cin >> "introduce tu edad: ";
cin >> edad1;

//variables booleanas 0=falo 1=falso 

bool c = numA<numB ;
	 c = numA>numB ;
	 
//incrementos en uno
int a=2;
    a+=1;
	
	
int edades[]={24,40,7};
//operador especial zizeof es el tamaño en bis 
cout << sizeof(a) << endl;
cout << sizeof(edades)/sizeof(edades[0]) << endl;
	 
	cout<<"Hola mundo (';')"<< std::endl; 
	cout<< edad << std::endl; 
	cout<< letra << std::endl;
	cout<< letra1 << std::endl;
	cout<< lista_edades[2]<< std::endl;
	
	cout<< resultado << std::endl;
	cout<< c << endl;
	
	//para espacios del programa <<end o /n
	//tipos de datos 
	
	
	return 0;
	
	
}