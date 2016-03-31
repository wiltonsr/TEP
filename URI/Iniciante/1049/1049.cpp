#include <bits/stdc++.h>
using namespace std;

int main(){

string a, b, c;

cin >> a;
cin >> b;
cin >> c;

if (a.compare("vertebrado") == 0){
	if (b.compare("ave") == 0){
		if (c.compare("carnivoro") == 0){
			cout << "aguia" << endl;
		}
		else {
			cout << "pomba" << endl;
		}
	}
	else {
		if (c.compare("onivoro") == 0){
			cout << "homem" << endl;
		}
		else{
			cout << "vaca" << endl;
		}
	}
}
else{
	if (b.compare("inseto") == 0){
		if (c.compare("hematofago") == 0){
			cout << "pulga" << endl;
		}
		else {
			cout << "lagarta" << endl;
		}
	}
	else {
		if (c.compare("hematofago") == 0){
			cout << "sanguessuga" << endl;
		}
		else {
			cout << "minhoca" << endl;
		}
	}
}
	
return 0;
}
