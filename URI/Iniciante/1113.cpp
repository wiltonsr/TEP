#include<bits/stdc++.h>
using namespace std;

int main(){

int x, y;

while ((cin >> x >> y) && x != y){
	if (x > y){
		cout << "Decrescente" << endl;
	}
	else
		cout << "Crescente" << endl;
}


return 0;
}
