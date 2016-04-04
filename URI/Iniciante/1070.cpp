#include<bits/stdc++.h>
using namespace std;

int main(){

	int x, y;
	vector<int> v;

	cin >> x;
	cin >> y;

	if(x > y){ 
		for (int i = y; i < x; i++){
			v.push_back(i);
		}
	}
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
return 0;
}
