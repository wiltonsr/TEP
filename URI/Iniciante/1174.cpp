#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<double> v;
	double a;

	for (int i=0; i<100; i++){
		cin >> a; 
		v.push_back(a);
	}
	
	for (int i=0; i< 100; i++){
		if(v[i] <= 10){
			cout.precision(1);
			cout << "A[" << i << "] = " << fixed << v[i] << endl;
		}
	}

return 0;
}
