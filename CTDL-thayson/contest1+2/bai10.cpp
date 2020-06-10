//https://www.geeksforgeeks.org/gray-to-binary-and-binary-to-gray-conversion/
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
string s;
char xor_c(char a, char b) { return (a == b) ? '0' : '1'; } 
void solve(){
    cin >> s;
    string gra = "";
    gra += s[0];
    for(int i = 1 ; i < s.length() ; i++){
        gra += xor_c(s[i -1],s[i]);
    }
    cout << gra << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3