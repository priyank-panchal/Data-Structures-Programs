#include <bits/stdc++.h>

using namespace std;


// Complete the marcsCakewalk function below.
long marcsCakewalk(vector<int> &calorie) 
{
    sort(calorie.begin(),calorie.end(),greater<int>());
     long ans=0;
    for(long i=0;i<calorie.size();i++)
    {
        long pwr=pow(2,i);
        ans+=(pwr * calorie[i]); 
    }
    return ans;
}
int main()
{
  #ifndef ONLINE_JUDGE
           //for getting input from input.txt
        freopen("input.txt", "r", stdin);
          //for writing output to output.txt
        freopen("output.txt", "w", stdout);
   #endif
  int n;
  cin>>n;
  vector<int> calorie(n);
  for(int i=0;i<n;i++)
  {
      cin>>calorie[i];
  }
  long ans=marcsCakewalk(calorie);
  cout<<ans<<endl;
}
