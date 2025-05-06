#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

void addEdge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(int start,vector<int> adj[],int n){
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    cout<<"BFS:";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true ;
            }
        }
    }
    cout<<endl;
}

void dfs(int start,vector<int> adj[],int n){
    vector<bool> visited(n,false);
    stack<int> stk;
    stk.push(start);
    visited[start] = true;

    cout<<"DFS:";
    while(!stk.empty()){
        int node = stk.top();
        stk.pop();
        cout<<node<<" ";

        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                stk.push(neighbor);
                visited[neighbor] = true ;
            }
        }
    }
    cout<<endl;
}

int main(){
    int n,e;
    cout<<"Enter Number od Vertices:";
    cin>>n;
    cout<<"Enter Number of Edges:";
    cin>>e;

    vector<int> adj[n];

    cout<<"Enter Vertices and Edges (u v): ";
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        addEdge(adj,u,v);
    }

    bfs(0,adj,n);
    dfs(0,adj,n);
}