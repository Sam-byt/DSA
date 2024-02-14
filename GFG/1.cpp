//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int f = 1, res = 0;
        for(int i = str.length()-1; i>=0; i--,f<<=1)
            res +=((str[i] - '0')*f);
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
