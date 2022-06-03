#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool subArrayExists(int arr[], int n)
    {
        //Your code here
         int sum=0;
        int flag=0;
         map <int,int> m;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum==0 or m[sum]>0 or arr[i]==0){// sum=0 syntax error 
                flag=1;
                break;
            }
            else{
                m[sum]=1;
            }
        }
        if(flag==1)
            return true;
        else 
            return false;
    
    }

bool subArrayWithZeroSum(int arr[], int n)
{
    unordered_map<int, int> arrMap;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            return true;
        }
        sum += arr[i];
        if (arrMap.count(sum) == 1 || sum == 0)
        {
            return true;
        }
        arrMap[sum] = 1;
    }
    return false;
}