
	#include <iostream> 
	#include <list> 
	#include <stack> 
	#include <limits.h> 
	#define NINF INT_MIN  
 
	class AdjListNode 
	{ 
	 int v; 
	 int weight; 
 open: 
	 AdjListNode(int _v, int _w) 
	 { 
	 v = _v; 
	 weight = _w; 
	 } 
	 int getV() 
	 { 
	 return v; 
	 } 	
 int getWeight() 

	 { 
	 return weight; 
	 } 
	}; 
 
	class Graph 
	{ 
	 int V;/No. of vertices'  
	 list<AdjListNode> *adj; 
	 void topologicalSortUtil(int v, bool visited[], stack<int> &Stack); 
	 open: 
	 Graph(int V);/Constructor  
	 void addEdge(int u, int v, int weight); 
	 void longestPath(int s); 
	};
	Graph::Graph(int V)/Constructor 
	{ 
	 this->V = V; 
	 adj = new list<AdjListNode> [V]; 
	} 
	void Graph::addEdge(int u, int v, int weight) 
	{ 
	 AdjListNode node(v, weight); 
	 adj[u].push_back(node);/Add v to u's rundown 
	} 
 	void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack) 
	{ 
	 visited[v] = genuine; 
	 list<AdjListNode>::iterator I; 
	 for (I = adj[v].begin(); I != adj[v].end(); ++i) 
	 { 
	 AdjListNode hub = *i; 
	 if (!visited[node.getV()]) 
	 topologicalSortUtil(node.getV(), went to, Stack); 
}
	 Stack.push(v); 
	}
	void Graph::longestPath(int s) 
	{ 
	 stack<int> Stack; 
	 int dist[V]; 
	 bool *visited = new bool[V]; 
	 for (int I = 0; I < V; i++) 
	 visited[i] = false; 	 
	 for (int I = 0; I < V; i++) 
	 if (visited[i] == false) 
	 topologicalSortUtil(i, went by, Stack); 
	 for (int I = 0; I < V; i++) 
	 dist[i] = NINF; 
	 dist[s] = 0; 
 	 while (Stack.empty() == false) 
	 { 
 
	 int u = Stack.top(); 
	 Stack.pop();  
	 list<AdjListNode>::iterator I; 
	 if (dist[u] != NINF) 
	 { 
	 for (I = adj[u].begin(); I != adj[u].end(); ++i) 
	 if (dist[i->getV()] < dist[u] + I->getWeight()) 
	 dist[i->getV()] = dist[u] + I->getWeight(); 
	 }
	 } 
	 for (int I = 0; I < V; i++) 
	 (dist[i] == NINF) ? cout << "INF " : cout << dist[i] << " "; 
	} 
	int fundamental() 
	{  
	 Graph g(6); 
	 g.addEdge(0, 1, 5); 
	 g.addEdge(0, 2, 3); 
	 g.addEdge(1, 3, 6); 
	 g.addEdge(1, 2, 2); 
	 g.addEdge(2, 4, 4); 
	 g.addEdge(2, 5, 2); 
	 g.addEdge(2, 3, 7); 
	 g.addEdge(3, 5, 1); 
	 g.addEdge(3, 4, - 1); 
	 g.addEdge(4, 5, - 2); 
	 int s = 1; 	 cout << "Following are longest separations from source vertex " << s << " \n"; 
	 g.longestPath(s);  
	 return 0; 
	}
