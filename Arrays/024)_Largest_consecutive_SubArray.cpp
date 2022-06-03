#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      map<int, int> mp;
      int prev = -1;
      int count = 0 , ans = 0;
      for(int i=0;i < N; i++){
          mp[arr[i]] = 1;
      }
      for(auto it=mp.begin(); it!=mp.end(); it++){
          if(it->first == prev){
              count++;
          }
          else{
              count = 1;
          }
          ans = max(ans, count);
          prev = it->first+1;
        }
      return ans;
    }

    int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_map<int,int> umap;
      int max = INT_MIN;
      int min = INT_MAX;
      for(int i=0;i<N;i++){
          if(arr[i]>max){
              max = arr[i];
          }
          if(arr[i]<min){
              min = arr[i];
          }
          umap[arr[i]]++;
      }
      int num = min,count=0,maxCount=0;
      
      while(num<=max){
         if(umap[num++]){
             count++;
         }
         else{
             if(count>maxCount){
                 maxCount = count;
             }
             count = 0;
         }
      }
      if(count>maxCount){
          maxCount = count;
      }
      return maxCount;
    }

// best Sol
int findLongestConseqSubseq3(int arr[], int N){
        //Your code here
        priority_queue<int, vector<int>, greater<int> > pq; //min heap
        for (int i = 0; i < N; i++) {
          
            pq.push(arr[i]);
        }
    
        int prev = pq.top();
        pq.pop();
        int c = 1;
        int max = 1;
        while (!pq.empty()) {
          
            if (pq.top() - prev > 1) {
                c = 1;
                prev = pq.top();
                pq.pop();
            }
    
            else if (pq.top() - prev == 0) {
                prev = pq.top();
                pq.pop();
            }
          
            else {
              
                c++;
                prev = pq.top();
                pq.pop();
            }
          
            if (max < c) {
                max = c;
            }
        }
        return max;
    }