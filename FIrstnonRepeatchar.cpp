// Still pending to check
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{	
	ios;
	string s;
	cin>>s;
	ll si = s.size();
	if(si==1)
		return cout<<s,0;
	/*--------2 pointer approach -----*/
	ll i=0,j=1;
	while(j<si)
	{
		if(s[i]==s[j])
			i++;
		j++;
	}
	cout<<s[i]<<endl;
	
	/*--------Using Maps---------------------*/
	
	map < char,ll > m;
	for(ll i = 0 ; i < si ; i++)
	{
		if(m.find(s[i])!=m.end())
			m[s[i]]--;
		else
			m[s[i]]++;
	}
	for(ll i = 0 ; i < si ; i++)
	{
		if(m[s[i]]>0)
			return cout<<s[i],0;
	}
	
    return 0;     
 } 	   
