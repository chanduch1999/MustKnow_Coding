//Segregate 0s 1s and 2s in 1 traversal
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
const char* comma = strchr(names + 1, ',');
std::cerr.write(names, comma - names) << " = " << arg1;
ZZ(comma, args...);
}

int main()
{
	ll n,b;
	cin>>n;
	vector < ll > v;
	ll low=0,mid=0,high=n-1;
	for (ll i = 0 ; i < n ; i++)
	{
		cin>>b;
		v.pb(b);
	}	
	while(mid <= high)
	{
		switch(v[mid])
		{
			case 0: swap(v[low],v[mid]);
					low++;mid++;
					break;
			case 1: mid++;
					break;
			case 2: swap(v[high],v[mid]);
					high--;
					break;
		}
	}
	for(ll i = 0 ; i < n ; i++)
		cout<<v[i]<<" ";
		
	return 0;
}
//low holds the least index of 1 if mid meets 0 then low and mid values only gets swapped
//high can be any value if mid is 2 it swaps with high resulting in high position as 2
