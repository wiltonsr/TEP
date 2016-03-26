#include <iostream>
#include <cmath>

 using namespace std;

int main(){

	double res, x1, x2, y1, y2;

	cin >> x1 >> y1;
	cin >> x2 >> y2;

	res = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	
	cout.precision(4);
	cout << fixed << res << endl;

return 0;

}
