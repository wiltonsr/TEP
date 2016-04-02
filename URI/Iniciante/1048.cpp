#include<bits/stdc++.h>
using namespace std;

int main(){
	
	double ns, s;

	cin >> s;

	if ((s >= 0) && (s <= 400.00)){
		ns = s + (s * 0.15); 
	} 
	else if ((s >= 400.01) && (s <= 800.00)){
		ns = s + (s * 0.12); 
	}
	else if ((s >= 800.01) && (s <= 1200.00)){
		ns = s + (s * 0.10); 
	}
	else if ((s >= 1200.01) && (s <= 2000.00)){
		ns = s + (s * 0.07); 
	}
	else{
		ns = s + (s * 0.04); 
	}
	
	cout.precision(2);
	cout << "Novo salario: " << fixed << ns << endl;
	cout << "Reajuste ganho: " << fixed << ns - s << endl;
	cout.precision(0);
	cout << "Em percentual: " << ((ns - s)/s)*100 << " %" << endl;

return 0;
}
