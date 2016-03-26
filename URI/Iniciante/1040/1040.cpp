#include <bits/stdc++.h>
using namespace std;

int main(){

double p1, p2, p3, p4, exame, media, media2;

cin >> p1 >> p2 >> p3 >> p4;

media = ((p1 * 2)+(p2 * 3)+(p3 * 4)+(p4 * 1))/10.0;

 cout.precision(1);
 cout << "Media: " << fixed << media << endl;

 if (media >= 7.0){
   cout << "Aluno aprovado." << endl;
 }
 else if (media < 5.0){
   cout << "Aluno reprovado." << endl;
 }
 else {
  cout << "Aluno em exame." << endl;
  cin >> exame;
  cout.precision(1);
  cout << "Nota do exame: " << fixed << exame << endl;
  media2 = (media + exame)/2;
  if (media2 >= 5){
    cout << "Aluno aprovado." << endl;
  }
  else {
    cout << "Aluno reprovado." << endl;
  }

  cout.precision(1);
  cout << "Media final: " << fixed << media2 << endl;
 }

return 0;
}
