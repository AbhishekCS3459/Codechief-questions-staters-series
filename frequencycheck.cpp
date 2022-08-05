#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,int>&m){
    unordered_map<int,int>:: iterator  it=m.begin();
    for(it=m.begin();it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
#define ll long long
#define fi(a,n) for(int i=a;i<n;i++)
int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
vector<int>v;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}

unordered_map<int,int>m;
for (int i = 0; i < v.size(); i++)
{
   m[v[i]]++;
}
print(m);


return 0;
}
