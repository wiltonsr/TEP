#include <bits/stdc++.h>
using namespace std;

int main(){

int t;

cin >> t;

cout << t << " horas de tratamento:" << endl;

if (t%3 == 0){
  cout << "Troca do soro" << endl;
}
if (t%5 == 0){
  cout << "Injecao de antibioticos" << endl;
}
if (t%12 == 0){
  cout << "Reavaliacao" << endl;
}
else
  cout << "" << endl;

return 0;
}
