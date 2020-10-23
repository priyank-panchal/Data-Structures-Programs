#include <iostream>
#include<algorithm>
using namespace std;

 int main() { 
  int t;
  cin>>t;
  while(t--)
  {
  string str;
  cin>>str;
  int ct=0;
  int cnt[26]={0}; 
  for(int i=0;i<str.length();i++)
  {
      cnt[str[i] - 'a']++;
  }
  for(int i=0;i<26;i++)
  {
    if(cnt[i] == 2)
    {
      ct++;
    }
  }
  if(ct==2)
  {
      cout<<"Yes"<<endl;
      continue;   
  }
  cout<<"No"<<endl;
}
}
