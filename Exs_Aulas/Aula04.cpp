#include<bits/stdc++.h>
using namespace std;

#define MAX 110
char grid[MAX][MAX];
int n;
void dfs(int x, int y){
	grid[x][y]='.';
	n++;
	cout << 1;
	for (int i=-1; i<=1; ++i){
		for (int j=-1; j<=1; ++j){
			if(grid[x+i][y+j]=='*'){
				dfs(x+i, y+j);	
			}
		}
	}
}

int main(){

	int r, c;
	while(scanf("%d %d",&r, &c), r|c){
		
		memset(grid, 0, sizeof grid);
		
		for(int i=1; i<=r; ++i){
			scanf("%s", &grid[i][1]);
		}

		int stars = 0;

		for(int i=1; i<=r; i++){
			for(int j=1; i<=c; j++){
				if(grid[i][j] != '*'){
					continue;
				}
				n = 0;
				dfs(i, j);
				if(n==1){
					++stars;
				}
			}
		}

		cout << stars << endl;
	}

return 0;
}
