/* Graph (Delivery System) */
#ifndef DELIVERY_SYSTEM_H
#define DELIVERY_SYSTEM_H
#include <vector>
#include <queue>

class Graph {
public:
    int V;
    std::vector<std::pair<int, int>>* adjList;
    Graph(int V);
    void addEdge(int u, int v, int weight);
    void dijkstra(int src);
};

#endif