#include <bits/stdc++.h>
#include<iostream>
using namespace std;

long long maxProduct(vector<int> arr, int n)
	{
	    // code here
	    long long maxp=INT_MIN,product=1;
	    for(int i=0;i<n;i++)
	    {
	        product*=arr[i];
	        if(product==0)
	        {
	            product=1;
	        }
	        maxp=max(maxp,product);
	    }
	    product=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        product*=arr[i];
	        if(product==0)
	        {
	            product=1;
	        }
	        maxp=max(maxp,product);
	    }
	    return maxp;
	}

long long maxProduct(int *arr, int n)
{
    long long minVal = arr[0];
    long long maxVal = arr[0];
    long long maxProduct = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
            swap(maxVal, minVal);
        maxVal = max((long long)arr[i], maxVal * arr[i]);
        minVal = min((long long)arr[i], minVal * arr[i]);
        maxProduct = max(maxProduct, maxVal);
    }
    return maxProduct;
}