#include <iostream>

using namespace std;

int main(){

int km;
double d;

cin >> km;
cin >> d;

cout.precision(3);
cout << fixed << km/d << " km/l" << endl;


return 0;

}
