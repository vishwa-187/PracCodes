#include <bits/stdc++.h>
typedef long long int uli;
using namespace std;

int main(){
    // int b, n, m, i ,j;
    // cin>>b>>n>>m;
    // int k[n];
    // int p[m];
    // int pos1, pos2;
    // for(i=0;i<n;i++){
    //     cin>>k[i];
    // }
    // for(i=0;i<m;i++){
    //     cin>>p[i];
    // }
    // int ans = b -( k[0]+p[0]);
    // int ret = 0;
    // for( i=0;i<n;i++){
    //     for(j=0;j<m;j++){
    //         if( (b- (k[i]+p[j]))< ans && (b- (k[i]+p[j]))>0){
    //             ans = (b- (k[i]+p[j])) ;
    //             pos1 = i;
    //             pos2 = j;
    //             ret = k[pos1]+p[pos2];
                
    //         }
    //         else{
    //             ret = -1;
    //         }
    //     }
    // }
    // cout<<ret;
    
    // int b, n, m, i ,j;
    // cin>>b>>n>>m;
    // vector<int> k(n);
    // for(int i=0;i<n ;i++){
    //     cin>> k[i];
    // }
    // vector<int> p(n);
    // for(int i=0;i<m ;i++){
    //     cin>> p[i];
    // }
    // long long int ans = -1;
    // for(i = 0;i<n;i++){
    //     for(j=0;j<m;j++){
    //         long long int bet = k[i]+ p[j];
    //         if(bet<=b){  
    //             if( ans == -1 || ans< bet){
    //             ans = bet;
    //         }}
            
    //     }
    // }
    // cout<< ans;
    
     int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
       cin >> pendrives[pendrives_i];
    }
    uli ans=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            uli bet=keyboards[i]+pendrives[j];
            if(bet<=s){
                if(ans==-1 || bet>ans)ans=bet;
            }
        }
    
    }
    printf("%lld\n",ans);
    return 0;
}
