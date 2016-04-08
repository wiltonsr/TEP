#include<bits/stdc++.h>
using namespace std;

int main(){

	double s=0;

	for (int i=1; i <= 39; i++){
		s += ((2*i)-1)/pow(2,i-1);
	}
	cout.precision(2);
	cout << fixed << s << endl;

return 0;
}
