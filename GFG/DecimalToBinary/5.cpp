//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    // cnt the no of digits & pull!! No assumptions;
    
    int a = N,cnt =0;
    while(a!=0){
        cnt++;
        a>>=1;
    }
    
    for(int i = cnt-1; i>=0 ; i--)cout<<((N>>i)&1);
        
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
