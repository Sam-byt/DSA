#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   sort(arr.begin(),arr.end());
   unordered_map<int,int>umap;
   for(auto &i : arr)umap[i]++;
   int b = 0, e = arr.size() - 1;
   vector<vector<int>> res;
   while(b<e){
       int val = arr[b] + arr[e];
       if(s ==  val){ 
            int cnt = arr[b] == arr[e]? ((umap[arr[b]]*umap[arr[b]] - umap[arr[b]])>>1) : umap[arr[b]]*umap[arr[e]];
            while(cnt--)res.push_back({arr[b], arr[e]});
            if(arr[b] == arr[e])break;
            int p = arr[b], q = arr[e];
            while(p == arr[b] && q == arr[e] && b<e){
                b++;
                e--;
            }
       }
       else if(s < val)e--;
       else b++;
   }

   return res;
}
