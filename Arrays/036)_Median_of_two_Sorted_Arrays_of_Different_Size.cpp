#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

//https://github.com/AkashSingh3031/The-Complete-FAANG-Preparation/blob/master/1%5D.%20DSA%20%2B%20CP/1%5D.%20DSA/3%5D.%20450%20DSA%20by%20Love%20Babbar/C%2B%2B/01%5D.%20Array/_36)_Median_of_two_Sorted_Arrays_of_Different_Size.cpp

double findMedianSotedOf2Arrays(vector<int> &nums1, vector<int> &nums2){
    if(nums2.size() < nums1.size()){
        return findMedianSotedOf2Arrays(nums2, nums1);
    }

    int n1 = nums1.size();
    int n2 = nums2.size();
    int low =0, high = n1;

    while(low <= high){
        int cut1 = (low+high) / 2;
        int cut2 = (n1 + n2 + 1) / 2;

        int left1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
        int left2 = cut2 == 0 ? INT_MIN : nums2[cut2-1];

        int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

        if(left1 <= right2 && left2 <= right1){
            if((n1 + n2) % 2 == 0){
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            else{
                return max(left1, left2);
            }
        }
        else if(left1 > right2){
            high = cut1 -1;
        }
        else{
            low = cut1 + 1;
        }
    }
    return 0.0;
}//tc=0(log2 (min(n1, n2))) sc=0(1)