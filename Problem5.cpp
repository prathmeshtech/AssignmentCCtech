// 	Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, res="";
    cout<<"Enter 5 digits number: ";
    cin>>str;
    // cout<<str;

    if(str.size() == 5){
        cout<<"The number is: ";
        for(int i=0; i<5; i++){
            if(str[i] != '9')
            {
                int temp = (int(str[i]-'0'))+1;
                cout<<temp;
            }
            else{
                cout<<'0';
            }
        }
    }else{
        cout<<"Wrong Input";
    }

    return 0;
};
