#include <bits/stdc++.h>
using namespace std;




int main(){
    iostream::sync_with_stdio(0);

    int n;
    cin >> n;
    for(int i = 2;i*i <= n;i++){
        while(n%i == 0){
            cout << i << "\n";
            n /= i;
        }
    }
    if(n != 1) cout << n << "\n";

    return 0;
}