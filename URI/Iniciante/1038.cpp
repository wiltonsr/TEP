#include <bits/stdc++.h>
using namespace std;

int main(){

int cod, qtd;

cin >> cod >> qtd;

double produtos[5]= {4.00,4.50,5.00,2.00,1.50};

  cout.precision(2);
  cout << "Total: R$ " << fixed << produtos[cod - 1] * qtd << endl;

return 0;
}
