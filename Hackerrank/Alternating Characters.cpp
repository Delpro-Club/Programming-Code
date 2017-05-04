#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,count=0;
    string s;

    cin >> n;

    for(int i=0;i < n; i++){
        cin >> s;

        for(int j=0;j<s.length();j++){
            if(s[j]==s[j+1]){
                count++;
            }
            else {
                continue;
            }
        }

        cout << count << endl;

        count=0;
    }


    return 0;
}
