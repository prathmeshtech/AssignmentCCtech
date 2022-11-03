#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int rev_num = 0;
    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }

    cout<<"Sum: "<<rev_num;
    return 0;
};


// N=123	Sum of digits=6
// N=10123	Sum of digits=7