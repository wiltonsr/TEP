#include<bits/stdc++.h>
using namespace std;

int main(){

	double s, a, b;

	cin >> s;

	if ((s >= 0.00) && (s <= 2000.00)){
		cout << "Isento" << endl;
	}
	else if ((s >= 2000.01) && (s <= 3000.00)){	
		cout.precision(2);
		cout << "R$ " << fixed << (s - 2000.00) * 0.08 << endl;
	}
	else if ((s >= 3000.01) && (s <= 4500.00)){
		a = s - 3000.00;
		cout.precision(2);
		cout << "R$ " << fixed << (80.00)+(a*0.18) << endl;
	}
	else {
		b = s - 4500.00;
		cout.precision(2);
		cout << "R$ " << fixed << (350.00)+(b*0.28) << endl;
	}


return 0;
}
