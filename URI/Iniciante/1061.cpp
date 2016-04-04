#include<bits/stdc++.h>
using namespace std;

int main(){

	unsigned long long di = 0, hi = 0, mi = 0, si = 0;
	unsigned long long df = 0, hf = 0, mf = 0, sf = 0;
	unsigned long long total = 0;

	scanf("Dia %lld", &di);
	scanf("%lld : %lld : %lld\n",&hi, &mi, &si);
	scanf("Dia %lld", &df);
	scanf("%lld : %lld : %lld",&hf, &mf, &sf);
	
	di *= 86400;
	hi *= 3600;
	mi *= 60;
	df *= 86400;
	hf *= 3600;
	mf *= 60;
	
	total = (df + hf + mf + sf) - (di + hi + mi + si);
	cout << total/86400 << " dia(s)" << endl;
	cout << (total%86400)/3600 << " hora(s)" << endl;
	cout << ((total%86400)%3600)/60 << " minuto(s)" << endl;
	cout << (((total%86400)%3600)%60) << " segundo(s)" << endl;

	return 0;
}
