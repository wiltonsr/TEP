#include <bits/stdc++.h>
using namespace std;

int main(){

int in, f;
vector<int> v;

cin >> in >> f;

for (int i = in; i < 24; i++) {
  v.push_back(i);
}
for (int i = f; i > 0; i--) {
  v.push_back(i);
}

if (f > in){
  cout << "O JOGO DUROU " << f - in << " HORA(S)" << endl;
}
else {
  cout << "O JOGO DUROU " << v.size() << " HORA(S)" << endl;
}

return 0;
}
