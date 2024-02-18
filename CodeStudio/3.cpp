vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> res;
	sort(arr.begin(),arr.begin()+n);
	for(int i= 0; i<n-2 ; i++){
		if(i>0 && arr[i] == arr[i-1])continue;
		int key = K - arr[i];
		// if(key<arr[i])return res;
		for(int s = i+1, e = n - 1; s <e ;){
			int val = arr[s] + arr[e];
			if(key == val){
				res.push_back({arr[i],arr[s],arr[e]});
				int p = arr[s], q = arr[e];
				while(s<e && p == arr[s] && q == arr[e]){
					s++, e--;
				}
			}
			else if(key < val)e--;
			else s++;
		}
	}

	return res;
}
