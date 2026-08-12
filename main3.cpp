#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um número: ";
	cin >> num;
	
	if(num < 0){
		cout << "Número negativo. " << endl;
	}else if(num == 0){
		cout << "Número = 0";
	}else{
		cout << "Número positivo. " << endl;
	}
}
