#include <bits/stdc++.h>

using namespace std;
int A[1000];
int main(){
    int n,i,a;
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>a;
        A[a] = A[a]+1;
    }
    int ans=0;
for(int i=1;i<1000;i++){
    ans=max( ans , A[i-1]+A[i]);
}
cout<<ans;
return 0;
}
