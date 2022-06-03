#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    // just to practice the modulus approach
    int temp[n];

    for (int i = 0; i < n; i++)
    {

        temp[(i + 1) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i]; //  temp ka array overwrite na ho is liy liya
    }
}

// by k cyclic rotate
vector<int> rotate(vector<int> &nums, int k)
{

    // just to practice the modulus approach
    int n = nums.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {

        temp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = temp[i]; //  temp ka array overwrite na ho is liy liya
    }
    return nums;
}