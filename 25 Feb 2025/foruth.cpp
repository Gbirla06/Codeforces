#include<bits/stdc++.h>

using namespace std;

void helper(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxInv = 0, maxInvInd = 0, totalInv = 0;
    vector<int> invPair(n,0);
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                cnt++;
            }
        }
        if(cnt>maxInv){
            maxInv = cnt;
            maxInvInd = i;
        }
        invPair[i] = cnt;
        totalInv+=cnt;
    }

    int ans = totalInv;
    int right = maxInvInd;
    for(int i=maxInvInd;i<n;i++){
        if(arr[i]<arr[maxInvInd]){
            totalInv--;
        }
        if(arr[i]>arr[maxInvInd]){
            totalInv++;
        }

        if(totalInv < ans){
            right = i;
            ans = totalInv;
        }
    }
    cout<<maxInvInd+1<<" "<<right+1<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}