#include <bits/stdc++.h>
using namespace std;

int main(){

char c, nome[100];
int i = 1;

cin >> nome;

putchar (toupper(nome[0]));

while(nome[i]){
  c = nome[i];
  putchar (tolower(c));
  i++;
}

cout << endl;

return 0;
}
