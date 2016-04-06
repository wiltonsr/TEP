#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	vector <double> va, vb, vc;
	double a, b, c;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a >> b >> c;
		va.push_back(a);
		vb.push_back(b);
		vc.push_back(c);
	}

	for (int i = 0; i < n; i++){
		cout.precision(1);
		cout << fixed << ((va[i] * 2) + (vb[i] * 3) + (vc[i] * 5))/10 << endl;
	}

return 0;
}
