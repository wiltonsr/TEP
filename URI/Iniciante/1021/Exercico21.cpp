#include <bits/stdc++.h>
using namespace std;

int main(){

  int coin = 0;
  int valorInt, j = 0, i = 0;
  double valor;
  int notas[] = { 100, 50, 20, 10, 5, 2, 1 };
  int moedas[] = { 50, 25, 10, 5, 1 };

  cin >> valor;

  valorInt = valor;
  valor -= valorInt;

  cout << valorInt << endl;
  cout << valor << endl;

	cout << "NOTAS:" << endl;
	while(i < 6){
		cout << valorInt/notas[i] << " nota(s) de R$ " << notas[i] << ",00\n";
    valorInt %= notas[i++];
	}

  cout << "MOEDAS:" << endl;

  cout << valorInt/notas[i] << " moedas(s) de R$ " << notas[i] << ",00\n";

  valor = valor * 100;
  coin = round(valor);

  while(j < 5){
    if(moedas[j] >= 10)
      cout << coin/moedas[j] << " moedas(s) de R$ 0." << moedas[j] << endl;
    else
      cout << coin/moedas[j] << " moedas(s) de R$ 0.0" << moedas[j] << endl;
    coin %= moedas[j++];
  }

return 0;
}
