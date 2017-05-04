#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vi;

    int n,x,jumlah=1;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x;

        vi.push_back(x);

    }

    sort(vi.begin(), vi.end());

    int m = vi.size()-1;
    for(int i= m;i >= 0;i--){
        if(vi[i] == vi[i-1]){
            jumlah++;
        }
        else
            break;
    }

    cout << jumlah << endl;

    return 0;
}
