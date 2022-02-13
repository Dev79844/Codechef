#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s;
    cin>>n>>s;
    int cnt1=0; int cnt0=0;
    for(int i=0; i<n;i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    
    if(n%2==0){
        if(cnt0 == cnt1) cout<<"YES"<<endl;
        else if(cnt0%2==0 && cnt1%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}