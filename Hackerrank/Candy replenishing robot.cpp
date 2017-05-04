#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,t,a,counts=0,c,b=0;
    vector<int> aa;
    cin >> n >> t;

    for(int i=0;i<t;i++){
        cin >> a;
        aa.push_back(a);
    }

    c = n;

    for(int i=0;i<aa.size();i++){
        c= c-aa[i];
        if(c < 5 && i != (aa.size()-1)){
            b = n-c;
            c = c + b;
            counts += b;
        }
    }

    cout << counts << endl;
    return 0;
}
