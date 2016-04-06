#include<bits/stdc++.h>
using namespace std;

int main(){

int a, n, total=0;

cin >> a >> n;

while(n <= 0){
	cin >> n;
}

for (int i = 0; i < n; i++){
	total += a;
	a++;
}

cout << total << endl;

return 0;
}
