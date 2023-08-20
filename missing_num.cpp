#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum_all = (n*(1 + n))/2;
    long long num;
    for(int i = n-1; i > 0; i--){
        cin >> num;
        sum_all -= num;
    }

    cout << sum_all;
}