#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define MAX 150
#define MAXV 6000
#define INF 1000000000000000LL
using namespace std;
typedef long long int64;

struct aresta {
  int a, b;
  int64 c;
};

struct e {
  int u, v, prox;
  int64 custo, fluxo;
  e(int u = 0, int v = 0, int prox = 0, int64 custo = 0, int64 fluxo = 0):
  u(u),
  v(v),
  prox(prox),
  custo(custo),
  fluxo(fluxo){}
};

int V, E, A, anterior[MAXV];
int64 f, sp, dist[MAX], p[MAX];
bool visitado[MAX];
vector<e> grafo(MAXV);
vector<aresta> edges(MAXV);

void addE(int u, int v, int64 c, int64 f) {
  grafo[A] = e(u, v, anterior[u], c, f);
  anterior[u] = A++;
  grafo[A] = e(v, u, anterior[v], -c, 0);
  anterior[v] = A++;
}

void augPath(int v, int64 minEdge) {
  for (int i = p[v]; i != -1; i = p[grafo[i].u])
    minEdge = min(minEdge, grafo[i].fluxo);

  for (int i = p[v]; i != -1; i = p[grafo[i].u]) {
    grafo[i].fluxo -= minEdge;
    grafo[i ^ 1].fluxo += minEdge;
  }
  f = minEdge;
}

bool dijkstra(int s, int t) {
  for (int i = 0; i <= V + 1; ++i) {
    dist[i] = INF;
    p[i] = -1;
    visitado[i] = false;
  }

  queue<int> q;
  dist[s] = 0;
  visitado[s] = true;
  q.push(s);

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int i = anterior[u]; i != -1; i = grafo[i].prox) {
      int v = grafo[i].v;
      if (grafo[i].fluxo && dist[u] + grafo[i].custo < dist[v]) {
        dist[v] = dist[u] + grafo[i].custo;
        p[v] = i;
        if (!visitado[v]) {
          visitado[v] = true;
          q.push(v);
        }
      }
    }
    visitado[u] = false;
  }
  sp = dist[t];
  return sp != INF;
}

int main() {
  int t = 1;
  int64 d, k;
  while (scanf("%d %d", &V, &E) != EOF) {
    printf("Instancia %d\n", t++);
    A = 0;
    for (int i = 0; i <= V + 1; ++i)
      anterior[i] = -1;
    for (int i = 0; i < E; ++i)
      scanf("%d %d %lld", &edges[i].a, &edges[i].b, &edges[i].c);

    scanf("%lld %lld", &d, &k);
    addE(0, 1, 0, d);
    addE(V, V + 1, 0, d);

    for (int i = 0; i < E; ++i) {
      addE(edges[i].a, edges[i].b, edges[i].c, k);
      addE(edges[i].b, edges[i].a, edges[i].c, k);
    }

    int64 fluxoMaximo = 0, resp = 0;
    while (dijkstra(0, V + 1)) {
      f = 0;
      augPath(V + 1, INF);
      fluxoMaximo += f;
      resp += sp * f;
      if (fluxoMaximo == d)
        break;
    }

    if (fluxoMaximo != d)
      printf("impossivel\n\n");
    else
      printf("%lld\n\n", resp);
  }
  return 0;
}