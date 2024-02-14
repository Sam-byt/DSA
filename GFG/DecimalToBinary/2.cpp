//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

#define ll long long
void toBinary(int N)
{
    // your code here
    ll res = 0,f = 1;
    while(N!=0){
        res+=f*1LL*(N&1);
        f*=10;
        N>>=1;
    }
    
    cout<<res;
    
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
