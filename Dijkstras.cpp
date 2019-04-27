#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
#define cf cout.flush()
#define INF LLONG_MAX
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define countd(n) (log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
vector < pair < ll, ll > > adj[1002];
ll n;
void Dijks(ll src) 
{ 
    set < pair < ll, ll > > s;
    vector<ll> dist(n+1, INF); 
    s.insert({0, src}); 
    dist[src] = 0; 

    while (!s.empty()) 
    { 
        pair<ll, ll> p = *(s.begin()); 
        s.erase(s.begin()); 

        ll u = p.ss; 

        for (auto i : adj[u]) 
        {  
            ll v = i.ff;
            ll weight = i.ss; 
  
            if (dist[v] > dist[u] + weight) 
            { 
                if (dist[v] != INF) 
                    s.erase(s.find({dist[v], v})); 
  
                dist[v] = dist[u] + weight; 
                s.insert({dist[v], v}); 
            } 
        } 
    } 

    cout<<"Vertex   Distance from Source\n"; 
    for (ll i = 0; i < n; i++) 
        cout<<i<<" "<<dist[i]<<"\n"; 
} 
  
int main() {
	
	ll u,v,we,edges;
	cin>>n>>edges;
	for ( ll i = 0 ; i < edges ; i++ )
	{
		cin>>u>>v>>we;
		adj[u].pb({v,we});		
		adj[v].pb({u,we});
	}
	Dijks(0);
	
	
	return 0;
}
//Ref Geeks for Geeks Set implementation
