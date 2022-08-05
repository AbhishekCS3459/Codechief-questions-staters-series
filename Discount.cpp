// my solution passed 9 testcases before 1 second

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fi(a,n) for(int i=a;i<n;i++)
// int amounttopay(int x){
// int am=100-x;
// return am;

// }
// int main(){
//  ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// int t;
// cin>>t;
// while (t>0)
// {
//     int x;
//     cin>>x;
//     t--;
//     cout<<amounttopay(x)<<"\n";
// }

// return 0;
// }


// author solution passed 10 testcase in under 1 second
#include <bits/stdc++.h>

using namespace std;
// initiallised a global array of size 55,i had initiallised a vector
int d[55];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;
	assert(T >= 1 && T <= 10000);
	
	while (T--) {
		int n;
		cin >> n;
		assert(n >= 1 && n <= 50);
	
		// count number of distinct elements in array d using set.
		set<int> st;
		for (int i = 0; i < n; i++) {
			cin >> d[i];
			assert(d[i] >= 1 && d[i] <= 100);
			st.insert(d[i]);
		}

		cout << st.size() << endl;
	}
	
	return 0;
}