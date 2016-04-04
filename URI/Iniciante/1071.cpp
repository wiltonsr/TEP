#include<bits/stdc++.h>
using namespace std;

int main(){

	int x, y, total=0;

	cin >> x;
	cin >> y;

	if (x < y){
	for (int i = x+1; i < y; i++){
		if (abs(i)%2==1){
			total += i;
		}
	}
	}
	else if (x > y){
	for (int i = y+1; i < x; i++){
		if (abs(i)%2==1){
			total += i;
		}
	}
	}
	cout << total << endl;
return 0;
}
