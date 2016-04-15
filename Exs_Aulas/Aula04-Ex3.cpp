#include<bits/stdc++.h>
using namespace std;
#define MAX 110

int adj[MAX][MAX];
int in[MAX], out[MAX];
int test = 0;
int main(){

	int N;
	while(scanf("%d",&N)==1){
		map<string, int> ids;
		map<int, string> names;
		memset(out, 0, sizeof(out));
		memset(in, 0, sizeof(in));

		for(int id=0; id<N; ++id){
			char name[60];
			scanf("%s", name);
			ids[name] = ++id;
			names[id] = name;
		}
		int M;
		scanf("%d", &M);
		
		while(M--){
			char a[60], b[60];
			scanf("%s %s", a, b);
			int u = ids[a];
			int v = ids[b];
			adj[u][out[u]++] = v;
			in[v]++;
		}

		queue<int> order;
		priority_queue<int, vector<int>,greater<int> > q;
		for (int i=0; i<N; ++i){
			for (int j=1; j<N; ++j){
				if(in[j]==0){
					q.push(j);
					in[j]=-1;
				}
			}
		}
		int u=q.top();
		q.pop();
		order.push(u);
		for(int j=0; j<out[u]; ++j){
			int v=adj[u][j];
			in[v]--;
		}

		printf("Case #%d: Dilbert should drink beverage in this order:", ++test);
		while(not order.empty()){
			printf(" %s", names[order.front()].c_str());
			order.pop();
		}
		printf(".\n\n");
	}

return 0;
}
