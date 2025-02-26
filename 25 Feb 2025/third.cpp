#include<bits/stdc++.h>

using namespace std;

bool check(int ans, int num, int x){
    ans = ans|num;
    while(ans>0 and x>0){
        if((ans&1) != (x&1)){
            return false;
        }
        ans/=2;
        x/=2;
    }

    if(ans>0 and x==0){
        return false;
    }
    return true;
}
void helper(){
    int n, x;
    cin>>n>>x;
    int ans=0,i=0;

    for(i=0;i<n-1;i++){
        if(check(ans,i,x)){
            ans|=i;
            cout<<i<<" ";
        }
        else{
            break;
        }
        
    }
    while(i<n){
        if(i==n-1){
            if((i|ans) == x){
                cout<<i<<" ";
            }
            else{
                cout<<x<<" ";
            }
        }
        else{
            cout<<0<<" ";
        }
        i++;
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}