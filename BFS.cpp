#include <bits/stdc++.h>
using namespace std;

int n, m; // dinh, canh
vector<itn> adj[1005];
bool visited[1005];

void nhap()
{
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void BFS(int u)
{
	queue<int>q;
	q.push(u);
	visied[u] = true;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for(int y : adj[x])
		{
			if(!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
	}
	
}
