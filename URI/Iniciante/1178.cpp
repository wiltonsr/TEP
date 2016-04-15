#include<bits/stdc++.h>
using namespace std;

int main(){

	double t;
	vector<double> n;

	cin >> t;
	
	for (int i=0; i<100; i++){
		n.push_back(t);
		t /= 2;
		cout.precision(4);
		cout << "N[" << fixed << i << "] = " << n[i] << endl;
	}


return 0;
}
