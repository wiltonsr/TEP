#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v;
int n, par = 0, impar = 0, pos = 0, neg = 0;

while (cin >> n){
	v.push_back(n);
}

for (int i = 0; i < 5; i++){
	if (v[i]%2 == 0){
		par += 1;
	}
	else
		impar += 1;
	if (v[i] > 0){
		pos += 1;
	}
	else if (v[i] < 0)
		neg += 1;
}

cout << par << " valor(es) par(es)" << endl;
cout << impar << " valor(es) impar(es)" << endl;
cout << pos << " valor(es) positivo(s)" << endl;
cout << neg << " valor(es) negativo(s)" << endl;

return 0;
}
