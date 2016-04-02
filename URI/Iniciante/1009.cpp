#include<iostream>
#include<string>

using namespace std;

int main(){

string nome;
double res = 0, salario, vendas;

getline (cin, nome);
cin >> salario;
cin >> vendas;

res = salario + (vendas * 0.15);

cout.precision(2);
cout << "TOTAL = R$ " << fixed << res << endl;

return 0;

}
