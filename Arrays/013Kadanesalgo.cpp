#include <bits/stdc++.h>
#include<iostream>
using namespace std;
long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_sum = INT_MIN, curr_sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];
        if (curr_sum >  max_sum)
            max_sum = curr_sum;
 
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return max_sum;
        
}
//tc=0(n)