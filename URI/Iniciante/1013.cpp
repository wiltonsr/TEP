#include <iostream>
#include <cmath>
using namespace std;

int main(){

int maior, a, b, c;

cin >> a >> b >> c;

maior = (a + b + abs(a - b)) / 2;
maior = (maior + c + abs(maior - c)) / 2;

cout << maior << " eh o maior" << endl;

return 0;

}
