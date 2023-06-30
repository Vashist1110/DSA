#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long
template <typename T>

class graph{
public:
	unordered_map<T,list<T> > adj;

	void addEdge(T u,T v,bool direction){
		// direction = 0 -> undirected
		// direction = 1 -> directed graph

		// create an edge from u to v
		adj[u].push_back(v);

		if(direction==0){
			adj[v].push_back(u);
		}
	}

	void printAdjList(){
		for(auto i:adj){
			cout<<i.first<<"-> ";
			for(auto j: i.second){
				cout << j << ", ";
			}
			cout<<endl;
		}
	}
};

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    graph<int> g;

    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;


    int m;
    cout<< "Enter the number of edges "<< endl;
    cin>>m;

    for (int i = 0; i < m; ++i)
    {
    	int u,v;
    	cin>>u>>v;
    	//creating an undirected graph
    	g.addEdge(u,v,0);
    }

    // printing graph
    g.printAdjList();

   

    
    return 0;
}
