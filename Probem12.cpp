// 	Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle. Select appropriate data structure
//  and explain why you chose it. Arrange the circles in increasing order of their area and print all the data of each circle.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,x,y;
    cout<<"Enter number of circles you give: ";
    cin>>n;

    vector<pair<pair<int,int>,int>> map;
    vector<float> area(n);

    for(int i=0; i<n; i++){
        cout<<"Enter radius and x,y coordinates of circle: ";
        cin>>r>>x>>y;

        map.push_back(make_pair(r, make_pair(x,y)));
        area.push_back(map.first*map.first*3.14);
    }

    for(int i=0; i<n; i++){
        cout<<"Area of the circle is: "<<area[i];
        cout<<"Radius of the circle is: "<<map[i].first;
        cout<<"x, Y coordinates are: "<<map[i].second.first<<","<<map[i].second.second;
        cout<<endl;
    }
    return 0;
};

