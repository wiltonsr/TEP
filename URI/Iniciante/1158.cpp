#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, x, y, t;
	vector<int> v;

	cin >> n;
	
	for(int i=0; i < n; i++){
		cin >> x >> y;
		t = 0;
		v.erase(v.begin(), v.end());
		int max = x;

		for (int i=0; i <= y; i++){
		max += 100; 	
		}
		
		while (x < max){
			if (abs(x)%2==1){
				v.push_back(x);
			}
			x++;
		}

		for (int i=0; i < y; i++){
			t += v[i];
		}
		cout << t << endl;
	}

return 0;
}
