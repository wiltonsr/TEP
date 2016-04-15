#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> impar, par;
	int n;

	for (int i=0; i<15; i++){
		cin >> n;

		if(impar.size() == 5){
			for(int j=0; j<impar.size(); j++){
				cout << "impar[" << j << "] = " << impar[j] << endl; 	
			}
			impar.erase(impar.begin(), impar.end());
		}
		if(par.size()==5){
			for(int j=0; j<par.size(); j++){
				cout << "par[" << j << "] = " << par[j] << endl; 	
			}
			par.erase(par.begin(), par.end());
		}

		if(n%2==0){
			par.push_back(n);
		}
		else
			impar.push_back(n);
	}

	for(int j=0; j<impar.size(); j++){
		cout << "impar[" << j << "] = " << impar[j] << endl; 	
	}
	for(int j=0; j<par.size(); j++){
		cout << "par[" << j << "] = " << par[j] << endl; 	
	}


	return 0;
}
