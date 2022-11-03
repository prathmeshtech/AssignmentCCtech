// Write a program to accept a list L1 of N integers. Accept integer M. Multiply each integer in the list by M and generate a new list L2.
// Print the lists L1 and L2.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the count of numbers in list: ";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the numbers of the list: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number to multiply: ";
    cin>>k;

    int res_arr[n];
    for(int i =0; i<n; i++){
        res_arr[i] = k*arr[i];
    } 

    cout<<"The 1st List is: ";    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The 2nd List is: ";    
    for(int i=0; i<n; i++){
        cout<<res_arr[i]<<" ";
    }

    return 0;
};