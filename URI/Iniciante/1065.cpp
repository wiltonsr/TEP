#include<bits/stdc++.h>
using namespace	std;

int main(){

vector<int> n;
int qtd = 0;
int num;

while (cin >> num){
	n.push_back(num);
}

for (int i = 0; i < 5; i++){
	if (n[i]%2== 0)
		qtd += 1;
}

cout << qtd << " valores pares" << endl;

return 0;	
}
