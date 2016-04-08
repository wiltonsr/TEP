#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, a;
	long long n, f1, f2, fn;
	map<long long, long long> m;

	cin >> t;

	f1 = 1;
	f2 = 1;

	for (int i = 3; i <= 60; i++){
		m[0] = 0;
		m[1] = 1;
		m[2] = 1;
		fn = f1;
		f1 = f2;
		f2 = f2 + fn;
		m[i] = f2;
	}

	for (int i=0; i<t; i++){
		cin >> a;
		cout << "Fib(" << a << ") = " << m[a] << endl;
	}


	return 0;
}
