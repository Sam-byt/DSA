class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>counter(nums.size());
        for(auto &i : nums){
            counter[i]++;
            if(counter[i]>1)return i;
        }
        return -1;
    }
};
