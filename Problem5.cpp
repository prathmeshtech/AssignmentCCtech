// 	Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    string res="";

    for(int i=0; i<n.size(); i++){
        res = res + n[i]
    }
    return 0;
};


// N=123	Sum of digits=6
// N=10123	Sum of digits=7