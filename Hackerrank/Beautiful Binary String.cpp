#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,count=0;
    string s;

    cin >> n;

        cin >> s;

        for(int j=0;j<s.length();j++){

            if(s[j] == '0'){
                if(s[j+1] == '1') {
                    if(s[j+2] == '0'){
                        count++;
                        j += 2;
                    }
                }
            }
        }

        cout << count << endl;

        count = 0;

    return 0;
}
