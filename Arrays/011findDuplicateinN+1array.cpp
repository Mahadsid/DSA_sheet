#include <bits/stdc++.h>
#include<iostream>
using namespace std;

    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,h=nums.size()-1,mid;
        while(l<h){
            mid=l+(h-l)/2;
            if(nums[mid]==nums[mid+1] or nums[mid]==nums[mid-1])return nums[mid];
            else if(nums[mid]<mid+1)h=mid-1;
            else l=mid+1;
        }
        return mid;
    }

int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int x = 0;
        for(int i = 1; i < nums.size(); i++){
            x = x ^ i;
        }
        for(int i = 0; i < nums.size(); i++){
            x = x ^ nums[i];
            if(mp[x]){
                return nums[i];
            }else{
                mp[x] = 1;
                x = x ^ nums[i];
            }
        }
        return -1;
    }

    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int duplicate = 0;
        for(auto i= 0; i<nums.size(); ++i)
        ++m[nums[i]];
        
        for(auto i : m)
        {
            if(i.second > 1)
            {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }

