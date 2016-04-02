#include <bits/stdc++.h>

using namespace std;

int main(){

	double a, b, c, media;

  cin >> a;
  cin >> b;
  cin >> c;

  media = ((a * 2) + (b * 3.0) + (c * 5.0))/10;

  cout.precision(1);
  cout << "MEDIA = " << fixed << media << endl;

  return 0;

}
