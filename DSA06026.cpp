#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bool sorted=false;int cnt=1;
	while(!sorted){
		sorted=true;
		for(int i=0;i<n;i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
				sorted=false;
			}
		}
		if(!sorted){
			cout << "Buoc " << cnt << ": ";
			for(int i=0;i<n;i++) cout << a[i] << " ";
			cout << endl;
			cnt++;
		}
	}
}
int main(){
	solve();
	return 0;
}
