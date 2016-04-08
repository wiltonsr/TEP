#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	long long n;
	vector<int> v;

	cin >> t;

	for (int i=0; i<t; i++){
		cin >> n;
		int tt = 0;
		v.erase(v.begin(), v.end());

		for (int j=1; j< n; j++){
			if (n%j==0)
				v.push_back(j);
		}

		for (int j=0; j< v.size(); j++){
			tt += v[j];
		}
		
		if (tt == n)
			cout << n << " eh perfeito" << endl;
		else
			cout << n << " nao eh perfeito" << endl;
	}


return 0;
}
