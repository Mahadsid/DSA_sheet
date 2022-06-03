#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
        
        sort(arr, arr+n);
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
  
        return arr[k-1]; 
    }

int main(){
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
   //sort(arr, arr + n);
    cout << "ans" << kthSmallest(arr, n ,3);
    
    return 0;
}
//mthd 2
int kthsmallestelement(int arr[], int l, int r, int k){
    priority_queue<int> pq;
    //step1
    for(int i = 0; i<k; i++){
    pq.push(arr[i]);
    }
    //step2
    for(int i =k; i<=r; i++){
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    //step3
    return pq.top();
}
//sc=0(k)