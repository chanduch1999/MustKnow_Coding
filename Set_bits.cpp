#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    while(n)
	    {
	        c+=(n%2);
	        n/=2;
	    }
	    
	    cout<<c<<endl;
	}
	return 0;
}
