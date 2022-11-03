#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m = n;

    int rev_num = 0;
    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }

    cout<<"M: "<<m<<endl;
    cout<<"N: "<<rev_num<<endl;

    if(rev_num > m){
        cout<<rev_num<<" is greater than "<<m<<endl;
    }
    else{
        cout<<m<<" is greater than "<< rev_num;
    }
    return 0;
};


// N=123	Sum of digits=6
// N=10123	Sum of digits=7