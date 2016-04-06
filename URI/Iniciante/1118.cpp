#include<bits/stdc++.h>
using namespace std;

int main(){

int o = 1;
double n1, n2;

while(o == 1){
while ((cin >> n1) && n1 < 0.0 || n1 > 10.0){
	cout << "nota invalida" << endl;
}
while ((cin >> n2) && n2 < 0.0 || n2 > 10.0){
	cout << "nota invalida" << endl;
}
cout.precision(2);
cout << "media = " << fixed << (n1+n2)/2 << endl;

cout << "novo calculo (1-sim 2-nao)" << endl;
while ((cin >> o) && o != 1 && o != 2){
cout << "novo calculo (1-sim 2-nao)" << endl;
}
}
return 0;
}
