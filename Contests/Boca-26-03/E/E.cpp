#include <bits/stdc++.h>
using namespace std;

int main(){

int idade;
cin >> idade;

if ((idade >= 16) && (idade < 18)) {
  cout << "Alistamento facultativo" << endl;
}
else if ((idade >= 18) && (idade < 70)) {
  cout << "Alistamento obrigatorio" << endl;
}
else if ((idade >= 70)) {
  cout << "Alistamento facultativo" << endl;
}
else {
  cout << "Nao pode se alistar" << endl;
}


return 0;
}
