#include<iostream>
using namespace std;

void solve(){
    int a; int b; int x; int y;
    cin>>a>>b>>x>>y;
    if(x*y >= a*b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
