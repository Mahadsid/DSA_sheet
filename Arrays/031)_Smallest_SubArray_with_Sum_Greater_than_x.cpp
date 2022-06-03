#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int ans = n+1;
        int left=0, cur_sum=0, right=0;
        while(right < n)
        {
            while(cur_sum <= x && right < n)
            cur_sum += arr[right++];
            while(cur_sum > x && left < right)
            {
                ans = min(ans, right - left);
                cur_sum -= arr[left++];
            }
        }
        return ans;