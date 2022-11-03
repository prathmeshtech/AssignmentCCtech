// Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the result.
// CP=500, SP=700	PROFIT=200
// CP=500, SP=450	LOSS=50

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cp,sp;
    cin>>cp>>sp;

    if(cp < sp){
        int profit = sp - cp;
        cout<<"Profit: "<<profit;
    }
    else{
        int loss = cp - sp;
        cout<<"Loss: "<<loss;
    }
    
    return 0;
};

