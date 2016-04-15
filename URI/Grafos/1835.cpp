#include <bits/stdc++.h>

using namespace std;

#define MAX 110

struct adj{
	vector <int> v;
};

int visitado[MAX];
struct adj adj[MAX];

int bfs(int a){
	queue <int> q;
	q.push(a);
	int atual;

	while(!q.empty()){
		atual = q.front();
		q.pop();
		visitado[atual] = 1;

		for ( int i = 0; i < adj[atual].v.size(); i++ ){
			if ( !visitado[adj[atual].v[i]] )
				q.push(adj[atual].v[i]);
		}
	}
}

int main(){

	int test;
	int cidades;
	int conexoes;
	int a, b;

	scanf("%d", &test);

	for ( int t = 1; t <= test; t++ ){
		int n = 0;
		memset(visitado,0,sizeof visitado);
		scanf("%d", &cidades);
		scanf("%d", &conexoes);
		
		for ( int j = 0; j < conexoes; j++ ){
			scanf("%d %d", &a, &b);
			adj[a].v.push_back(b);
			adj[b].v.push_back(a);
		}

		for ( int i = 1; i <= cidades; i++ ){
			if ( visitado[i] == 0 ){
				bfs(i);
				n++;
			}
		}

		if ( n - 1 == 0 ){
			printf("Caso #%d: a promessa foi cumprida\n", t);
		}
		else{
			printf("Caso #%d: ainda falta(m) %d estrada(s)\n", t, n - 1);
		}

		for ( int i = 0; i < MAX; i++ )
			adj[i].v.clear();
	}

	return 0;
}
