#include<bits/stdc++.h>
using namespace std;

int main(){

	double s=0;

	for (int i=1; i < 101; i++){
		s += 1.0/i;
	}

	cout.precision(2);
	cout << fixed << s << endl;

return 0;
}

