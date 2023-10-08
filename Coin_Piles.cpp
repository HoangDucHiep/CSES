#include <bits/stdc++.h>

using namespace std;

void swap(long long &a, long long&b){
    if (a < b){
        long long temp = a;
        a = b;
        b = temp;
    }
}


int main(){
    long long a, b;
    long long test_case = 0;
    cin >> test_case;
    while(test_case>0){
        cin >> a >> b;
        swap(a, b);
        cout << (((a+b)%3==0) && (b*2>=a) ? "YES\n" : "NO\n");
        test_case--;
    }
    return 0;
}