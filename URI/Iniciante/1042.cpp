#include <bits/stdc++.h>
using namespace std;

int main(){

int a, b, c;
cin >> a >> b >> c;

vector<int> vec;
vec.push_back(a);
vec.push_back(b);
vec.push_back(c);

sort(vec.begin(), vec.end());

cout << vec[0] << endl;
cout << vec[1] << endl;
cout << vec[2] << endl;
cout << endl;
cout << a << endl;
cout << b << endl;
cout << c << endl;
return 0;
}
