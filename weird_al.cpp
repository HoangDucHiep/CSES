#include <bits/stdc++.h>

using namespace std;

void weird(long long n){
    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0){
            n = n/2;
        }else{
            n = (3*n + 1);
        }
    }
    cout << n;
}



int main(){
    long long n;
    cin >> n;
    weird(n);
}