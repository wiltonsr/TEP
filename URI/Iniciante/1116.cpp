#include<bits/stdc++.h>
using namespace std;

int main(){

double p, s;
int n;

cin >> n;

for(int i = 0; i < n; i++){
	cin >> p >> s;
	if (s == 0){
		cout << "divisao impossivel" << endl;
	}
	else{
		cout.precision(1);
		cout << fixed << p/s << endl;
	}
}

return 0;
}
