class Solution {

public:

    int f(vector<int> &arr, int n){
        int cnt = 0;
        for(auto &i : arr)cnt += (i<=n);
        return cnt;
    } 
public:
    int findDuplicate(vector<int>& nums) {
        int s = 1 , e = nums.size()-1, res = -1;
        while(s<=e){
            int mid =  s + (e  - s)/2;
            int cnt = f(nums,mid);
            cnt>mid?res = mid,e = mid-1:s = mid + 1;
        }

        return res;


    }
};
