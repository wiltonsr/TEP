#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v;
	int a;

	for (int i=0; i<20; i++){
		cin >> a; 
		v.push_back(a);
	}

	reverse(v.begin(), v.end());
	
	for (int i=0; i<20; i++){
		cout << "N[" << i << "] = " << v[i] << endl;
	}

return 0;
}
