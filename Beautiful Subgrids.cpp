#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 3005;

int x;
ll ans;
bitset<maxN> ef[maxN];

int fun(int n){
    return n*(n-1);
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> x;
    for(int i = 0; i < x; i++)
        cin >> ef[i];

    for(int i = 0; i < x; i++)
        for(int j = i+1; j < x; j++)
            ans += fun((ef[i]&ef[j]).count());

    cout << (ans>>1);
}
