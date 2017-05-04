#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    int j=0;
    int i=0;
    while(n--){
       if(c[i+2]==0){
             j++;
             i = i+2;

       }
       else if(c[i+2]==1){
            if(c[i+1]==0){
                j++;
                i = i+1;
            }
       }
    }
    cout << j << endl;
    return 0;
}
