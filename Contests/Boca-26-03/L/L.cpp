#include <bits/stdc++.h>
using namespace std;

int main(){

int dias, hora, total = 0, dev;

cin >> dias;

for (int i = 0; i < dias; i++) {
  cin >> hora;
  total = total + hora;
}

dev = dias * 8;

if (dev == total){
  cout << "A jornada de trabalho foi cumprida corretamente" << endl;
}
else if (total > dev){
  cout << "Banco de horas: " << total%8 << " hora(s)" << endl;
}
else if (total < dev){
  cout << "Horas a serem pagas: " << dev - total << " hora(s)" << endl;
}

return 0;
}
