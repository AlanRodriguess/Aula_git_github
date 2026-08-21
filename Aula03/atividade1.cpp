#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	
	cout << "Digite o primeiro lado: ";
	cin >> lado1;
	
	cout << "Digite o segundo lado: ";
	cin >> lado2;
	
	cout << "Digite o terceiro lado: ";
	cin >> lado3;
	
	if(lado1 == lado2 == lado3){
		cout << "Triângulo equilátero" << endl;
	}else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
		cout << "Triângulo isósceles" << endl;
	}else{
		cout << "Triângulo escaleno" << endl;
	}
	
	 	
}
