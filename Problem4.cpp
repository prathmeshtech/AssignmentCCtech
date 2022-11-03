// Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
// N=12345	sum of first and fifth digit=1+5=6
// N=91912	sum of first and fifth digit=9+2=11

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter 5 digits number: ";
    cin>>str;
    // cout<<str;

    if(str.size() == 5){
        int first = int(str[0]-'0');
        int last = int(str[4]-'0');
        cout<<" The Sum of first and last digit is: "<< first+last;
    }else{
        cout<<"Wrong Input";
    }

    return 0;
};