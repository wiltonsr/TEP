#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, a=0;
	vector<int> n;

	cin >> t;

	for (int i=0; i<1000; i++){
		if(a < t){ 
			n.push_back(a);
			a++;
		}
		else{
			n.push_back(0);
			a = 1;
		}
		cout << "N[" << i << "] = " << n[i] << endl;
	}


return 0;
}
