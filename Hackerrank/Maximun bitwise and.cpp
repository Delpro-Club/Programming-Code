#include<bits/stdc++.h>

using namespace std;

vector<int> a;
vector<int> b;

int main(){

    unsigned int n,m,p,result=0;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> m;
        cin >> p;

        if(p%2==0) {
            if(m < (p-1)) {
                p = p -1;
                m = p -1;
            }
        }
        else if(p %2 != 0 && m < p){
                m = p -1;
        }
        result = m & p;
        cout << result << endl;
    }

    return 0;
}
