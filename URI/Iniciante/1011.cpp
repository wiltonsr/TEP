#include <iostream>
#include <math.h>

using namespace std;

int main(){

double r, pi = 3.14159, volume;

cin >> r;

volume = (4.0/3.0) * pi * pow(r,3);

cout.precision(3);
cout << "VOLUME = " << fixed << volume << endl;

return 0;

}
