#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int MarkAndToys(int k,vector<int> &v)
{	
	sort(v.begin(),v.end());
	long long int ans=0,cnt=0;
	for(int i=0;i<v.size();++i)
	{
		if(v[i] + ans < k)
		{
			ans+=v[i];
			cnt++;
		}
		else
			break;

	}
	return cnt;
}
int main()
{
	#ifndef ONLINE_JUDGE
           //for getting input from input.txt
        freopen("input.txt", "r", stdin);
          //for writing output to output.txt
        freopen("output.txt", "w", stdout);
	 #endif
	long long int n,k;
	cin>>n >> k;
	vector<int> Vect(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>Vect[i];
	}
	 int ans=MarkAndToys(k,Vect);
	cout<<ans<<endl;
}