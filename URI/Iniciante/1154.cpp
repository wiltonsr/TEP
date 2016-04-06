#include<bits/stdc++.h>
using namespace std;

int main(){

double i, q=0, ti=0;

while ((cin >> i) && i > 0){
	ti += i;
	q += 1;
}

cout.precision(2);
cout << fixed << ti/q << endl;

return 0;
}
