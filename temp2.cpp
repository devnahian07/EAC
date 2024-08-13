#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
    int n, m;
    cin >> n >> m;
    if(n>m) cout << (n-m) << "\n";
    else{
        int tmp = n;
        int cnt1 = 0;
        while(tmp!=m){
            if(tmp<m) tmp*=2, cnt1++;
            else if(tmp>m) tmp--, cnt1++;
        }
        cout << cnt1 << "\n";
    }
    return 0;
}
