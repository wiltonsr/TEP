using namespace std;
#include<iostream>

int main(){

double raio, n = 3.14159;
double area;

cin >> raio;

area = n * (raio * raio);

cout.precision(4);
cout << "A=" << fixed << area << endl;

return 0;
}
