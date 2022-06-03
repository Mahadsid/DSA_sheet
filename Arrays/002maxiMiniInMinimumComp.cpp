#include <bits/stdc++.h>
#include<iostream>
using namespace std;

pair<int, int> getMinMax(int arr[], int low, int high){
    pair<int, int> minimaxi;
    //base case for only one element
    if (low == high)
    {
        minimaxi.first = arr[low];
        minimaxi.second = arr[low];    
        return minimaxi;
    }
    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minimaxi.second = arr[low];
            minimaxi.first = arr[high];
        }
        else
        {
            minimaxi.second = arr[high];
            minimaxi.first = arr[low];
        }
        return minimaxi;
    }
    // If there are more than 2 elements
    int mid = (low + high) / 2;
    pair<int, int> mml = getMinMax(arr, low, mid);
    pair<int, int> mmr = getMinMax(arr, mid + 1, high);
     
    // Compare minimums of two parts
    if (mml.first < mmr.first)
        minimaxi.first = mml.first;
    else
        minimaxi.first = mmr.first;    
     
    // Compare maximums of two parts
    if (mml.second > mmr.second)
        minimaxi.second = mml.second;
    else
        minimaxi.second = mmr.second;    
     
    return minimaxi;
}

int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    pair<int, int> minmax = getMinMax(arr, 0,
                             arr_size - 1);
                              
    cout << "Minimum element is "
         << minmax.first << endl;
    cout << "Maximum element is "
         << minmax.second;
          
    return 0;
}