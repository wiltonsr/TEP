#include<bits/stdc++.h>
using namespace std;

int main(){

	map<int, string> v;
	int n;

	cin >> n;

	v[61] = "Brasilia";
	v[71] = "Salvador";
	v[11] = "Sao Paulo";
	v[21] = "Rio de Janeiro";
	v[32] = "Juiz de Fora";
	v[19] = "Campinas";
	v[27] = "Vitoria";
	v[31] = "Belo Horizonte";

	auto it = v.find(n);

	if (it == v.end()){
		cout << "DDD nao cadastrado" << endl;
	}
	else{
		cout << it->second << endl; 
	}

return 0;	
}
