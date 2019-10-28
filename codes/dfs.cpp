#include <bits/stdc++.h>
using namespace std;
int V= 5;
void DFS(int current, int graph[5][5]);
int main() {
    cout << "Graph" << endl;
    int graph[5][5] = {{0,0,0,0,1},
                       {0,0,0,0,0},
                       {0,1,0,0,0},
                       {0,0,0,0,0},
                       {0,0,1,1,0}};
    DFS(0,graph);
    return 0;
}
void DFS(int v,int graph[5][5]){
    stack<int> stack;
    bool visited[V];
    memset(visited, false,V);
    stack.push(v);
    while (!stack.empty()){
        int currentV = stack.top();
        stack.pop();
        visited[currentV] = true;
        cout << currentV << " ";
        for (int i = 0; i < V; ++i) {
            if(graph[currentV][i]==1 && visited[i]==false){
                stack.push(i);
            }
        }
    }
}