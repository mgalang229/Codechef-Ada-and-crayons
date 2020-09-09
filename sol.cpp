#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int cnt=0, cnt2=0;
		if(s[0]=='U')
			cnt++;
		else
			cnt2++;
		for(int i=1; i<(int)s.size(); ++i) {
			if(s[i]=='U'&&s[i-1]!='U')
				cnt++;
			else if(s[i]=='D'&&s[i-1]!='D')
				cnt2++;
		}
		if(cnt>cnt2)
			cout << cnt2;
		else
			cout << cnt;
		cout << "\n";
	}
}
