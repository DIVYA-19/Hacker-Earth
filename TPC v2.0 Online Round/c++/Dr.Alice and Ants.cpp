#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

const int MAX_N = 150 + 5, NO_OF_NEIGHBOURS = 4, UNVISITED = -1;
int grid[MAX_N][MAX_N], distance_graph[MAX_N][MAX_N];
int next_x[NO_OF_NEIGHBOURS]= {-1,1,0,0};
int next_y[NO_OF_NEIGHBOURS] = {0,0,1,-1};

int main(){
	memset(distance_graph, UNVISITED, sizeof(distance_graph));
	int n,m;
	cin >> n >> m;
	
	queue<pair <int,int> > Q;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> grid[i][j];
			if (grid[i][j] == 1){
				Q.push(make_pair(i,j));
				distance_graph[i][j] = 0;
			}
		}
	}
	while(Q.size()>0){
		pair <int, int> cur = Q.front();
		Q.pop();
		int x = cur.first;
		int y = cur.second;
		for(int i=0;i<NO_OF_NEIGHBOURS;i++){
			int new_x = x+next_x[i];
			int new_y = y+next_y[i];
			
			if (new_x>=0 && new_x<n && new_y<m && new_y>=0 && distance_graph[new_x][new_y] == UNVISITED){
				distance_graph[new_x][new_y] = distance_graph[x][y] + 1;
				Q.push(make_pair(new_x,new_y));
			}
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << distance_graph[i][j] << ' ';
		}
		cout << endl;
	}
}
