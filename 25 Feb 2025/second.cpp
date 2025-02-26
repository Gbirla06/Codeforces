#include<bits/stdc++.h>

using namespace std;

void helper(){
    int n;cin>>n;
    long long a=0,b=0;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        if(ch=='-'){
            a++;
        }
        else{
            b++;
        }
    }

    if(a<2 or b<1){
        cout<<0<<endl;
    }
    else{
        long long left =  a/2;
        long long right = a/2;
        if(a%2>0){
            right++;
        }
        cout<<left*right*b<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}