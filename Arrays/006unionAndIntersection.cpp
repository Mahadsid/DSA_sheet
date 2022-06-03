#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//brute force
int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
    for (int i = 0;i < n;i++) s.insert(a[i]);
    for (int i = 0;i < m;i++) s.insert(b[i]);

    // Print the content of set s
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    return s.size();
    }
//tc=O(m * log(m) + n * log(n))
//mthd 2
void printUnion(int* a, int n, int* b, int m)
{
    //From the knowledge of data structures, we know that map stores distinct keys
    //only. So if we insert any key appearing more than one time it gets stored only once.
    //The idea is to insert both the arrays in one common map which would then store
    //the distinct elements of both arrays (union of both the array).

    // Defining map container mp
    map<int, int> mp;
   
    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i });
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first
             << " "; // mp will contain only distinct
                     // elements from array a and b
}//tc=O(m+n)

//INTERSECTION
int doIntersection(int a[], int n, int b[], int m) {
    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0, ans = 0;

    while (i <= j) {
        if (a[i] == b[j]) {
            ans++;
            i++;
            j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return ans;
}
void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
             
            // when both are equal
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}//tc=0(n)

//mthd 2
//The time complexity of this method is O(m+n) under the assumption that hash
//table search and insert operations take O(1) time.
void printIntersection(int arr1[], int arr2[], int n1,
                       int n2)
{
    set<int> hs;
 
    // Insert the elements of arr1[] to set S
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);
 
    for (int i = 0; i < n2; i++)
 
        // If element is present in set then
        // push it to vector V
        if (hs.find(arr2[i]) != hs.end())
            cout << arr2[i] << " ";
}