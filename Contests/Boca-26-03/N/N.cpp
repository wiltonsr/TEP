#include <bits/stdc++.h>
using namespace std;

int main(){

vector<vector<int> > v, w, r;

int test, dim, el1, el2;

cin >> test;

for (int i = 0; i < test; i++) {
  cin >> dim;
  for (int j = 0; j < dim; j++) {
    cin >> v[i][j];
  }
  for (int k = 0; k < dim; k++) {
    cin >> w[i][k];
  }
  for (int l = 0; l < dim; l++) {
    r[i][l] = v[i][l] * w[i][l];
  }
}

for (int i = 0; i < test; i++){
  for (int j = 0; j < dim; j++){
    cout << v[i][j] << " ";
  }
  cout << endl;
  for (int j = 0; j < dim; j++){
    cout << w[i][j] << " ";
  }
  cout << endl;
  for (int j = 0; j < dim; j++){
    cout << r[i][j] << " ";
  }
  cout << endl;
}


return 0;
}
