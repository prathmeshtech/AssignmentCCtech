#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;

    while(n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    cout<<"Sum: "<<sum;
    return 0;
};


// N=123	Sum of digits=6
// N=10123	Sum of digits=7