#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, m;
	long long n;
	vector<int> v;

	cin >> t;

	for (int i=0; i<t; i++){
		cin >> n;
		m = round(sqrt(n));
		
		for (int j=1; j<= m; j++){
			if (n%j==0)
				v.push_back(j);
		}
		if (n == 1)
			cout << n << " nao eh primo" << endl;
		else if (v.size() == 1){
			cout << n << " eh primo" << endl;
		}
		else
			cout << n << " nao eh primo" << endl;

		v.erase(v.begin(), v.end());
	}


return 0;
}
