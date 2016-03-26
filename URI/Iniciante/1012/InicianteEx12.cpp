#include <iostream>

using namespace std;

int main(){

double a, b, ce, pi = 3.14159;

cin >> a >> b >> ce;

cout.precision(3);
cout << "TRIANGULO: " << fixed << (a * ce ) / 2 << endl;

cout.precision(3);
cout << "CIRCULO: " << fixed << pi * ce * ce << endl; 

cout.precision(3);
cout << "TRAPEZIO: " << fixed << ce * (a + b) / 2 << endl;

cout.precision(3);
cout << "QUADRADO: " << fixed << b * b << endl;

cout.precision(3);
cout << "RETANGULO: " << fixed << a * b << endl;

return 0;

}
