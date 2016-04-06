#include<bits/stdc++.h>
using namespace std;

int main(){

int n, j=1;

cin >> n;

for (int i = 0; i < n; i++){
	cout << j << " " << j+1 << " " << j+2 << "" << " PUM" << endl; 
	j+=4;
}

return 0;
}
