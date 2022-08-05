#include<bits/stdc++.h>
using namespace std;
int maxvalue(int a,int b,int c,int d){
    int ans1=max(a,b);
    int ans2=max(c,d);

    return ans1+ans2;
}
#define ll long long
#define fi(a,n) for(int i=a;i<n;i++)
int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
int t;
cin>>t;
while (t>0)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<maxvalue(a,b,c,d)<<endl;
    t--;
}

return 0;
}
