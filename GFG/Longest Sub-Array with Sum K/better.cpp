//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        // hint : prefix sum
        
        int len = 0, s = 0;
        
        unordered_map<int,int> umap;
        
        for(int i = 0; i<N ; i++){
            s += A[i];
            if(s == K)len = max(len, i+1);
            int target = s - K;
            if(umap.find(target) != umap.end())len = max(len,i - umap[target]);
            // as the subarr req is longest, hence dont update the sum only take the sum 1st time
            if(umap.find(s) == umap.end())umap[s] = i;
        }
        
        return len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
