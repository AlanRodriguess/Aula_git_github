#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	cout << "Digite uma letra do alfabeto: ";
	cin >> letra;
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		cout << "Vogal" << endl;
	}else{
		cout << "Consoante" << endl;
	}
		 	
}
