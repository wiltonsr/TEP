#include <bits/stdc++.h>
using namespace std;

int main(){

double a, b, c, delta, x1, x2;

cin >> a >> b >> c;

delta = pow(b, 2) - (4 * (a * c));

if ((delta < 0) || (a == 0.0)){
  cout << "Impossivel calcular" << endl;
}
else {
  x1 = (-b + sqrt(delta))/(2 * a);
  x2 = (-b - sqrt(delta))/(2 * a);
  cout.precision(5);
  cout << "R1 = "<< fixed << x1 << endl;
  cout.precision(5);
  cout << "R2 = "<< fixed << x2 << endl;
}

return 0;
}
