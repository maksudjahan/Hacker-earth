#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]>=k) cout<<0;
    else cout<<k-a[0];
    cout<<'\n';
}
cout<<endl;
}
