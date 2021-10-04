//DFS Implementation
/*
Time complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
Space Complexity: O(V).
Since, an extra visited array is needed of size V.
*/
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int > adj[ ],int u,int w)
{
	adj[u].push_back(w);
	adj[w].push_back(u);
}
void dfsUtil(vector<int > adj[ ],int v,int src,bool visited[ ])
{
	visited[src] = true;
	cout<<src<<" ";
	for(int i=0;i<adj[src].size();i++)
	{
		sort(adj[src].begin(),adj[src].end());
		if(!visited[adj[src][i]])
		{
			dfsUtil(adj,v,adj[src][i],visited);
		}
	}
}
void dfs(vector<int > adj[ ],int v,int src)
{
	bool visited[v];
	memset(visited,false,sizeof(visited));
	dfsUtil(adj,v,src,visited);
}
int main()
{
	int v = 6;
	vector<int > adj[v];
	addedge(adj,0,5);
	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,1,4);
	addedge(adj,2,4);
	addedge(adj,2,3);
	addedge(adj,3,4);
	
	for(int i=0;i<v;i++)
	{
		cout<<"DFS with source as "<<i<<" -> "; 
		dfs(adj,v,i);
		cout<<endl;
	}
	return 0;
}
