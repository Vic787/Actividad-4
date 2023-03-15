#include <iostream>

using namespace std;

main(){
	// i++, i+=1, i=i+1
	
	for(int i = 0; i < 10; i++){ // 0 hasta 9
		if(i==5){
			continue;
			cout << "if" << endl;
		}
		cout << i << endl;
	}
	
	cout << "Fuera del for" << endl;
	system("Pause");
}
