#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//Dp solution 0(n^2)
int minJumps(int arr[], int n){
        int dp[n];
        for (int i = 0; i < n; i++)
        {
            dp[i] = INT_MAX;
        }
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(dp[j] != INT_MAX && arr[j] + j >= i){
                    if(dp[j] + 1 < dp[i]){
                        dp[i] = dp[j] + 1;
                    }
                }
            }
            
        }
        if(dp[n-1] != INT_MAX){
            cout << dp[n-1] << endl;
        }
        else{
            cout << -1;
        }
    }
// tc=0(n2)
// Function to return minimum number of jumps to end of array

int minJumps(int arr[], int n){
    // Your code here
     // The number of jumps needed to 
    // reach the starting index is 0 
    if (n <= 1) 
        return 0; 
  
    // Return -1 if not possible to jump 
    if (arr[0] == 0) 
        return -1; 
  
    // initialization 
    // stores all time the maximal 
    // reachable index in the array. 
    int maxReach = arr[0]; 
  
    // stores the number of steps 
    // we can still take 
    int step = arr[0]; 
  
    // stores the number of jumps 
    // necessary to reach that maximal 
    // reachable position. 
    int jump = 1; 
  
    // Start traversing array 
    int i = 1; 
    for (i = 1; i < n; i++) { 
        // Check if we have reached the end of the array 
        if (i == n - 1) 
            return jump; 
  
        // updating maxReach 
        maxReach = max(maxReach, i + arr[i]); 
  
        // we use a step to get to the current index 
        step--; 
  
        // If no further steps left 
        if (step == 0) { 
            // we must have used a jump 
            jump++; 
  
            // Check if the current index/position or lesser index 
            // is the maximum reach point from the previous indexes 
            if (i >= maxReach) 
                return -1; 
  
            // re-initialize the steps to the amount 
            // of steps to reach maxReach from position i. 
            step = maxReach - i; 
        } 
    } 
  
    return -1;
 
}//tc=0(n)