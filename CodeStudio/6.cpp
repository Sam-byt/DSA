#include<bits/stdc++.h>

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    unordered_map<int,int> prefix_xor;
    int x = 0, cnt = 0;
    for(auto & i : a){
        
        x ^= i;

        if(b == x)cnt++;

        int key = b^x;

        if(prefix_xor.find(key) != prefix_xor.end())cnt += prefix_xor[key];

        prefix_xor.find(x) == prefix_xor.end()?prefix_xor[x] = 1 : prefix_xor[x]+=1;

    }

    return cnt;
}
