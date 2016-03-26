#include <bits/stdc++.h>
using namespace std;

int main(){

int teste, dim;

cin >> teste;

for (int j = 0; j < teste; j++) {
  int r = 0;
  cin >> dim;
  int v[dim], w[dim];
  for (int i = 0; i < dim; i++){
     cin >> v[i];
  }

  for (int i = 0; i < dim; i++){
     cin >> w[i];
  }

  for (int i = 0; i < dim; i++) {
    r += w[i] * v[i];
  }
  if (r == 0){
    cout << "Caso #" << j+1 << ": " << "reto" << endl;
  }
  else if (r > 0){
    cout << "Caso #" << j+1 << ": " << "agudo" << endl;
  }
  else {
    cout << "Caso #" << j+1 << ": " << "obtuso" << endl;
  }
}

return 0;
}
