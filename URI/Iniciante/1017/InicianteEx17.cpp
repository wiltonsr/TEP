#include <iostream>

using namespace std;

int main(){

	int horas, vm;
	double litros;

	cin >> horas;
	cin >> vm;

	litros = horas * vm / 12.00;	

	cout.precision(3);
	cout << fixed << litros << endl;


return 0;

}
