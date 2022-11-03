// Write a program to accept a list L1 of N integers. Accept integer D. Generate list L2 such that it contains only those integers from list
// L1 which are divisible by D. Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the count of numbers in list1: ";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the numbers of the list: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number to divide from: ";
    cin>>k;

    vector<int> res_arr;

    for(int i =0; i<n; i++){
        if(arr[i]%k == 0){
            res_arr.push_back(arr[i]);
        }
    } 

    cout<<"The 1st List is: ";    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The 2nd List is: ";    
    for(int i=0; i<res_arr.size(); i++){
        cout<<res_arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The size of the 2nd List is:"<< res_arr.size();

    return 0;
};