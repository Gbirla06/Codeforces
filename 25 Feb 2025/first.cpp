#include<bits/stdc++.h>

using namespace std;

void helper(){
    int n,k,p;
    cin>>n>>k>>p;
    if(k<0){
        k=-k;
    }

    if(n*p<k){
       cout<<-1<<endl;
    }
    else {
        int ans = k/p;
        if(k%p>0){
            ans++;
        }
        cout<<ans<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}