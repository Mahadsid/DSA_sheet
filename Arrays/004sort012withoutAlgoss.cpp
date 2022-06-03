#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void sortOnetwo(int arr[], int n) {

    int left = 0, mid = 0, right = n-1;

    while( mid< right) {
        // if element is 0
        if (arr[mid]==0)
        {
            swap(arr[left], arr[mid]);
            left++;
            mid++;

        }
        else if (arr[mid]==1 && mid > 0)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[right--]);
        }
    }
}
//tc=0(n)