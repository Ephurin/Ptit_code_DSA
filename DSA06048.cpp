#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			ans=i+1;
			break;
		}
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
