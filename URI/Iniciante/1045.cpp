#include <bits/stdc++.h>
using namespace std;

int main(){

double a, b, c;
vector<double> v;
cin >> a >> b >> c;

v.push_back(a);
v.push_back(b);
v.push_back(c);

sort(v.rbegin(), v.rend());

if (v[0] >= v[1] + v[2]){
  cout << "NAO FORMA TRIANGULO" << endl;
}
else if ((v[0]*v[0]) == ((v[1]*v[1]) + (v[2]*v[2]))){
  cout << "TRIANGULO RETANGULO" << endl;
}
else if ((v[0]*v[0]) > ((v[1]*v[1]) + (v[2]*v[2]))){
  cout << "TRIANGULO OBTUSANGULO" << endl;
}
else if ((v[0]*v[0]) < ((v[1]*v[1]) + (v[2]*v[2]))){
  cout << "TRIANGULO ACUTANGULO" << endl;
}

if ((v[0] == v[1]) && (v[1] == v[2])) {
  cout << "TRIANGULO EQUILATERO" << endl;
}
else if ((v[0] == v[1]) || (v[1] == v[2]) || (v[2] == v[0])){
  cout << "TRIANGULO ISOSCELES" << endl;
}


return 0;
}
