#include<bits/stdc++.h>
using namespace std;

int main(){

	int a;
	vector<int> v;

	cin >> a;

	for (int i=0; i<10; i++){
		v.push_back(a);
		a *= 2;
		cout << "N[" << i << "] = " << v[i] << endl;
	}


return 0;
}
