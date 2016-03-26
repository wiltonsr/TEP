#include <bits/stdc++.h>
using namespace std;

int main(){

int qtd, peso, total = 0;

cin >> qtd;

for (int i = 0; i < qtd; i++) {
  cin >> peso;
  total = total + peso;
}

cout << "Carga total: " << total << " kilogramas" << endl;

return 0;
}
