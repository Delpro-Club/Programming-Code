#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m,result=0;

    cin >> n;
    cin >> m;

    result = n & m;
    cout << result << endl;
    if((result & (result-1))==0) cout << true;

    return 0;
}
