#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long total = 0, prev = arr[0];

    for(int i = 1; i < n; i++){
        total += max(0LL, prev - arr[i]);
        prev = max(arr[i], prev);
    }
    cout << total;
}