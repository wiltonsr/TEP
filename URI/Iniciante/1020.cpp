#include <bits/stdc++.h>

using namespace std;

int main(){

	int tempo, ano, meses, dias;

	cin >> tempo;

	ano = tempo / 365;
	tempo %= 365;

	meses = tempo / 30;
	tempo %= 30;

	dias = tempo;

	cout << ano << " ano(s)" << endl;
  cout << meses << " mes(es)" << endl;
  cout << dias << " dia(s)" << endl;

return 0;

}
