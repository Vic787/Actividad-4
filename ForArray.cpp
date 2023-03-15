#include <iostream>

using namespace std;

main(){
	// int 4 bytes
	int tam = 0;
	int datos[] = {10, 40, 100, 250, 5000};
	tam = sizeof(datos) / sizeof(datos[0]);
	cout << tam << endl;
	/*
	for(int i = 0; i < tam; i++){
		cout << datos[i] << endl;
	}
	*/
	
	system("Pause");
}
