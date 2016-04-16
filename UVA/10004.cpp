#include<bits/stdc++.h>
using namespace std;

#define MAX 210

int adj[MAX][MAX];
int edges[MAX], colors[MAX];

bool bicolorable;

void dfs(int u, int color){
	if(not bicolorable) return;
	colors[u] = color;
	for (int i=0; i<edges[u]; ++i){
		int v = adj[u][i];
		if(colors[v]==-1)
			dfs(v, 1-color);
		else if(colors[u]==colors[v]){
			bicolorable = false;
			break;
		}
	}
}

int main(){

	int n;

	while(scanf("%d", &n) && n!=0){
		int l;
		memset(edges, 0, sizeof edges);
		memset(colors, -1, sizeof colors);
		bicolorable = true;
		scanf("%d", &l);
		while(l--){
			int u, v;
			scanf("%d %d", &u, &v);
			adj[u][edges[u]++]=v;
			adj[v][edges[v]++]=u;
		}
		dfs(0,0);
		printf("%s\n", (bicolorable ? "BICOLORABLE." : "NOT BICOLORABLE."));
	}

	return 0;
}
