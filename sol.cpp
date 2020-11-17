#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	while(tt--) {
		string s, t;
		cin >> s >> t;
		bool ok=0;
		for(int i=0; i<(int)s.size(); ++i) {
			if(s[i]=='o'||t[i]=='o') {
				int cnt=0;
				for(int j=0; j<(int)s.size(); ++j) {
					if(i==j)
						continue;
					if(s[j]=='b'||t[j]=='b')
						cnt++;
				}
				if(cnt==2)
					ok=1;
			}
		}
		cout << (ok?"yes":"no") << "\n";
	}
}
