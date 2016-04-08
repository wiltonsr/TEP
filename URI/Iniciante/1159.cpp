#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, t;
	
	while((cin >> n) && n > 0 || n < 0){
		t = 0;

		for (int i=n; i <= n+9; i++){
			if (i%2==0){
				t += i;
			}
		}

		cout << t << endl;
	}
	
return 0;
}
