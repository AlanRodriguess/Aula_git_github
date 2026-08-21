#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double salario, salarioAnual, result;
	
	cout << "Digite seu salário mensal: ";
	cin >> salario;
	
	salarioAnual = salario * 12;
	
	if(salarioAnual <= 20000){
		cout << "Isento de imposto de renda" << endl;
	}else if(salarioAnual > 20000 && salarioAnual <= 50000){
		result = salarioAnual * 0.10;
		result = salarioAnual - result;
		cout << "Seu salário anual com o valor de imposto de renda: " << result << endl;
	}else{
		result = salarioAnual * 0.20;
		result = salarioAnual - result;
		cout << "Seu salário anual com o valor de imposto de renda: " << result << endl;
	}
	
	 	
}
