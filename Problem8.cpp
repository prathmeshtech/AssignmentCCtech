// Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size of the List: "<<endl;
    cin>>n;

    int arr[n];
    
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    vector< pair <int,int> > vect;

    for (int i=0; i<n; i++)
    {
        vect.push_back( make_pair(arr[i], i));
    }

    sort(vect.begin(), vect.end());

    cout<<"Enter the K: ";
    cin>>k;
    cout<<endl<<"The Kth smallest number is "<<vect[k-1].first <<" and index is at "<<vect[k-1].second+1;

    return 0;
};

