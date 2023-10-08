#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

typedef long long ll;



int main(){
    unsigned long long n;
    cin >> n;

    unsigned long long result = 1;
    while(n > 0){
        result *= 2;
        result %= MOD;
        n--;
    }
    cout << result;
}