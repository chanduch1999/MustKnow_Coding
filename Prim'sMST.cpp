#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair < ll,ll > ipair; //not we can't #define it
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ld long double
#define cf cout.flush()
#define INF LLONG_MAX
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define countd(n) (log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
vector < pair < ll,ll > > adj[1002];
bool vis[1002]={0};
ll n;
void PrimMST() 
{ 
	int src=0;
	priority_queue < ipair ,vector < ipair > , greater < ipair > > pq; //just a syntax for min heap 
	
	vector < ll > key(n,INF),parent(n,-1);
	key[src]=0;
	pq.push(make_pair(0, src));
	while(!pq.empty())
	{
		pair < ll,ll > p=pq.top();
		ll u=p.ss; //note second here custom defined
		pq.pop();
		
		vis[u]=true;
		for(auto i : adj[u])
		{
			ll v = i.ff;
			ll we = i.ss;
			if(!vis[v] and key[v] > we) //vis[v] not vis[i]
			{
				key[v]=we;
				parent[v]=u;
				pq.push({key[v],v});
			}
		}
	}
	for ( ll i = 1; i < n; ++i) 
        printf("%lli - %lli\n", parent[i], i); 	
	
} 
  
int main() {
	
	ll u,v,edges,we;
	cin>>n>>edges;
	for ( ll i = 0 ; i < edges ; i++ )
	{
		cin>>u>>v>>we;
		adj[u].pb({v,we});
		adj[v].pb({u,we});		
	}
	PrimMST();
	
	return 0;
}
