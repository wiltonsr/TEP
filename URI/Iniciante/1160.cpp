#include<bits/stdc++.h>
using namespace std;

int main(){

int q, pa, pb, tb=0, ta=0, y=0;
double ca, cb;

	cin >> q;

	for (int i=0; i < q; i++){
		
		y = 0;

		cin >> pa >> pb >> ca >> cb;
		
		while (pb >= pa){
			pb += (pb * cb / 100);
			pa += (pa * ca / 100);
			y++;
			if (y>= 101)
				break;
		}

		if (y <= 100)
			cout << y << " anos." << endl;
		else
			cout << "Mais de 1 seculo." << endl;
	
	}


return 0;
}
