#include<bits/stdc++.h>
using namespace	std;

int main(){

vector<double> n;
int qtd = 0;
double num;

while (cin >> num){
	n.push_back(num);
}

for (int i = 0; i < 6; i++){
	if (n[i] > 0)
		qtd += 1;
}

cout << qtd << " valores positivos" << endl;

return 0;	
}
