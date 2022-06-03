#include <bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> result;
    //base case
    if(intervals.size() == 0){
        return result;
    }
    //step 1
    sort(intervals.begin(), intervals.end());
    //step 2
    vector<int> first = intervals[0]; 
    for(auto it : intervals){
        if(it[0] <= first[1]){
            first[1] = max(it[1], first[1]);
        }
        else{
            result.push_back(first);
            first = it;
        }
    }
    result.push_back(first);
    return result;

}//tc=0(n logn)


vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for (auto interval : intervals) {
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }