#include<bits/stdc++.h>
using namespace std;

int main(){

vector<pair<int, char> > v;
pair<int, char> p;
int q, total, tc = 0, tr = 0, ts = 0;
char t;

cin >> total;

while (cin >> q >> t){
	p = make_pair(q, t);
	v.push_back(p);
}

for (int i = 0; i < total; i++){
	if (v[i].second == 'C'){
		tc += v[i].first;
	}
	else if (v[i].second == 'R'){
		tr += v[i].first;
	}
	else if (v[i].second == 'S'){
		ts += v[i].first;
	}
}

cout << "Total: " << tc+tr+ts << " cobaias" << endl;
cout << "Total de coelhos: " << tc << endl;
cout << "Total de ratos: " << tr << endl;
cout << "Total de sapos: " << ts << endl;
cout.precision(2);
cout << "Percentual de coelhos: " << fixed << (tc * 100.00)/(tc+tr+ts) << " %" << endl;
cout << "Percentual de ratos: " << fixed << (tr * 100.00)/(tc+tr+ts) << " %" << endl;
cout << "Percentual de sapos: " << fixed << (ts * 100.00)/(tc+tr+ts) << " %" << endl;
return 0;
}
