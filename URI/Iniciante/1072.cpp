#include<bits/stdc++.h>
using namespace std;

int main(){

long long n, x, in=0, out=0;

cin >> n;

for (int i = 0; i < n; i++){
	cin >> x;
	if ((x >= 10) && (x <= 20)){
		in += 1;
	}
	else
		out += 1;
}

cout << in << " in" << endl;
cout << out << " out" << endl;

return 0;
}
