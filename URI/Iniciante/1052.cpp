#include<bits/stdc++.h>
using namespace std;

int main(){

map<int, string> m;
int n;

cin >> n;

m[1] = "January";
m[2] = "February";
m[3] = "March";
m[4] = "April";
m[5] = "May";
m[6] = "June";
m[7] = "July";
m[8] = "August";
m[9] = "September";
m[10] = "October";
m[11] = "November";
m[12] = "December";

auto it = m.find(n);

if (it == m.end()){
	cout << "DDD nao cadastrado" << endl;
}
else{
	cout << it->second << endl; 
}

return 0;	
}
