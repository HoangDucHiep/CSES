#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

/* ll factorial(ll x){
    ll fac = 1;
    while(x >= 1){
        fac *= x--;
    }
    return fac;
} */


int main(){
    ll n, current = 5, answer = 0;
    cin >> n;
    while (current <= n)
    {
        answer += n/current;
        current *= 5;
    }
    cout << answer << endl;
    return 0;
}