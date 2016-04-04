#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
long long x;
vector<long long> v;
cin >> n;

while (cin >> x){
	v.push_back(x);
}

for (int i = 0; i < n; i++){
	if ((v[i] > 0) && (v[i]%2==0)){
		cout << "EVEN POSITIVE" << endl;
	}
	else if ((v[i] > 0) && (v[i]%2!=0)){
		cout << "ODD POSITIVE" << endl;
	}
	else if ((v[i] < 0) && (v[i]%2==0)){
		cout << "EVEN NEGATIVE" << endl;
	}
	else if ((v[i] < 0) && (v[i]%2!=0)){
		cout << "ODD NEGATIVE" << endl;
	}
	else{
		cout << "NULL" << endl;
	}
}


return 0;
}
