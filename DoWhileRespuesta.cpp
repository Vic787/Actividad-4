#include <iostream>

using namespace std;

main(){
	char respuesta = 's';
	
	/*
	while(respuesta == 's' || respuesta == 'S'){
		cout << "Desea ingresar otro valor (s/n): ";
		cin >> respuesta;
	}
	*/
	
	do{
		cout << "Desea ingresar otro valor (s/n): ";
		cin >> respuesta;
	} while(respuesta == 's' || respuesta == 'S');
	
	system("Pause");
}
