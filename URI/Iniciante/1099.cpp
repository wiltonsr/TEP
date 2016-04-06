#include<bits/stdc++.h>
using namespace std;

int main(){

int n, x, y, t=0;
vector<pair<int, int> > v;
pair<int, int> p;

cin >> n;

while (cin >> x >> y){
	if (x > y)
		p = make_pair(y, x);
	else
		p = make_pair(x, y);

	v.push_back(p);
}

for (int i=0; i < v.size(); i++){
	int c = v[i].first + 1;
	int b = 1;
	while (c < v[i].second){
		int a = v[i].first + b;
		if (a%2==1)
			t += a;
		c++;
		b++;
	}
	cout << t << endl;
	t = 0;
}

return 0;
}
