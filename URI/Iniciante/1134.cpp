#include<bits/stdc++.h>
using namespace std;

int main(){

int a=0, g=0, d=0, o;

while ((cin >> o) && o != 4){
	if (o == 1){
		a += 1;
	}
	else if (o == 2){
		g += 1;
	}
	else if (o == 3){
		d += 1;
	}
}

cout << "MUITO OBRIGADO" << endl;
cout << "Alcool: " << a << endl; 
cout << "Gasolina: " << g << endl;
cout << "Diesel: " << d << endl;

return 0;
}
