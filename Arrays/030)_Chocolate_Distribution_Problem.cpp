#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

long long findMinDiff(vector<long long> a, long long n, long long m){
        //code
        long long minDiff = INT_MAX;
        sort(a.begin(), a.end());
        int i = 0;
        while (i <= n - m)
        {
            minDiff = min(minDiff, a[i + m - 1] - a[i]);
            i++;
        }
        return minDiff;
    }   