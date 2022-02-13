#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x; string s;
    cin>>x>>s;
    int cntC=0; int cntN=0;
    for(int i=0; i<14; i++){
        if(s[i]=='C') cntC += 2;
        else if(s[i] == 'N') cntN += 2;
        else{
            cntC++; cntN++;
        }
    }

    if(cntC > cntN) cout<<60*x<<endl;
    else if(cntC < cntN) cout<<40*x<<endl;
    else cout<<55*x<<endl;

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}