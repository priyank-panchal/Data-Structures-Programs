#include <iostream>
#include<list>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	list<int> a;
	//sing list 
	a.push_back(20);
	a.push_back(30);
	list<list<int>> a2;
	list<int> singlist;
	a2[0].push_back(200);
	singlist.push_back(300);
	singlist.push_back(2000);
	a2[1].push_back(3000);
	for (int i = 0; i < 2; ++i)
	{
		for(int nbr:a2[i])
		{
			cout<<nbr<<endl;
		}
		cout<<endl;
	}

}