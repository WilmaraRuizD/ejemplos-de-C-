#include <iostream>

using namespace std;

int suma(int a, int b ){
		return a+b;
	}
	
	int mutiplique(int a,int b=2){
		return a*b;
	}

int main(){
	
	cout<<suma(2,4) <<endl;
	cout<<mutiplique(200) <<endl;
}