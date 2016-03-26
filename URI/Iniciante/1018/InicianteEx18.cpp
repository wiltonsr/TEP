#include <iostream>

using namespace std;

int main(){

	int valor, i = 0;
	int notas[] = { 100, 50, 20, 10, 5, 2, 1 };

    cin >> valor;
	cout << valor << endl;
	while(i < 7){
		cout << valor/notas[i] << " nota(s) de R$ " << notas[i] << ",00\n";
		valor %= notas[i++];
	}

    return 0;

}
