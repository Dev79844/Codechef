#include <iostream>
using namespace std;

typedef long long ll;

void solve(){
    int n; cin>>n;
    int a[n]; int cnt=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int ans = 1+i+cnt;
        if(ans == a[i]) cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
	int t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}