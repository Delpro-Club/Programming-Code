#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int counts=0;

    cin >> s;

    int pjg = s.length();

    for(int i=0;i<pjg;i++){
        if(s[i]!='S'){
            counts++;
            //cout << s[i] << " ";
        }
        if(s[i+1] != 'O'){
            counts++;
            //cout << s[i+1] << " ";
        }
        if(s[i+2]!='S'){
            counts++;
            //cout << s[i+2] << endl;
        }

        //cout << s[i] << " " << s[i+1] << " " << s[i+2] << endl;
        i += 2;
    }

    cout << counts << endl;
    return 0;
}
