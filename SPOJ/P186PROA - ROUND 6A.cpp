//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
int n,m,d,a[100002],sum = 0;
void solve(){
    cin >> n >> m >> d;
    n = n * m;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a + n);
    for(int i = 0 ; i < n ; i++){
        sum += abs(a[i] - a[n / 2]);
    }
    if(sum % d) cout << -1;
    else cout << sum / d;    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3