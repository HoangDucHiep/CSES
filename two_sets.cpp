#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll Sn = (n*(n+1))/2;
    if(Sn % 2 != 0){
        cout << "NO";
        return 0;
    }else{
        vector<ll> set1, set2;
        ll half = Sn / 2;
        int i;
        for(i = n; i >= 1; i--){
            if(i <= half){
                set1.push_back(i);
                half -= i;
            }
            else{
                set2.push_back(i);
            }
        }
        cout << "YES" << endl;
        ll ss1 = set1.size();;
        ll ss2 = set2.size();
        cout << ss1 << endl;
        for(i = 0; i < ss1; i++){
            cout << set1[i] << " ";
        }
        cout << endl << ss2 << endl;
        for(i = 0; i < ss2; i++){
            cout << set2[i] << " ";
        }

    }
}