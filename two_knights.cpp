#include <bits/stdc++.h>
using namespace std;



long long twoKnight(long long n){
    long long all_combination = (n*n*n*n - n*n) / 2;
    long long invalid_case = 4*(n - 2)*(n - 1);
    return all_combination - invalid_case;
}


int main(){
    long long n;
    cin >> n;
    long long i = 1;
    while(i <= n){
        cout << twoKnight(i) << endl;
        i++;
    }
    return 0;
}