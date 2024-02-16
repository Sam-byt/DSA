#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> res;
    int first = 0, second = 0;
    while(first<n && second<m ){
        if(arr1[first] == arr2[second]){
            res.push_back(arr1[first]);
            first++;
            second++;
        }
        else if (arr1[first] <arr2[second])first++;
        else second++;
    }
    return res;
}
