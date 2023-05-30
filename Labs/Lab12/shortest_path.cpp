#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

#define INF INT_MAX

struct Vertex {
    int index;
    int distance;

    Vertex(int i, int d) : index(i), distance(d) {}
};

struct CompareVertex {
    bool operator()(const Vertex& v1, const Vertex& v2) {
        return v1.distance > v2.distance;
    }
};

void dijkstraShortestPaths(std::vector<std::vector<int>>& graph, int source) {
    int V = graph.size(); 
    std::vector<int> distances(V, INF); 
    std::vector<bool> visited(V, false);
    distances[source] = 0;
  
    std::priority_queue<Vertex, std::vector<Vertex>, CompareVertex> pq;
    pq.push(Vertex(source, 0));

    while (!pq.empty()) {
        int u = pq.top().index;
        pq.pop();

        if (visited[u])
            continue;

        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != INF &&
                distances[u] + graph[u][v] < distances[v]) {
                distances[v] = distances[u] + graph[u][v];
                pq.push(Vertex(v, distances[v]));
            }
        }
    }

    std::cout << "Shortest Distances from the Source:\n";
    for (int v = 0; v < V; v++) {
        std::cout << "City " << v << ": " << distances[v] << "\n";
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
        {0, 10,INF, INF,15,5},
        {10, 0,10, 30, INF, INF},
        {INF,10, 0, 12, 5, INF},
        {INF, 30, 12, 0, INF, 20},
        {15, INF, 5, INF, 0, INF},
        {5, INF, INF, 20, INF, 0}
    };

    int source;
    std::cout << "Enter the source city: ";
    std::cin >> source;

    dijkstraShortestPaths(graph, source);

    return 0;
}
