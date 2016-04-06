#include<bits/stdc++.h>
using namespace std;

int main(){

	int q=0, s=0, x, z;

	cin >> x;
	cin >> z;
	
	while(z <= x){
		cin >> z;
	}

	for (int i=x; i < z; i++){
		s += i;
		q += 1; 
		if (s > z)
			break;
	}

	cout << q << endl;
return 0;
}
