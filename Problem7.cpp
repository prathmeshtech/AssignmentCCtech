// Write a program to a accept a list of N integers. Find the largest and the smallest number in the list and their respective positions in the list.
// N=6, List = (55,3,23,452,82,19)	Largest integer=452, Position of Largest integer=4, Smallest integer=3, Position of smallest integer=2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int index = 0;
    int min = arr[index];
    
    int maxindex = 0;
    int max = arr[index];

    for (int i = 1; i < n; i++){
        if (arr[i] <= min){
        min = arr[i];
        index = i;
        }
    }

    for(int j=1; j<n; j++){
        if(arr[j] > max){
            max = arr[j];
            maxindex = j;
        }
    }

    cout<<"The Smallest Element is: "<<min<<" at the index "<< index+1 <<endl;
    cout<<"The Biggest Element is: "<<max<<" at the index "<< maxindex+1 <<endl;
    
    return 0;
};

