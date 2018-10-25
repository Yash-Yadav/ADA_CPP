#include <iostream>
#include<vector>
#include<queue>
#include<conio.h>
using namespace std;

vector < pair < int , int > > adj[10];

void dijkstra(int source,int n){
    priority_queue < pair < int , int > , vector < pair < int , int > > , greater < pair < int , int > > > pq;
    vector < int > dist(10,100);
    pq.push(make_pair(0,source));
    dist[source]=0;
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i].first;
            int wt=adj[u][i].second;
            if(dist[v]>dist[u]+wt){
                dist[v]=dist[u]+wt;
                pq.push(make_pair(dist[v],v));}}}
    cout<<"Vertex   Distance from Source\n";
    for (int i = 0; i < n; ++i)
        cout<<i<<"\t\t"<<dist[i]<<endl;}

int main()
{
    int n,m;
    cout<<"Enter the number of vertices and edges\n";
    cin>>n>>m;
    cout<<"Enter the edges\n";
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back(make_pair(y,w));
        adj[y].push_back(make_pair(x,w));
    }
    cout<<"Enter the source\n";
    int source;
    cin>>source;
    dijkstra(source,n);
    _getch();
}
