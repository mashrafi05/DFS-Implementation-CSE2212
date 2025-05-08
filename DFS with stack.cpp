//DFS with stack
#include<bits/stdc++.h>
using namespace std;

int graph[1001][1001];
int visit[1001];
int n,e;

void DFS(int start)
{
    //initial stp
    visit[start] = 1;
    cout<<start<< " ";
    stack<int>stk;
    stk.push(start);

    //repeating step
    while(!stk.empty())
    {

        for(int j=1; j <= n; j++)
        {
            int x = stk.top();
            if(visit[j] == 0 && graph[x][j] != 0)
            {
                visit[j] = 1;
                cout<< j << " ";
                stk.push(j);
                j = 1;
            }
        }
        stk.pop();
    }

}

int main()
{
    cin>>n>>e;
    int u, v;
    for(int i = 1; i <= e; i++)
    {
        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    DFS(1);

    return 0;
}
