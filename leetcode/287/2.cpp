class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool>counter(nums.size(),false);
        for(auto &i : nums){
            if(counter[i])return i;
            counter[i] = true;
        }
        return -1;
    }
};
