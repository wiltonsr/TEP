#include<bits/stdc++.h>
using namespace std;

int main(){

	pair<int, int> p;
	int n, m, a;

	while ((cin >> n >> m) && n > 0 && m > 0){
		int t=0;
		if(n > m)
			p = make_pair(m, n);
		else
			p = make_pair(n, m);
		
		a = p.first;
		while (a <= p.second){
			cout << a << " ";
			t += a;
			a++;
		}
		cout << "Sum=" << t << endl;
	}

return 0;
}
