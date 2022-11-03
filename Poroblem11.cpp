// Write a program to accept cardinality of set A as N, and cardinality of set B as M. Then accept elements of set A and set B. Generate set
// C which is union of set A and set B, set D which is intersection set of set A and Set B. Print set A, B, C, D, Cardinality of set C, Cardinality of set D.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the cardinality of set1: ";
    cin>>m;
    cout<<"Enter the cardinality of set2: ";
    cin>>n;

    int arr1[m];
    int arr2[n];
    
    cout<<"Enter the numbers in set1: "<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the numbers in set2: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }

    sort(arr1, arr1+m);
    sort(arr2, arr2+n);

    vector<int> unio;
    vector<int> intersection;

    // Union of 2
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            unio.push_back(arr1[i++]);
 
        else if (arr2[j] < arr1[i])
            unio.push_back(arr2[j++]);
 
        else {
            unio.push_back(arr2[j++]);
            i++;
        }
    }
    while (i < m)
        unio.push_back(arr1[i++]);
 
    while (j < n)
        unio.push_back(arr2[j++]);

    cout<<"Union of the 2 sets is: ";
    for(int i=0; i<unio.size(); i++){
        cout<<unio[i]<<" ";
    }
    cout<<endl;
    
    // Intersection of 2

    int p = 0, q = 0;
    while (p < m && q < n) {
        if (arr1[p] < arr2[q])
            p++;
        else if (arr2[q] < arr1[p])
            q++;
        else /* if arr1[i] == arr2[j] */
        {
            intersection.push_back(arr1[p]);
            p++;
            q++;
        }
    }

    cout<<"Intersection of the 2 sets is: ";
    for(int i=0; i<intersection.size(); i++){
        cout<<intersection[i]<<" ";
    }

    return 0;
};