using namespace std;
#include <iostream>

int main(){
	
	int cod1, cod2, num1, num2;
	double valor1, valor2, total = 0;

	cin >> cod1 >> num1 >> valor1;
	cin >> cod2 >> num2 >> valor2;

	total = (num1 * valor1) + (num2 * valor2);

	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << fixed << total << endl;

	return 0;
}
