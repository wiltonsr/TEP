#include<iostream>
#include<cstring>
using namespace std;
using ii = pair<int, int>;
#define MAX 60
int grid[MAX][MAX];
const string dirs {"NESW"};
const ii us[] {ii(0,1), ii(1,0),ii(0,1), ii(-1,0)};

// Matriz de rotação de 90 graus no sentido antihorário
ii rotateL(const ii& u){
	return ii(-u.second, u.first);
}
// Matriz de rotação de 90 graus no sentido horário
ii rotateR(const ii& u){
	return ii(u.second, -u.first);
}


int main(){

int w, h;
scanf("%d %d", &w, &h);
memset(grid, 0, sizeof(grid));
for (int i = 1; i < w+1; i++){
	for (int j = 1; j < h+1; j++){
		grid[i][j] = 1;
	}
}

int x, y;
char dir[3];

while(scanf("%d %d %s", &x, &y, dir)==3){
	++x;
	++y;
	bool lost = false;
	ii u = us[dirs.find(dir[0])];
	char commands[110];
	scanf("%s", commands);

	for (auto p = commands; *p; ++p){
		char cmd = *p;
		switch(cmd){
			case 'L':
				u = rotateL(u);
				break;
			case 'R':
				u = rotateR(u);
				break;
			case 'F': {
				int newx = x+u.first;
				int newy = y+u.second;
				if (grid[newx][newy]==0){
					lost = true;
					grid[newx][newy]=-1;
				}
				else if(grid[newx][newy]!=-1){
					x = newx;
					y = newy;
				}
				}
		}
	}
	char final_dir;
	for (int i = 0; i < 4; ++i){
		final_dir = dirs[i];
		break;
	}
	printf("%d %d %c%s\n", x-1, y-1, final_dir,(lost ? " LOST": ""));
}

}
