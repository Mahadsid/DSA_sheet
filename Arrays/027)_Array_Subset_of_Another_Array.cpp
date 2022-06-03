#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

string isSubset(int a1[], int a2[], int n, int m) {
    set<int> s;
    for (int i = 0;i < n;i++) {
        s.insert(a1[i]);
    }
    for (int i = 0;i < m;i++) {
        if (s.find(a2[i]) == s.end()) return "No";
    }
    return "Yes";
    
}

string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
   map<int,int>mp;
   for(int i=0;i<m;i++)
   {
       mp[a2[i]]++;
   }
   int count=0;
   for(int i=0;i<n;i++)
   {
       if(mp.find(a1[i]) != mp.end())
       {
           count++;
       }
   }
   if(count == m)
       return "Yes";
   else
       return "No";
    
}

string isSubset(int a1[], int a2[], int n, int m) {
   unordered_map<int,int>map;
   for(int i=0;i<n;i++){
       map[a1[i]]++;
   }
   int c=0;
   for(int i=0;i<m;i++){
       if(map[a2[i]]){
           c++;
       }
   }
   if(c==m){
       return "Yes";
   }
   else{
       return "No";
   }
}
/*this was a simple approach, where we check whether all the elements of a2 are present in a1.While checking 
it counts the number of elements of a2 present in a1.if all the elements are present then it outputs Yes. else No.
OR it checks whether the size and the count is equal.*/