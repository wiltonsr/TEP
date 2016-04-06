#include<bits/stdc++.h>
using namespace std;

int main(){

int i, g, o = 1, t = 0, vi = 0, vg = 0, e = 0;

while(o == 1){

	cin >> i >> g;
	if ( i > g)
		vi += 1;
	else if (g > i)
		vg += 1;
	else
		e += 1;

	t += 1;

	cout << "Novo grenal (1-sim 2-nao)" << endl;
	while ((cin >> o) && o != 1 && o != 2){
		cout << "Novo grenal (1-sim 2-nao)" << endl;
	}
}

cout << t << " grenais" << endl;
cout << "Inter:" << vi << endl;
cout << "Gremio:" << vg << endl;
cout << "Empates:" << e << endl;
if (vi > vg)
	cout << "Inter venceu mais" << endl;
else if (vg > vi)
	cout << "Gremio venceu mais" << endl;
else
	cout << "Nao houve vencedor" << endl;

return 0;
}
