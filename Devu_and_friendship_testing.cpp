#include <bits/stdc++.h>
using namespace std;
int maximumfriends(vector<int>v){
    unordered_map<int,int>m;
    for (int i = 0; i < v.size(); i++) {
        m[v[i]]++;
    }
  
    return m.size();
}

int main() {
	// your code goes here
		vector<int>v ;
		int t;
		cin>>t;
		while(t>0){
	int n;
	cin>>n;

	for (int i = 0; i < n; i++) {
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
		    
		cout<<maximumfriends(v)<<endl; 
        t--;   
		}
	return 0;
}
