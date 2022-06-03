#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

int find_median(vector<int> scores)
		{
		    // Code here.
		    size_t size = scores.size();

		    if (size == 0)
			return 0;  // Undefined, really.

		    else
		    {
			sort(scores.begin(), scores.end());
			if (size % 2 == 0)
			    return (scores[size / 2 - 1] + scores[size / 2]) / 2;
			else 
			    return scores[size / 2];
		    }
		}