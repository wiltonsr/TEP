#include<bits/stdc++.h>
using namespace std;

int main(){

  int r, in, f, mi, mf;
  vector<int> v;

  cin >> in >> mi >> f >> mf;

  for (int i = in; i < 24; i++) {
    v.push_back(i);
  }
  for (int i = f; i > 0; i--) {
    v.push_back(i);
  }

  if (mf > mi){
    r = mf - mi;
  }
  else if (mf < mi){
    r = 60 - (mi - mf);
    v.pop_back();
  }

  if ((mf > mi) && (f > in)){
    cout << "O JOGO DUROU " << f - in << " HORA(S) E " << r << " MINUTO(S)"  << endl;
  }
  else if (f > in){
    cout << "O JOGO DUROU " << (f - in) - 1 << " HORA(S) E " << r << " MINUTO(S)"  << endl;
  }
  else {
    cout << "O JOGO DUROU " << v.size() << " HORA(S) E " << r << " MINUTO(S)"  << endl;
  }

return 0;
}
