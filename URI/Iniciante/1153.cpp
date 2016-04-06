#include<bits/stdc++.h>
using namespace std;

int fat(long long n){
    if ((n == 0) || (n == 1)){
			return 1;
		}
		else {
			return n * fat(n - 1);
		}
}

int main(){

long long n;

cin >> n;

cout << fat(n) << endl;

return 0;
}
