class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umap;
        for(auto &i : arr)umap[i]++;
        unordered_set<int>check;
        for(auto &i : umap){
            if(check.find(i.second)==check.end())check.insert(i.second);
            else return false;
        }
        return true;
    }
};
