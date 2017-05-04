#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int k;
    int q,m;
    cin >> n >> k >> q;
    int *a;
    a = new int[n];
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a0 = 0; a0 < q; a0++){
        cin >> m;
        int index = (((m-k)%n)+n)%n;
        cout << a[index] << endl;
    }


    return 0;
}
