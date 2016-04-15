#include<bits/stdc++.h>
using namespace std;

#define MAX 60
char grid[MAX][MAX];
void bfs(int x, int y){
	queue<pair<char, pai<int, int> > > q;
	q.push(grid[x][y], make_pair(x,y));
	grid[x][y]='.';

	while(not q.empty()){
		auto p = q.front();
		q.pop();
		char c = p.first;
		x = p.second.first;
		y = p.second.second;

		if(c=='X'){
			n++; grid[x][y]='.';
			queue<pair<int,int> > xs;
			xs.push(make_pair(x,y));

			while(not xs.empty()){
				auto t = xs.front();
				xs.pop();
				int i = t.first;
				int j = t.second;
				pair<int, int> 
			}
		}
	}
}
int n=0, test=0;

int main(){

	int r, c;
	while(scanf("%d %d", &r, &c), r|c){
		memset(grid, 0, sizeof grid);

		for(int i=1; i<r; ++i)
			scanf("%s", &grid[i][1]);
		vector<int> results;

		for(int i=1; i<=r;i++){
			for(int j=1; j<=c; j++){
				if(grid[i][j]=='.')
					continue;
				bfs(i, j);
				results.push_back(n);
			}
		}

		printf("Throw %d\n",++test);
		sort(results.begin(), results.end());
		printf("%d", results[0]);
		for(size_t i=1; i<results.size(); ++i)
			printf(" %d", results[i]);
		printf("\n");
	}

	return 0;
}
