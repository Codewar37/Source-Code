//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int a,b;
void input(){
    cin >> a >> b;
}

void solve(){
    if(a < b) swap(a,b); 
    int kt1 = b;
    int kt2 = (a - b) / 2;
    cout << kt1 << " "  << kt2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3