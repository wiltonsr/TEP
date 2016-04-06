#include<bits/stdc++.h>
using namespace std;

int main(){

int x, y, t;

cin >> x;
cin >> y;

if (x > y){
	t = y;
	y = x;
	x = t;
}

for (int i = x+1; i < y; i++){
	if ((i%5==2) || (i%5==3)){
		cout << i << endl;
	}
}

return 0;
}
