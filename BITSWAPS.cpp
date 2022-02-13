#include<iostream>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n]; int cnt=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=n; j>1; j--){
            if(a[i] & a[j] == 0){
                continue; i++;
            }
            else{
                if(a[i] > a[j]){
                    int temp;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    cnt++; i++; j--;
                }
                else{
                    continue; i++;
                }
            }
        }
    }

    if(cnt != 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}