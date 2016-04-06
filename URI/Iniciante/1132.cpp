#include<bits/stdc++.h>
using namespace std;

int main(){

int t, total=0, x, y;

cin >> x;
cin >> y;

if (x > y){
	t = y;
	y = x;
	x = t;
}

for(int i = x; i <= y; i++){
	if (i%13!=0){
		total += i;
	}
}

cout << total << endl;

return 0;
}
