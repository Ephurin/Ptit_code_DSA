#include<bits/stdc++.h>
using namespace std;
int a[20],n,k,isOK;
void prep(){
	isOK=1;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0) isOK=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> n >> k;
		prep();
		while(isOK==1){
			for(int i=1;i<=k;i++) cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}

