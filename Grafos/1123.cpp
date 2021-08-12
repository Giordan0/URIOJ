#include <iostream>
#include <queue>
#define INF 999999
using namespace std;
int graph[256][256];
int caminho[256];
int n, m, c, k;
queue<int> fila;

void setInf(){
  for(int i = 0; i <= n; i++) {
    caminho[i] = INF;
    for(int j = 0; j <= n; j++)
      graph[i][j] = INF;
  }
}

int dijkstra(int origem, int destino) {
	caminho[origem] = 0;
	fila.push(origem);
	while(!fila.empty()) {
		int i = fila.front();
		fila.pop();
		for(int j = 0; j < n; j++){
			if(graph[i][j] != INF && caminho[j] > caminho[i] + graph[i][j]) {
				caminho[j] = caminho[i] + graph[i][j];
				fila.push(j);
			}
		}
	}
	return caminho[destino];
}

int main() {
    int u, v, p;
	while (1) {
    cin >> n >> m >> c >> k;
    if (!n) return 0;
		setInf();
		for(int i=1; i<=m; i++) {
			cin >> u >> v >> p;
			if(u >= c && v >= c) 
				graph[u][v] = graph[v][u] = p;
			if(u >= c && v < c)
                graph[u][v]=p;
			if(u < c && v >= c)
                graph[v][u]=p;
			if(u < c && v < c && abs(u-v)==1)
				graph[u][v] = graph[v][u] = p;
		}
        int result = dijkstra(k, c-1);
	    cout << result << endl;
	}
}