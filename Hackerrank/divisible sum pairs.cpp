#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int k;
    int count=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            //printf("a[%d] : %d + a[%d] : %d = %d\n",i,a[i],j,a[j],a[i]+a[j]);
            if(i<j && (a[i]+a[j])%k==0){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
