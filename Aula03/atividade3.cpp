#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um número: ";
	cin >> num;
	
	if(num % 2 == 0){
		cout << "Número par";
	}else{
		cout << "Número impar";
	}
	
	 	
}
