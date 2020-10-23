#include <bits/stdc++.h>
using namespace std;
void hello()
{
    cout<<"jay meldi ma";
}
int main()
{

    int n;
    n=GetInt();
    vector<int> orders;
    for (int i = 0; i < n; i++) {
        orders.push_back(n + i);
    }
    sort(orders.begin(),orders.end());
    for(int i=0;i<orders.size();i++)
    {
        cout<<orders[i]<<" ";
    }   
    cout<<endl;
    hello();
    return 0;
}
