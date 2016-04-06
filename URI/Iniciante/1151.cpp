#include<bits/stdc++.h>
using namespace std;


int main(){
    
		long n, f1, f2, fn;
		
		cin >> n;
    
		f1 = 1;
    f2 = 1;
   	cout << "0 ";

    for (int i = 1; i < n; i++){
			if (i == n-1)
				cout << f1 << endl;
			else
				cout << f1 << " ";
		  fn = f1;
		  f1 = f2;
		  f2 = f2 + fn;
		}

return 0;	
}
