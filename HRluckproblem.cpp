#include <bits/stdc++.h>
using namespace std;
int LuckProlbem(int k,vector<vector<int>> &v1)
{
	int luck=0,cnt=0;
	int smallest=0;
	vector<int> newvec;
	for(int i=0;i<v1.size();i++)
	{
		if(v1[i][1] == 1)
		{
			newvec.push_back(v1[i][0]);
		}
		else 
		{
			luck+=v1[i][0];	
		}
		
	}
	sort(newvec.begin(),newvec.end(),greater<>());
	for(int i=0;i<min(k,(int)newvec.size());i++)
	{
		luck+=newvec[i];
	}
	for(int i=k;i<newvec.size();i++)
	{
		luck-=newvec[i];
	}
	return luck;
}
int main()
{
	#ifndef ONLINE_JUDGE
           //for getting input from input.txt
        freopen("input.txt", "r", stdin);
          //for writing output to output.txt
        freopen("output.txt", "w", stdout);
	 #endif
	int n,k;
	cin>>n>>k;
	vector<vector<int>> vect(n);
	for(int i=0;i<n;i++)
	{
		vect[i].resize(2);
		for(int j=0;j<2;j++)
		{
			cin>>vect[i][j];
		}
	}
	int ans=LuckProlbem(k,vect);
	cout<<ans<<endl;

}