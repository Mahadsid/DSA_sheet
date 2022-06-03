#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

int minSwap(int *arr, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }
    int swaps = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
        {
            swaps++;
        }
    }
    int minSwaps = swaps;
    for (int i = 0, j = count; j < n; i++, j++)
    {
        if (arr[i] > k)
        {
            swaps--;
        }
        if (arr[j] > k)
        {
            swaps++;
        }
        minSwaps = min(minSwaps, swaps);
    }
    return minSwaps;
}
