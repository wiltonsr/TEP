#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, m = 0, p;
	vector<int> v;

	while(cin >> n){
		v.push_back(n);
	}
	
	for (int i = 0; i < v.size(); i++){
		if (v[i] > m){
			m = v[i];
			p = i;
		}
	}

	cout << m << endl;
	cout << p+1 << endl;
return 0;
}
