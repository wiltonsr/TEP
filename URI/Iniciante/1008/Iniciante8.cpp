#include <bits/stdc++.h>

using namespace std;

int main(){

	int num, horas;
  double valor, sal;

  cin >> num;
  cin >> horas;
  cin >> valor;

  sal = horas * valor;

  cout << "NUMBER = " << num << endl;
  cout.precision(2);
  cout << "SALARY = U$ " << fixed << sal << endl;

  return 0;

}
