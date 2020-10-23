#include <iostream>
#include <list>
#include<queue>
#include<stack>
using namespace std;
class Graph
{
	int v;
	int temp;
	list<int> *l;
	bool *visited;
	bool *visited1;
public:
	Graph(int V)
	{
		this->v=V;
		l=new list<int>[V];
		visited=new bool[V];
		visited1=new bool[v];
		
	}
	void AddEdge(int x,int y)
	{
		l[x].push_back(y);
	}
	void dfsitertive(int source)
	{
		cout<<endl<<"iterative way"<<endl;
		bool visited2[v]={false};
		stack<int> Stack;
		Stack.push(source);
		visited2[source]=true;
		while(!Stack.empty())
		{
			int tmp=Stack.top();
			cout<<tmp<<" ";
			Stack.pop();
			for(int nbr:l[tmp])
			{
				if(!visited2[nbr])
				{
					visited2[nbr]=true;
					Stack.push(nbr);
				}
			}
		}
		cout<<endl;
	}
	void display()
	{
		cout<<"Normal display"<<endl;
		for (int i = 0; i < v; ++i)
		{
			cout<<i<<":";
			for(int nbr:l[i])
			{
				cout<<nbr<<"->";
			}
			cout<<endl;
		}
	}
	void dfs(int source)
	{
		
		this->visited1[source]=true;
		cout<<source<<" ";
		for (int nbr:l[source])
		{
			if(!visited1[nbr])
				dfs(nbr);			
		}
	}
	void bfs(int source)
	{		
		queue<int> que;
		que.push(source);
		visited[source]=true;
		cout<<"BFS"<<endl;
		while(!que.empty())
		{
			int element=que.front();
			que.pop();
			cout<<element<<" ";
			for(int nbr:l[element])
			{
				if(!visited[nbr])
				{
					visited[nbr]=true;
					que.push(nbr);
				}
			}
		}
		cout<<endl;
	}
	bool cycleDetect(int start)
	{	
		
	}
};
int main() 
{
      #ifndef ONLINE_JUDGE
           //for getting input from input.txt
        freopen("input.txt", "r", stdin);
          //for writing output to output.txt
        freopen("output.txt", "w", stdout);
	 #endif
    Graph g(5);
    g.AddEdge(0,1);
    g.AddEdge(0,3);
    g.AddEdge(1,2);
    g.AddEdge(3,2);
    g.AddEdge(3,4);
    g.display();
    g.bfs(0);
    g.dfs(0);
    g.dfsitertive(0);
    g.cycleDetect(0);
}