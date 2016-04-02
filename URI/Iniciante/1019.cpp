#include <iostream>

using namespace std;

int main(){

	int tempo, hora, min, seg;

	cin >> tempo;

	hora = tempo / 3600;
	tempo %= 3600;

	min = tempo / 60;
	tempo %= 60;

	seg = tempo;

	cout << hora << ":" << min << ":" << seg << endl;

return 0;

}
