#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
        // code here
         unordered_map<int, int> m;
 
        // Store counts of all elements in map m
        for (int i = 0; i < n; i++)
            m[arr[i]]++;
     
        int count = 0;
     
        // iterate through each element and increment the
        // count (Notice that every pair is counted twice)
        for (int i = 0; i < n; i++) {
             count += m[k - arr[i]];
     
            // if (arr[i], arr[i]) pair satisfies the condition,
            // then we need to ensure that the count is
            // decreased by one such that the (arr[i], arr[i])
            // pair is not considered
            if (k - arr[i] == arr[i])
                count--;
        }
     
        // return the half of twice_count
        return count / 2;
    }

    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int b = k - arr[i];
            if(m[b]){
                ans += m[b];
            }
            m[arr[i]]++;
        }
        return ans;
    }