#include <bits/stdc++.h>
using namespace std;

int main(){

int a, b;

cin >> a >> b;

vector<int> vec;
vec.push_back(a);
vec.push_back(b);

sort(vec.begin(), vec.end());

if((vec[1]%vec[0])==0){
  cout << "Sao Multiplos" << endl;
}
else
cout << "Nao sao Multiplos" << endl;

return 0;
}
