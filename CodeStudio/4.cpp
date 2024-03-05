

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long s = 0;
    int next = 0, prev = 0, maxLen = 0;
    while(next < a.size()){
        s += a[next];
        while(k < s)s -= a[prev++];
        if(k == s)maxLen = max(maxLen, next - prev + 1);
        next++;
    }

    return maxLen;
}
